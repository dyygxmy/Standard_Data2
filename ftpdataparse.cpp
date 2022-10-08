#include "ftpdataparse.h"
#include <QEventLoop>
#include <QTime>
#include <QCoreApplication>

void QtSleep(unsigned int msec, QEventLoop::ProcessEventsFlags flags)  //add by wxm
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents(flags, 1);
        QEventLoop eventloop;
        QTimer::singleShot(10, &eventloop, SLOT(quit()));
        eventloop.exec();
    }
}

ftpDataParse::ftpDataParse(QObject *parent) :
    QObject(parent)
{
    StartBolt = 0;
    NOKFlag = false ; //前五颗螺栓存在不合格
    parseJsonData_thread.start();
    this->moveToThread(&parseJsonData_thread);
}
void ftpDataParse::ftpStart()
{
    DTdebug() << "FTP JSON Data parse thread start!!!!!!!!!!!!" ;
    QString path;
    path="/tmp/Curve/FO";
    QDir dir(path);
    if(!dir.exists())
    {
        dir.mkpath(path);//创建多级目录
    }
    path="/tmp/wrongCurve/";
    QDir dir_wrong(path);
    if(!dir_wrong.exists())
    {
        dir_wrong.mkpath(path);//创建多级目录
    }
    //    channel_is_true = false;
    connect(&ftpupload,SIGNAL(timeout()),this,SLOT(ftptimeouts()));
    ftpupload.start(1000);
    systemRunStatus = "OK";
}

void ftpDataParse::ftptimeouts()
{
    FindFile("/tmp/Curve");
}

void ftpDataParse::revRunStatus(QString status)
{
    systemRunStatus = status;
}

//使能
void ftpDataParse::sendReadOperate(bool enable,int n)
{
    if(!enable) //
    {
    }
    else
    {
        //StartBolt = n;      //modify by wxm
    }
}

void ftpDataParse::FindFile(QString path)
{
    //DTdebug() << "find file1";
    QDir dir(path);
    if (!dir.exists())
        return ;
    dir.setFilter(QDir::Dirs|QDir::Files);
    dir.setSorting(QDir::DirsFirst);
    QFileInfoList list = dir.entryInfoList();
    int i=0;
    do{
        if(ftpupload.isActive())
        {
            ftpupload.stop();
        }
        QFileInfo fileInfo = list.at(i);
        QString fileNm = fileInfo.fileName();

        if(fileNm=="."||fileNm=="..")
        {
            i++;
            continue;
        }
        bool bisDir=fileInfo.isDir();
        if(bisDir)
        {
            FindFile(fileInfo.filePath());
        }
        else
        {
            DTdebug() << "find file parsing!!" << fileInfo.filePath();

//            if(systemRunStatus != "ING")
//            {
                //增加文件名是否为条码的判断 add by wuxuemei
                QString tmpFileName = fileInfo.baseName();
                QStringList tmpList = tmpFileName.split("_");
                if(tmpList.count() > 1)
                {
                    static QString sCode;
                    tmpCode = tmpList.at(1);
                    if((tmpCode.count() == 17) && (tmpCode.startsWith("L")))
                    {
                        if(tmpCode.compare(sCode))
                        {
                            StartBolt = 5;     //add by wxm
                            sCode = tmpCode;
                            emit serialCom(tmpCode,false,"BarCode");
                        }
                        else
                        {
                            emit serialCom(tmpCode,true,"BarCode");
                        }
                    }
                }
                //system(QString("mv "+ fileInfo.absoluteFilePath()+" /tmp/wrongCurve/").toLocal8Bit().data());
                //DTdebug() << "systemRunStatus != ING move file "+fileInfo.absoluteFilePath()+" to /tmp/wrongCurve";
//            }
//                QtSleep(500, QEventLoop::AllEvents);  //add by wxm    //大量文件会导致部分文件在为使用的情况下被删除
//            else
//            {
                parseFile(fileInfo.absoluteFilePath(),fileInfo.baseName());
//            }
        }
        i++;
    }while(i<list.size());

    ftpupload.start();
}

void ftpDataParse::parseFile(QString filepath,QString fileName)
{
    Q_UNUSED(fileName);
	/*
    if(systemRunStatus != "ING")  //modify by wxm
    {
        system(QString("mv "+ filepath+" /tmp/wrongCurve/").toLocal8Bit().data());
        DTdebug() << "systemRunStatus != ING move file "+filepath+" to /tmp/wrongCurve";
        return;
    }*/
    //    int num = fileName.mid(21,3).toInt();

    QJson::Parser parser;
    bool ok;

    QFile file(filepath);
    if(!file.open(QIODevice::ReadOnly| QIODevice::Text))
    {
        DTdebug() << "Cannot open testdsn file for Reading";
    }
    QByteArray json = file.readAll();
    QByteArray tempjson = json.right(10);
    QByteArray rightJson = "";
    for(int i=0;i<tempjson.size();i++)
    {
        if(tempjson.at(i) != 0x0d && tempjson.at(i) != 0x0a && tempjson.at(i) != 0x20)
            rightJson.append(tempjson[i]);
    }
//    DTdebug()<<"rightJson"<<rightJson<<rightJson.right(3);
    if(rightJson.right(3) == "}]}")
    {
        QMap<QString,int>::iterator iter;
        for(iter = wrongMap.begin(); iter != wrongMap.end(); ++iter)
        {
            if(filepath == iter.key())
            {
                wrongMap.erase(iter);
                DTdebug()<<"delete "+filepath+" from wrongMap";
                break;
            }
        }

        QVariantMap result = parser.parse(json, &ok).toMap();
        if (!ok) {
            DTdebug()<<"An error occurred during parsing"<<json;
            system(QString("mv "+ filepath+" /tmp/wrongCurve/").toLocal8Bit().data());
            DTdebug() << "parser fail move file "+filepath+" to /tmp/wrongCurve";
            return;
        }
        if(StartBolt == 5 && NOKFlag == false)    //add by wxm
            StartBolt = 0;
        else if(StartBolt != 5 && NOKFlag == false)
            StartBolt = 5;

        NOKFlag = false ;

        for(int m=0;m<result["no of channels"].toInt();m++)
        {
            QString Date_time,DATE_blc,TIME_blc,STATE_blc,MI_blc="",WI_blc="",Cycle_CSR,Program_blc,Channel,Curve;
            QString Torque_Max="",Torque_Min="",Angle_Max="",Angle_Min="";
            QVariantMap curveMap = result["channels"].toList().at(m).toMap();
//            Curve = result["channels"].toList().at(m).toString();
            QVariantList curveList;
            curveList << curveMap;
            QJson::Serializer serializer;
            QByteArray curveJson = serializer.serialize(curveList,&ok);
            Curve = curveJson.mid(1,curveJson.length()-2);
//            DTdebug() << "curve*********" << Curve;
            STATE_blc = curveMap["result"].toString();
            Channel = QString::number(curveMap["node id"].toDouble()*10);
            Program_blc = curveMap["prg nr"].toString();
            Date_time = curveMap["date"].toString();
            DATE_blc = Date_time.mid(0,10);
            TIME_blc = Date_time.mid(11,8);
            Cycle_CSR = curveMap["cycle"].toString();

            QVariantMap tightening_steps=curveMap["tightening steps"].toList().last().toMap();
            int size = tightening_steps["tightening functions"].toList().size();
            DTdebug()<<"Channel"<<Channel<<"tightening functions"<<size<<"program"<<Program_blc;
            for(int i=0;i<size;i++)
            {
                QVariantMap tightening_functions=tightening_steps["tightening functions"].toList().at(i).toMap();
                if(tightening_functions["name"].toString()=="MF AngleMax"
                        || tightening_functions["name"].toString()=="MFs AngleMax")
                {
                    WI_blc = tightening_functions["act"].toString();
                    Angle_Max = tightening_functions["nom"].toString();
                }
                else if(tightening_functions["name"].toString()=="MF AngleMin")
                {
                    Angle_Min = tightening_functions["nom"].toString();
                }
                else if(tightening_functions["name"].toString()=="MF TorqueMax"
                        || tightening_functions["name"].toString()=="MFs TorqueMax")
                {
                    MI_blc = tightening_functions["act"].toString();
                    Torque_Max = tightening_functions["nom"].toString();
                }
                else if(tightening_functions["name"].toString()=="MF TorqueMin")
                {
                    Torque_Min = tightening_functions["nom"].toString();
                }
            }
            if(MI_blc == "")
                MI_blc = "0";
            if(WI_blc  == "")
                WI_blc = "0";
            if(Angle_Max == "")
                Angle_Max = "0";
            if(Angle_Min == "")
                Angle_Min = "0";
            if(Torque_Max == "")
                Torque_Max = "0";
            if(Torque_Min == "")
                Torque_Min = "0";
            DTdebug()<<"***********"<<Channel<<Program_blc;
//            if(systemRunStatus == "ING")
//            {
//                return;
//            }
            DATA_STRUCT demo;
            demo.data_model[0] = DATE_blc;
            demo.data_model[1] = TIME_blc;
            demo.data_model[2] = STATE_blc;
            demo.data_model[3] = MI_blc;
            demo.data_model[4] = WI_blc;
            demo.data_model[5] = carInfor[0].boltSN[StartBolt+m];
            demo.data_model[6] = tmpCode ;
            demo.data_model[7] = Cycle_CSR;
            demo.data_model[8] = Curve;
            demo.data_model[9] = Program_blc;
            demo.data_model[10] = Channel;
            demo.data_model[11] = Body_NO;
            if(STATE_blc == "OK")
            {
                demo.data_model[12] = QString::number(BoltOrder[0]++);
            }
            else
            {
                NOKFlag = true ;
                demo.data_model[12] = QString::number(BoltOrder[0]+m);
            }
            demo.data_model[13] = Torque_Max;
            demo.data_model[14] = Torque_Min;
            demo.data_model[15] = "0";
            demo.data_model[16] = Angle_Max;
            demo.data_model[17] = Angle_Min;
            for(int i=0;i<18;i++)
            {
                if(i == 8)
                    continue;
                DTdebug()<<"emit date_model:"<<i<<demo.data_model[i];
            }
            QVariant DataVar;
            DataVar.setValue(demo);
            emit sendfromjsonthread(DataVar);
            emit send_mainwindow(MI_blc,WI_blc,STATE_blc,m);
            QtSleep(100, QEventLoop::AllEvents);
        }
        unlink(filepath.toLocal8Bit().data());//delete file
        DTdebug() << "delete file "+filepath;
    }
    else
    {
        DTdebug() << filepath <<" is incomplete or wrong";
        QMap<QString,int>::iterator iter;
        bool newfile = true;
        for(iter=wrongMap.begin(); iter != wrongMap.end(); ++iter)
        {
            if(filepath == iter.key())
            {
                newfile = false;
                //                wrongMap[filepath]++;
                ++iter.value();
                if(iter.value()==5)
                {
                    wrongMap.erase(iter);
                    DTdebug()<<"delete "+filepath+" from wrongMap >5 times";
                    system(QString("mv "+ filepath+" /tmp/wrongCurve/").toLocal8Bit().data());
                    //                    unlink(filepath.toLocal8Bit().data());
                    DTdebug() << "move file "+filepath+" to /tmp/wrongCurve";
                }
                break;
            }
        }
        if(newfile)
        {
            wrongMap[filepath]=1;
            DTdebug()<<"add newfile "+filepath+" to wrongMap";
        }
    }
//    ftpupload.start();
}

