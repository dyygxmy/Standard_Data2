#include "xmldata.h"

xmlData::xmlData(QObject *parent) :
    QObject(parent)
{
    xml_thread.start();
    this->moveToThread(&xml_thread);
    dY1V = 0 ;
    dXVA = 0 ;
}
void xmlData::xmlInit()
{
    qDebug()<< "xml data thread start"<<vari1;
    tcpServer = new QTcpServer(this);
    if(!tcpServer->listen(QHostAddress::Any,4710))
    {  //**本地主机的4710端口，如果出错就输出错误信息，并关闭
        qDebug() << tcpServer->errorString();
    }
    connect(tcpServer,SIGNAL(newConnection()),this,SLOT(DataReceived()));
    xmlTimer = new QTimer(this);
    connect(xmlTimer,SIGNAL(timeout()),this,SLOT(heartTimerFunc()));
    timerCount=0;
    socket4710Flag = false;
    ppFlag = false;
}
/***************************************************/
//link success
/***************************************************/
void xmlData::DataReceived()
{
    qDebug() << "4710 port  ************ connect success";
    m_pTcpSocket = tcpServer->nextPendingConnection();
    connect(m_pTcpSocket, SIGNAL(readyRead()),this, SLOT(recMessage()));
    xmlTimer->start(5000);
    emit  havedconnect(true);
}
/***************************************************/
//5000ms timer function
/***************************************************/
void xmlData::heartTimerFunc()
{
    timerCount++;
    if(timerCount>3)
    {
        qDebug() << "4710 heart time out";
        timerCount=0;
        xmlTimer->stop();
        closePortBTcpServer();
    }
}

/***************************************************/
//close link
/***************************************************/
void xmlData::closePortBTcpServer()
{
    qDebug()<<"****4710 closePortBTcpServer******";

    //    if(tcpServer->hasPendingConnections())
    if(socket4710Flag)
    {
        qDebug()<<"**** 4710  m_pTcpSocket delete******";
        socket4710Flag = false;
        m_pTcpSocket->abort();
        delete m_pTcpSocket;
    }
}
/***************************************************/
//receive data and Ack
/***************************************************/
void xmlData::recMessage()
{
    //接受到信息 先判断侦头55AA
    timerCount = 0;
    receiveResult  = m_pTcpSocket->readAll();    
    DTdebug()<< "xml:"<< receiveResult;   //add by wxm 2020/5/27

    //    qDebug()<<"one zhen JJJJ" << receiveResult.size() << receiveResult;
    if(receiveResult.mid(0,4) == "55AA")
    {
        if(receiveResult.size() -32  == (receiveResult.mid(8,8).toInt()))
        {
            qDebug() <<"4710 receive head" << receiveResult.mid(0,32);
            QByteArray heart =receiveResult.mid(0,8).append("000000000002000000000000");
            m_pTcpSocket->write(heart);
            m_pTcpSocket->waitForBytesWritten(300);
            xml_parse(receiveResult);
        }
        else
        {//长侦
            receiveResultDo = receiveResult;
        }
    }else
    {
        //曲线 第X侦
        receiveResultDo.append(receiveResult);

        if((receiveResultDo.size()-32) == (receiveResultDo.mid(8,8).toInt()))
        {
            //长帧接收完毕
            //            qDebug() << "4710 receive curve:" << receiveResultDo;
            QByteArray heart =receiveResultDo.mid(0,8).append("000000000002000000000000");
            //            qDebug() << "4710 back" << heart;
            m_pTcpSocket->write(heart);
            m_pTcpSocket->waitForBytesWritten(300);
            xml_parse(receiveResultDo);
        }
        else
        {//未接完

        }
    }
}
/***************************************************/
//xml解析
/***************************************************/
void xmlData::xml_parse(QByteArray temp)
{
    DTdebug() << "xml temp" << temp.mid(32);  //add by wxm 2020/5/27

    dY1V = 0 ;
    dXVA = 0;

    QFile file("/a.xml");
    //新建文件并保存
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);
    out.setCodec("UTF-8");
    out << temp.mid(32);
    file.close();

    //打开xml文件
    QDomDocument doc;
    file.open(QIODevice::ReadOnly);
    //qDebug() <<"read all" << file.readAll();
    doc.setContent(&file);
    file.close();
    //获得根节点
    QDomElement root = doc.documentElement();
    //获得第一个子节点:版本
    node = root.firstChild();
    //qDebug() << node.nodeName()<< "nodename";
    if(node.nodeName() == "PRC_SST")
    {
        //曲线
        CurveStr = temp.mid(32);
        vinCode  = 1;
        qDebug() << " PRC_SSTPRC" <<CurveStr;
        int i,j,k,l,m,n,p,q,r,blc=-1;
        QString DATE_blc,TIME_blc,STATE_blc="NOK",MI_blc,WI_blc,
                Cycle_CSR,Program="-1",Channel="0",strXVA,strY1V,strY2V;


        int PRC_SST_child = node.toElement().childNodes().length();

        for(i=0;i<PRC_SST_child;i++)
        {
            if(node.toElement().childNodes().at(i).toElement().nodeName()=="PAR")
            {
                int PAR_child = node.toElement().childNodes().at(i).toElement().childNodes().length();
                for(j=0;j<PAR_child;j++)
                {
                    if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().nodeName()=="PI1")
                    {
                        vinCode = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().text();
//                        if(isRFID)                           //add by wxm2020/5/29
//                            vinCode = vinCode.mid(0,14);
//                        else if(isBarCode)
//                            vinCode = vinCode.mid(0,17);
                        if((factory=="SVW2") && ControlType_1 =="PFD")   //add by wxm2020/5/29
                        {
                            if(vinCode.startsWith("L"))
                            {
                                vinCode = vinCode.mid(0,17);
                            }
                            else if(vinCode.startsWith("C"))
                            {
                                vinCode = vinCode.mid(0,14);
                            }
                            else
                            {
                                DTdebug() << "The data is not vin(start with[L]) or rfid(start with C)" << vinCode;
                                return ;
                            }
                        }
                        else
                        {
                            vinCode = vinCode.mid(0,17);
                        }
                    }
                    else if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().nodeName()=="FAS")
                    {
                        int FAS_child = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().length();
                        for(k=0;k<FAS_child;k++)
                        {
                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().nodeName()=="GRP")
                            {
                                int GPR_child = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().length();
                                for(l=0;l<GPR_child;l++)
                                {
                                    if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().nodeName()=="TIP")
                                    {
                                        int TIP_child = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().length();
                                        for(m=0;m<TIP_child;m++)
                                        {
                                            //通道号
                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().nodeName()=="KNR")
                                                Channel = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().text();
                                            //程序号
                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().nodeName()=="PRG")
                                                Program = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().text();
                                            //循环号   20180716修改所需节点SCR为TID
                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().nodeName()=="TID")
                                                Cycle_CSR = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().text();
                                            //日期
                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().nodeName()=="DAT")
                                                DATE_blc = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().text();
                                            //时间
                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().nodeName()=="TIM")
                                                TIME_blc = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().text();
                                            //I0状态
#if 0
                                            if(Program == "99")
                                            {
                                                STATE_blc = "NOK";
                                            }
                                            else
                                            {
#endif
                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().nodeName()=="STA")
                                            {
                                                STATE_blc = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().text();
                                                if(STATE_blc == "IO")
                                                    STATE_blc = "OK";
                                                else if(STATE_blc == "NIO")
                                                    STATE_blc = "NOK";
                                                else if(STATE_blc == "LSN")
                                                    STATE_blc = "LSN";
                                            }
//                                            }
                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().nodeName()=="BLC")
                                            {
                                                blc=m;
                                            }
                                        }
                                        if(blc!=-1)
                                        {
                                            int BLC_child = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().length();
                                            for(n=0;n<BLC_child;n++)
                                            {
                                                if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().nodeName()=="PRO")
                                                {
                                                    int PRO_child = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().length();
                                                    for(p=0;p<PRO_child;p++)
                                                    {
                                                        if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().nodeName()=="MAR")
                                                        {
                                                            int MAR_child = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().length();
                                                            for(q=0;q<MAR_child;q++)
                                                            {
                                                                if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(q).toElement().nodeName()=="NAM"&&node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(q).toElement().text()=="MI")
                                                                {
                                                                    for(r=0;r<MAR_child;r++)
                                                                    {
                                                                        //扭矩
                                                                        if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().nodeName()=="VAL")
                                                                            MI_blc = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().text();
                                                                    }
                                                                }
                                                                if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(q).toElement().nodeName()=="NAM"&&node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(q).toElement().text()=="WI")
                                                                {
                                                                    for(r=0;r<MAR_child;r++)
                                                                    {
                                                                        //角度
                                                                        if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().nodeName()=="VAL")
                                                                            WI_blc = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().text();
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().nodeName()=="CUR")
                                                {
                                                    DTdebug() << "max value" ;
                                                    QString strXAP;
                                                    double angleThreshold = 0 ;  //STV节点的值，可能是角度阀值
                                                    int CUR_child = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().length();
                                                    for(p=0;p<CUR_child;p++)
                                                    {
                                                        if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().nodeName()=="XAP")
                                                        {
                                                            strXAP = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().text();
                                                            DTdebug() << "<XAP>" << strXAP ;
                                                        }

                                                        if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().nodeName()=="STV")
                                                        {
                                                            angleThreshold = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().text().toDouble();
                                                        }

                                                        if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().nodeName()=="SMP")
                                                        {
                                                            int MAR_child = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().length();
                                                            for(q=0;q<MAR_child;q++)
                                                            {
#if 0
                                                                for(r=0;r<MAR_child;r++)
                                                                {
                                                                    if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().nodeName()=="XVA")
                                                                        strXVA = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().text();
                                                                }
                                                                for(r=0;r<MAR_child;r++)
                                                                {
                                                                    if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().nodeName()=="Y1V")
                                                                       strY1V = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().text();
                                                                }
#else
                                                                for(r=0;r<MAR_child;r++)
                                                                {
                                                                    if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().nodeName()=="XVA")
                                                                        strXVA = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().text();

                                                                    if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().nodeName()=="Y1V")
                                                                        strY1V = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().text();

                                                                    //马头枪的角度节点
                                                                    if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().nodeName()=="Y2V")
                                                                        strY2V = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().text();
                                                                }
                                                            }
#endif
                                                        }
                                                            QStringList strListXVA = strXVA.split(" ");
                                                            QStringList strListY1V = strY1V.split(" ");
                                                            QStringList strListY2V = strY2V.split(" ");

                                                            int Y1VPosition = 0;

                                                            // 根据XAP节点的值判断Y1V和XVA节点分别对应角度/扭矩
                                                            if(strXAP == "WI")
                                                            {
                                                                for(int i = 0; i<strListY1V.size(); i++)
                                                                {
                                                                    //最大扭矩
                                                                    if(strListY1V.at(i).toDouble() > dY1V)
                                                                    {
                                                                        Y1VPosition = i ;
                                                                        dY1V = strListY1V.at(i).toDouble();
                                                                    }
                                                                }
                                                                //最大角度
                                                                dXVA = strListXVA.at(Y1VPosition).toDouble() + angleThreshold;
                                                            }

                                                            else if(strXAP == "MI")
                                                            {
                                                                for(int i = 0; i<strListXVA.size(); i++)
                                                                {
                                                                    //最大扭矩
                                                                    if(strListXVA.at(i).toDouble() > dY1V)
                                                                    {
                                                                        Y1VPosition = i ;
                                                                        dY1V = strListXVA.at(i).toDouble();
                                                                    }
                                                                }
                                                                //最大角度
                                                                dXVA = strListY1V.at(Y1VPosition).toDouble() + angleThreshold;
                                                            }

                                                            else if(strXAP == "tI")
                                                            {
                                                                for(int i = 0; i<strListY1V.size(); i++)
                                                                {
                                                                    //最大扭矩
                                                                    if(strListY1V.at(i).toDouble() > dY1V)
                                                                    {
                                                                        Y1VPosition = i ;
                                                                        dY1V = strListY1V.at(i).toDouble();
                                                                    }
                                                                }
                                                                //最大角度
                                                                dXVA = strListY2V.at(Y1VPosition).toDouble() + angleThreshold;
                                                            }

                                                        }
                                                    }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        //        if(blc!=-1)
        if(Program != "-1")
        {
            qDebug() << "work Thread parse data 11:" << MI_blc+"||"+WI_blc;
            if(Y1V == 2)
            {
                MI_blc = QString("%1").arg(dY1V);
                WI_blc = QString("%1").arg(dXVA);
                qDebug() << " Thread maxNum " << MI_blc << WI_blc;
            }



            if(MI_blc == "")
                MI_blc = "0";
            if(WI_blc  == "")
                WI_blc = "0";
            qDebug() << "xml Thread parse data:" << vinCode+"||"+Cycle_CSR+"||"+MI_blc+"||"+WI_blc+"||"+Program+"||"+Channel;

            //放弃非反转产生的00数据
            if(STATE_blc != "LSN" && MI_blc =="0.00" && WI_blc == "0.00")
            {
                DTdebug() << "all 0" ;
                return;
            }
            if(Cycle_CSR != CyclePrevious && Cycle_CSR != "0")
            {
                Channel = "1";
                CyclePrevious = Cycle_CSR;
                if(vinCode != VIN_PIN_SQL)
                {
                    VIN_PIN_SQL = vinCode;
                    emit coming_VIN(VIN_PIN_SQL);
                    screwid[0]="";
                    screwid[1]="";
                    screwid[2]="";
                    bzero(&screwid_enable,sizeof(screwid_enable));

                    if((factory=="SVW2") && (ControlType_1 =="PFD"))    //add by wxm 2020/06/04
                        ppFlag = true;
                    else
                        ppFlag = matchVin();
                }
                if(ppFlag)
                {
                    if(Program != "99")
                        screwid[Channel.toInt()-1] = configParse(Channel,Program,STATE_blc);
                    else
                    {
                        emit VIN_Match_Wrong("99", Channel);
                        if(screwid[Channel.toInt()-1]=="")
                            screwid[Channel.toInt()-1]="100000000";
                    }
                    qDebug()<<"screwid:" << screwid[Channel.toInt()-1];

                    if(screwid[Channel.toInt()-1] != "")
                    {
                        DATA_STRUCT demo;
                        demo.data_model[0] = DATE_blc;
                        demo.data_model[1] = TIME_blc;
                        demo.data_model[2] = STATE_blc;
                        demo.data_model[3] = MI_blc;
                        demo.data_model[4] = WI_blc;
                        demo.data_model[5] = screwid[Channel.toInt()-1];
                        demo.data_model[6] = VIN_PIN_SQL;
                        demo.data_model[7] = Cycle_CSR;
                        demo.data_model[8] = CurveStr.mid(32);   //add by wxm 2020/06/04
                        demo.data_model[9] = Program;
                        demo.data_model[10] = Channel;
                        demo.data_model[11] = Type;
                        if(STATE_blc == "OK")
                        {
                            demo.data_model[12] = QString::number(BoltOrder[0]++);
                        }
                        else
                        {
                            demo.data_model[12] = QString::number(BoltOrder[0]);
                        }
                        demo.data_model[13] = "0";
                        demo.data_model[14] = "0";
                        demo.data_model[15] = "0";
                        QVariant DataVar;
                        DataVar.setValue(demo);
                        emit sendfromjsonthread(DataVar);
                        if(Program != "99"&&screwid[Channel.toInt()-1]!="200000000"&&screwid[Channel.toInt()-1]!="300000000")
                        {
                            emit send_mainwindow(MI_blc,WI_blc,STATE_blc,Channel.toInt(),screwid[Channel.toInt()-1].toInt(),Program.toInt());
                        }
                        else if(screwid[Channel.toInt()-1]=="200000000"||screwid[Channel.toInt()-1]=="300000000")
                        {
                            emit VIN_Match_Wrong(Channel,Program);//匹配失败
                        }
                    }
                }
                else
                {
                    qDebug()<<"match VIN FAIL: "<<VIN_PIN_SQL;
                    VIN_PIN_SQL="";
                    emit VIN_Match_Wrong("VIN","");
                }
            }
            else
            {
                qDebug()<<"repeat data";
            }
        }
        else
        {
            qDebug() << "error curve" << CurveStr;
        }
    }
    else
    {//心跳 解析 EVT
        //        qDebug() << "4710 receive data:" << temp;
        //        qDebug() << "evt herehere";
        int MSL_MSG_child = node.toElement().childNodes().length();
        int i,j,k,l=0;
        for(i=0;i<MSL_MSG_child;i++)
        {
            if(node.toElement().childNodes().at(i).toElement().nodeName()=="EVT")
            {
                int EVT_child = node.toElement().childNodes().at(i).toElement().childNodes().length();
                for(j=0;j<EVT_child;j++)
                {
                    if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().nodeName()=="STS")
                    {
                        int STS_child = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().length();
                        for(k=0;k<STS_child;k++)
                        {
                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().nodeName()=="ONC")
                            {
                                int ONC_child = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().length();
                                for(l=0;l<ONC_child;l++)
                                {
                                    if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().nodeName()=="RDY")
                                    {
                                        int RDY = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().text().toInt();
                                        //                                        qDebug() << "RDY 1" << RDY;
                                        if(RDY == 1)
                                        {//复位成功
                                            if(!RDYY)
                                            {
                                                qDebug() << "******cs351 RDYY(true)";
                                                RDYY = true;
                                                emit  havedconnect(true);
                                            }
                                        }
                                        else
                                        {// 复位失败 报错 给主界面发消息。
                                            qDebug()<< "******cs351 RDYY(false)";
                                            RDYY = false;
                                            emit  havedconnect(false);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
bool xmlData::matchVin()
{
    QSettings *config = new QSettings("/config.ini", QSettings::IniFormat);
    bool flags = false;
    int i = 1;
    for(i = 1;i < 21;i++)
    {
        QString temp = config->value(QString("carinfo").append(QString::number(i)).append("/VIN")).toString();
        if(temp.length()!=5)
        {
            continue;
        }
        int replacetmp = 0;
        flags = true;
        for(int k = 3;k < 8;k++)
        {
            replacetmp = k-3;
            if(temp.at(replacetmp) == '?')
            {
                continue;
            }
            else
            {
                if(VIN_PIN_SQL.at(k) != temp.at(replacetmp))
                {
                    flags = false;
                    break;
                }else
                {
                    continue;
                }
            }
        }
        if(flags)
        {
            whichar = i;
            break;
        }
    }
    delete config;
    return flags;
}


QString xmlData::configParse(QString chanel_tmp, QString program_tmp,QString state_ok)
{
    //匹配VIN码
    QSettings *config = new QSettings("/config.ini", QSettings::IniFormat);
    QString value = "";
    qDebug()<<"************"<<chanel_tmp<<program_tmp;
    int j = 1;
    for(j = 1;j< 21;j++)
    {
        if(screwid_enable[j-1] == 3)
            continue;
        int channel = config->value(QString("carinfo").append(QString::number(whichar)).append("/Channel").append(QString::number(j))).toInt();
        int program = config->value(QString("carinfo").append(QString::number(whichar)).append("/ProNum").append(QString::number(j))).toInt();
        SCREWID_SQL = config->value(QString("carinfo").append(QString::number(whichar)).append("/LuoSuanNum").append(QString::number(j))).toString();
        lsNum = config->value(QString("carinfo").append(QString::number(whichar)).append("/LSNumber").append(QString::number(j))).toString();
        if(channel == chanel_tmp.toInt())
        {
            if(program_tmp.toInt() == program)
            {
                value  = SCREWID_SQL;
                if(state_ok == "OK")
                    screwid_enable[j-1] = 3;
                else if(state_ok == "NOK")
                    screwid_enable[j-1]++;
                break;
            }
            else
            {
                pro_is_true = true;
                continue;
            }
        }
        else
            continue;
    }
    if(j == 21)
    {
        //没有此通道的数据匹配上
        if(pro_is_true)
        {
            value = "200000000";
            pro_is_true = false;
        }
        else
            value = "300000000";
    }
    if((value == "")||(value == "0"))
    {
        value = "200000000";
    }
    delete config;
    return value;
}
