#include "worker.h"

Worker::Worker(QObject *parent) :
    QObject(parent)
{
    CurveStr = "";
    this->moveToThread(&m_thread);
    m_thread.start();
    CyclePrevious="";
    dY1V = 0 ;
    dXVA = 0 ;
}
void Worker::fun1()
{
    DTdebug()  << "work Thread start...";
    Factory = factory;
    tcpServer = new QTcpServer(this);
    if(!tcpServer->listen(QHostAddress::Any,4710))
    {  //**本地主机的4710端口，如果出错就输出错误信息，并关闭
        DTdebug() << tcpServer->errorString();
    }
    connect(tcpServer,SIGNAL(newConnection()),this,SLOT(DataReceived()));
    heartTimer = new QTimer(this);
    connect(heartTimer,SIGNAL(timeout()),this,SLOT(heartTimerFunc()));
    timerCount=0;
    socket4710Flag = false;
}
/***************************************************/
//link success
/***************************************************/
void Worker::DataReceived()
{
    DTdebug() << "4710 port  ************ connect success";
    m_pTcpSocket = tcpServer->nextPendingConnection();
    connect(m_pTcpSocket, SIGNAL(readyRead()),this, SLOT(recMessage()));
    heartTimer->start(5000);
    socket4710Flag = true;
    emit  havedconnect(true);
}
/***************************************************/
//5000ms timer function
/***************************************************/
void Worker::heartTimerFunc()
{
    timerCount++;
    if(timerCount>3)
    {
        DTdebug() << "4710 heart time out";
        timerCount=0;
        RDYY = false;
        emit disconnectTellPortA();
        heartTimer->stop();
        closePortBTcpServer();
    }
}
/***************************************************/
//protA disconnect portB
/***************************************************/
void Worker::portAsendPortB()
{
    RDYY = false;
    heartTimer->stop();
    closePortBTcpServer();
}
/***************************************************/
//close link
/***************************************************/
void Worker::closePortBTcpServer()
{
    DTdebug()<<"****4710 closePortBTcpServer******";

//    if(tcpServer->hasPendingConnections())
    if(socket4710Flag)
    {
        DTdebug()<<"**** 4710  m_pTcpSocket delete******";
        socket4710Flag = false;
        m_pTcpSocket->abort();
        delete m_pTcpSocket;
    }
}

/***************************************************/
//xml解析
/***************************************************/

//#define D_WXM_DEBUG //wxm 2020-5-12 added

void Worker::xml_parse(QByteArray temp)
{
//    DTdebug() << temp ;
    QString Torque1,Torque_Max1,Torque_Min1,Angle1,Angle_Max1,Angle_Min1,Torque2,Torque_Max2,Torque_Min2,Angle2,Angle_Max2,
            Angle_Min2,Torque3,Torque_Max3,Torque_Min3,Angle3,Angle_Max3,Angle_Min3,Torque4,Torque_Max4,Torque_Min4,Angle4,
            Angle_Max4,Angle_Min4,Torque5,Torque_Max5,Torque_Min5,Angle5,Angle_Max5,Angle_Min5,Torque_End,Torque_Max_End,
            Torque_Min_End,Angle_End,Angle_Max_End,Angle_Min_End="";

    dY1V = 0 ;
    dXVA = 0 ;
#ifdef D_WXM_DEBUG
    QFile file("/more.xml");
#else
    //新建文件并保存
    QFile file("/a.xml");
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);
    out.setCodec("UTF-8");
    out << temp.mid(32);
    file.close();
#endif

    //打开xml文件
    QDomDocument doc;
    file.open(QIODevice::ReadOnly);
    doc.setContent(&file);
    file.close();

    //获得根节点
    QDomElement root = doc.documentElement();

    //获得第一个子节点:版本
    node = root.firstChild();

    //获取套筒状态
    if(node.nodeName() == "MSL_MSG")
    {
        int MSL_MSG_child = node.toElement().childNodes().length() ;
        for(int i = 0; i <MSL_MSG_child; i++)
        {
            if(node.toElement().childNodes().at(i).toElement().nodeName() == "EVT")
            {
                int NUT_child = node.toElement().childNodes().at(i).toElement().childNodes().length();
                for(int j = 0; j < NUT_child; j++)
                {
                    if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().nodeName() == "STS")
                    {
                        int STS_child = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().length();
                        for(int k = 0; k < STS_child ;k++)
                        {
                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k)
                                    .toElement().nodeName() == "ONC")
                            {
                                int ONC_child = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes()
                                        .at(k).toElement().childNodes().length();
                                for(int l = 0;l<ONC_child;l++)
                                {
                                    if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes()
                                            .at(k).toElement().childNodes().at(l).nodeName() == "NUT")
                                    {
                                        int NUT_child = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes()
                                                .at(k).toElement().childNodes().at(l).toElement().childNodes().length();
                                        int n = 0 ;
                                        for(int m = 0; m < NUT_child; m++)
                                        {
                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes()
                                                    .at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).nodeName() == "NID")
                                            {
                                                n++ ;
                                                QString strSocketSpannerStatus ;
                                                if(n==1)
                                                {
                                                    DTdebug() << "n = 1" ;
                                                    strSocketSpannerStatus = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes()
                                                            .at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().text();

                                                    socketSpannerStatus = strSocketSpannerStatus.at(0).toAscii()-64;

                                                }
                                                else if(n>1)
                                                {
                                                    socketSpannerStatus = 0;
                                                }
                                                DTdebug() << socketSpannerStatus;

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

    //获取曲线数据
    if(node.nodeName() == "PRC_SST")
    {
        //曲线
        CurveStr = temp;
#ifdef D_WXM_DEBUG

#else
        if(SYSS!="ING")
        {
            return;
        }
#endif

        int i,j,k,l,m,n,p,q,r,blc=-1;
        //i:PRC_SST children()
        //j:PAR children
        //k:FAS children
        //l:GRP children
        //m:TIP children
        //n:BLC
        //p:PRO_child
        //q:MAR_child
        //r:
        QString DATE_blc,TIME_blc,STATE_blc="NOK",MI_blc,WI_blc,Cycle_CSR,Program="-1",Channel="0",
                strXVA,strY1V,strY2V;

        int PRC_SST_child = node.toElement().childNodes().length();

        for(i=0;i<PRC_SST_child;i++)
        {
            if(node.toElement().childNodes().at(i).toElement().nodeName()=="PAR")
            {
                int PAR_child = node.toElement().childNodes().at(i).toElement().childNodes().length();
                for(j=0;j<PAR_child;j++)
                {
                    if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().nodeName()=="FAS")
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
                                        int BNR_MaxValue = 0;
                                        int TIP_child = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().length();
                                        for(m=0;m<TIP_child;m++)
                                        {
                                            //通道号
                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().nodeName()=="KNR")
                                                Channel = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().text();
                                            //程序号
                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().nodeName()=="PRG")
                                                Program = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().text();
                                            //循环号
                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().nodeName()=="TID")
                                                Cycle_CSR = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().text();
                                            //日期
                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().nodeName()=="DAT")
                                                DATE_blc = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().text();
                                            //时间
                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().nodeName()=="TIM")
                                                TIME_blc = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().text();
                                            //I0状态
                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().nodeName()=="STA")
                                            {
                                                STATE_blc = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().text();
                                                if(STATE_blc == "IO")
                                                    STATE_blc = "OK";
                                                else if(STATE_blc == "NIO")
                                                    STATE_blc = "NOK";
                                                else if(STATE_blc == "LSN")   //反转
                                                    STATE_blc = "LSN";
                                            }

                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(m).toElement().nodeName()=="BLC")
                                            {
                                                blc=m;

                                                QString strAngleAll,strTroqueAll,strAngle,strTroque="" ;
                                                double dAngle,dTroque,minAngle,minTroque = 0;

                                                int BLC_child = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().length();

                                                int BNR_Value = 0;
                                                for(n=0;n<BLC_child;n++)
                                                {
                                                    if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().nodeName()=="BNR")
                                                    {
                                                        BNR_Value = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().text().toInt();
                                                    }

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
                                                                    if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(q).toElement().nodeName()=="NAM"
                                                                            &&node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(q).toElement().text()=="MI")
                                                                    {
                                                                        for(r=0;r<MAR_child;r++)
                                                                        {
                                                                            //扭矩
                                                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().nodeName()=="VAL")
                                                                                strTroque = MI_blc = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().text();
                                                                        }
                                                                    }
                                                                    if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(q).toElement().nodeName()=="NAM"
                                                                            &&node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(q).toElement().text()=="WI")
                                                                    {
                                                                        for(r=0;r<MAR_child;r++)
                                                                        {
                                                                            //角度
                                                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().nodeName()=="VAL")
                                                                               strAngle = WI_blc = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().text();
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
                                                            }

                                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().nodeName()=="STV")
                                                            {
                                                                DTdebug() << "STV" ;
                                                                angleThreshold = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().text().toDouble();
                                                                DTdebug() << "STV" << angleThreshold ;
                                                            }

                                                            if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().nodeName()=="SMP")
                                                            {
                                                                int MAR_child = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().length();
                                                                for(q=0;q<MAR_child;q++)
                                                                {
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
                                                            }
                                                        }
                                                        QStringList strListXVA = strXVA.split(" ");
                                                        QStringList strListY1V = strY1V.split(" ");
    //                                                  QStringList strListY2V = strY2V.split(" ");


                                                        int Y1VPosition = 0;

                                                        // 根据XAP节点的值判断Y1V和XVA节点分别对应角度/扭矩
                                                        //正常情况
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
                                                            dXVA = strListXVA.at(Y1VPosition).toDouble() - strListXVA.at(0).toDouble() ;
                                                        }

                                                        //没出现过的情况，不确定
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
                                                            if(angleThreshold == 0)
                                                            {
                                                                dXVA = strListY1V.at(Y1VPosition).toDouble() - strListY1V.at(1).toDouble() ;
                                                            }
                                                            else {
                                                                dXVA = angleThreshold ;
                                                            }
                                                        }

                                                            /*理论上来说是给马头控制器准备的，但是马头控制器可以自己设置输出最大值，所以没什么用。
                                                              如果想删掉下面部分的代码，记得给上面的字符串链表加非空判断，不然会溢出，然后死机*/
    #if 0
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
                                                                if(angleThreshold == 0)
                                                                {
                                                                    dXVA = strListY2V.at(Y1VPosition).toDouble() - strListY2V.at(1).toDouble() ;
                                                                }
                                                                else {
                                                                    dXVA = angleThreshold ;
                                                                }
                                                            }
    #endif

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
                                                                    for(r=0;r<MAR_child;r++)
                                                                    {
                                                                        if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().nodeName()=="XVA")
                                                                            strAngleAll = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().text();

                                                                        if(node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().nodeName()=="Y1V")
                                                                            strTroqueAll = node.toElement().childNodes().at(i).toElement().childNodes().at(j).toElement().childNodes().at(k).toElement().childNodes().at(l).toElement().childNodes().at(blc).toElement().childNodes().at(n).toElement().childNodes().at(p).toElement().childNodes().at(r).toElement().text();
                                                                     }
                                                                }
                                                            }
                                                        }
                                                        QStringList strListXVA = strAngleAll.split(" ");
                                                        QStringList strListY1V = strTroqueAll.split(" ");

                                                        int Y1VPosition = 0;
                                                        int torquePosition = 0 ;
                                                        // 根据XAP节点的值判断Y1V和XVA节点分别对应角度/扭矩
                                                        //正常情况
                                                        if(strXAP == "WI")
                                                        {
                                                            for(int i = 0; i<strListY1V.size(); i++)
                                                            {
                                                                double m_angle1 = strListY1V.at(0).toDouble();

                                                                //最大扭矩
                                                                if(strListY1V.at(i).toDouble() > dTroque)
                                                                {
                                                                    Y1VPosition = i ;
                                                                    dTroque = strListY1V.at(i).toDouble();
                                                                }
                                                                if(strListY1V.at(i).toDouble() < m_angle1)
                                                                {
                                                                    torquePosition = i ;
                                                                    minTroque = strListY1V.at(i).toDouble();
                                                                }

                                                            }

                                                            //最大角度
                                                            dAngle = strListXVA.at(Y1VPosition).toDouble() - strListXVA.at(0).toDouble() ;
                                                            minAngle = strListXVA.at(Y1VPosition).toDouble() - strListXVA.at(0).toDouble() ;
                                                        }
                                                    }
                                                }

                                                if(BNR_Value > BNR_MaxValue)
                                                    BNR_MaxValue = BNR_Value;

                                                if(BNR_Value==1)
                                                {
                                                    Torque1=strTroque;
                                                    Torque_Max1 = dTroque ;
                                                    Torque_Min1 = minTroque;

                                                    Angle1 = strAngle ;
                                                    Angle_Max1 = dAngle ;
                                                    Angle_Min1 =minAngle ;
                                                }
                                                else if(BNR_Value==2){
                                                    Torque2=strTroque;
                                                    Torque_Max2 = dTroque ;
                                                    Torque_Min2 = minTroque;

                                                    Angle2 = strAngle ;
                                                    Angle_Max2 = dAngle ;
                                                    Angle_Min2 =minAngle ;
                                                }
                                                else if (BNR_Value==3) {
                                                    Torque3=strTroque;
                                                    Torque_Max3 = dTroque ;
                                                    Torque_Min3 = minTroque;

                                                    Angle3 = strAngle ;
                                                    Angle_Max3 = dAngle ;
                                                    Angle_Min3 =minAngle ;
                                                }
                                                else if (BNR_Value==4) {
                                                    Torque4=strTroque;
                                                    Torque_Max4 = dTroque ;
                                                    Torque_Min4 = minTroque;

                                                    Angle4 = strAngle ;
                                                    Angle_Max4 = dAngle ;
                                                    Angle_Min4 =minAngle ;
                                                }
                                                else if (BNR_Value==5) {
                                                    Torque5=strTroque;
                                                    Torque_Max5 = dTroque ;
                                                    Torque_Min5 = minTroque;

                                                    Angle5 = strAngle ;
                                                    Angle_Max5 = dAngle ;
                                                    Angle_Min5 =minAngle ;
                                                }
                                            }
                                        }

                                        if(BNR_MaxValue==1)
                                        {
                                            Torque_End = Torque1;
                                            Torque_Max_End = Torque_Max1;
                                            Torque_Min_End = Torque_Min1;

                                            Angle_End = Angle1;
                                            Angle_Max_End = Angle_Max1;
                                            Angle_Min_End =Angle_Min1;
                                        }
                                        else if(BNR_MaxValue==2){
                                            Torque_End = Torque2;
                                            Torque_Max_End = Torque_Max2;
                                            Torque_Min_End = Torque_Min2;

                                            Angle_End = Angle1;
                                            Angle_Max_End = Angle_Max2;
                                            Angle_Min_End =Angle_Min2;
                                        }
                                        else if (BNR_MaxValue==3) {
                                            Torque_End = Torque3;
                                            Torque_Max_End = Torque_Max3;
                                            Torque_Min_End = Torque_Min3;

                                            Angle_End = Angle1;
                                            Angle_Max_End = Angle_Max3;
                                            Angle_Min_End =Angle_Min3;
                                        }
                                        else if (BNR_MaxValue==4) {
                                            Torque_End = Torque4;
                                            Torque_Max_End = Torque_Max4;
                                            Torque_Min_End = Torque_Min4;

                                            Angle_End = Angle1;
                                            Angle_Max_End = Angle_Max4;
                                            Angle_Min_End =Angle_Min4;
                                        }
                                        else if (BNR_MaxValue==5) {
                                            Torque_End = Torque5;
                                            Torque_Max_End = Torque_Max5;
                                            Torque_Min_End = Torque_Min5;

                                            Angle_End = Angle5;
                                            Angle_Max_End = Angle_Max5;
                                            Angle_Min_End =Angle_Min5;
                                        }

                                    }
                                }
                            }
                        }
                    }
                }
            }
        }




        if(Program != "-1")
        {
            DTdebug() << "work Thread parse data 11:" << MI_blc+"||"+WI_blc;
            if(Y1V == 2)
            {
                MI_blc = QString("%1").arg(dY1V);
                WI_blc = QString("%1").arg(dXVA);
                DTdebug() << " Thread maxNum " << MI_blc << WI_blc;
            }

            DTdebug() << "work Thread parse data:" << VIN_PIN_SQL+"||"+Cycle_CSR+"||"+MI_blc+"||"+WI_blc+"||"+Program+"||"+Channel;
            if(STATE_blc != "LSN" && MI_blc=="0.00" && WI_blc== "0.00" )
            {
                DTdebug() << "all 0" ;
                return;
            }
            if(Cycle_CSR != CyclePrevious && Cycle_CSR != "0")
            {
                if(MI_blc == "")
                    MI_blc = "0";
                if(WI_blc  == "")
                    WI_blc = "0";
                if(SYSS == "ING")
                {
                    double torque_max = 0.0;
                    double torque_min = 0.0;
                    double Angle_max = 0.0;
                    double Angle_min = 0.0;
                    if(STATE_blc == "OK")
                    {
                        if(bound_enabled)
                        {
                            QSettings *config = new QSettings("/config_bound.ini", QSettings::IniFormat);
                            torque_max = config->value("/ProNumber"+Program+"/Torque_max").toDouble();
                            torque_min = config->value("/ProNumber"+Program+"/Torque_min").toDouble();
                            Angle_max = config->value("/ProNumber"+Program+"/Angle_max").toDouble();
                            Angle_min = config->value("/ProNumber"+Program+"/Angle_min").toDouble();
                            delete config;
                            if(torque_max == 0)
                            {
                                torque_max = MI_blc.toDouble();
                                torque_min = MI_blc.toDouble();
                            }
                            if(torque_min == 0)
                                torque_min = MI_blc.toDouble();
                            if(Angle_max == 0)
                            {
                                Angle_max = WI_blc.toDouble();
                                Angle_min = WI_blc.toDouble();
                            }
                            if(Angle_min == 0)
                                Angle_min = WI_blc.toDouble();
                            if((MI_blc.toDouble()<torque_min) || (MI_blc.toDouble()>torque_max) ||
                                    (WI_blc.toDouble()<Angle_min) || (WI_blc.toDouble() >Angle_max))
                            {
                                STATE_blc = "NOK";
                            }
                        }
                    }

                    CyclePrevious = Cycle_CSR;

                    DATA_STRUCT demo;
                    demo.data_model[0] = DATE_blc;
                    demo.data_model[1] = TIME_blc;
                    demo.data_model[2] = STATE_blc;
                    demo.data_model[3] = MI_blc;
                    demo.data_model[4] = WI_blc;
                    demo.data_model[5] = carInfor[0].boltSN[groupNumCh[0]];
                    demo.data_model[6] = VIN_PIN_SQL;
                    demo.data_model[7] = Cycle_CSR;
                    demo.data_model[8] = CurveStr.mid(32);
                    demo.data_model[9] = Program;
                    demo.data_model[10] = Channel;

                    if(Factory =="SVW2" ||Factory =="Dongfeng")
                    {
                        if(Factory =="Dongfeng" && manualMode)
                            demo.data_model[11] = "manual";
                        else
                            demo.data_model[11] = Type;

                        if(STATE_blc == "OK")
                        {
                            demo.data_model[12] = QString::number(BoltOrder[0]++);
                        }
                        else
                        {
                            demo.data_model[12] = QString::number(BoltOrder[0]);
                        }
                        demo.data_model[13] = QString::number(torque_max);
                        demo.data_model[14] = QString::number(torque_min);
                        demo.data_model[15] = "0";
                    }
                    if(factory == "SVW2")
                    {
                        demo.data_model[16] = Torque1 ;
                        demo.data_model[17] = Torque_Max1 ;
                        demo.data_model[18] = Torque_Min1 ;
                        demo.data_model[19] = Angle1 ;
                        demo.data_model[20] = Angle_Max1 ;
                        demo.data_model[21] = Angle_Min1 ;

                        demo.data_model[22] = Torque2 ;
                        demo.data_model[23] = Torque_Max2 ;
                        demo.data_model[23] = Torque_Min2 ;
                        demo.data_model[25] = Angle2 ;
                        demo.data_model[26] = Angle_Max2 ;
                        demo.data_model[27] = Angle_Min2 ;

                        demo.data_model[28] = Torque3 ;
                        demo.data_model[29] = Torque_Max3 ;
                        demo.data_model[30] = Torque_Min3 ;
                        demo.data_model[31] = Angle3 ;
                        demo.data_model[32] = Angle_Max3 ;
                        demo.data_model[33] = Angle_Min3 ;

                        demo.data_model[34] = Torque4 ;
                        demo.data_model[35] = Torque_Max4 ;
                        demo.data_model[36] = Torque_Min4 ;
                        demo.data_model[37] = Angle4 ;
                        demo.data_model[38] = Angle_Max4 ;
                        demo.data_model[39] = Angle_Min4 ;

                        demo.data_model[40] = Torque5 ;
                        demo.data_model[41] = Torque_Max5 ;
                        demo.data_model[42] = Torque_Min5 ;
                        demo.data_model[43] = Angle5 ;
                        demo.data_model[44] = Angle_Max5 ;
                        demo.data_model[45] = Angle_Min5 ;

                        demo.data_model[46] = Torque_End ;
                        demo.data_model[47] = Torque_Max_End ;
                        demo.data_model[48] = Torque_Min_End ;
                        demo.data_model[49] = Angle_End ;
                        demo.data_model[50] = Angle_Max_End ;
                        demo.data_model[51] = Angle_Min_End ;
                    }

                    QVariant DataVar;
                    DataVar.setValue(demo);
                    emit sendfromworkthread(DataVar);
                    emit send_mainwindow(MI_blc,WI_blc,STATE_blc,0,groupNumCh[0]);
                }
            }
            else
            {
                DTdebug()<<"Duplicate data";
            }
        }
        else
        {
            DTdebug() << "error curve" << CurveStr;
        }
    }
    else
    {//心跳 解析 EVT
//        DTdebug() << "4710 receive data:" << temp;
//        DTdebug() << "evt herehere";
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
//                                        DTdebug() << "RDY 1" << RDY;
                                        if(RDY == 1)
                                        {//复位成功
                                            if(!RDYY)
                                            {
                                                DTdebug() << "******cs351 RDYY(true)";
                                                RDYY = true;
                                                emit  havedconnect(true);
                                            }
                                        }
                                        else
                                        {// 复位失败 报错 给主界面发消息。
                                            DTdebug()<< "******cs351 RDYY(false)";
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

/***************************************************/
//receive data and Ack
/***************************************************/
void Worker::recMessage()
{
    FUNC( ) ;
    //接受到信息 先判断侦头55AA
    timerCount = 0;
    receiveResult  = m_pTcpSocket->readAll();

//    DTdebug()<<"one zhen JJJJ" << receiveResult.size() << receiveResult;
    if(receiveResult.mid(0,4) == "55AA")
    {
        if(receiveResult.size() -32  == (receiveResult.mid(8,8).toInt()))
        {
            DTdebug() <<"4710 receive head" << receiveResult.mid(0,32);
            QByteArray heart =receiveResult.mid(0,8).append("000000000002000000000000");
            m_pTcpSocket->write(heart,heart.size());
            m_pTcpSocket->waitForBytesWritten(300);
            xml_parse(receiveResult);
        }
        else
        {
            //长侦
            receiveResultDo = receiveResult;
        }
    }else
    {
        //曲线 第X侦
        receiveResultDo.append(receiveResult);

        if((receiveResultDo.size()-32) == (receiveResultDo.mid(8,8).toInt()))
        {
            //长帧接收完毕
            QByteArray heart =receiveResultDo.mid(0,8).append("000000000002000000000000");

            m_pTcpSocket->write(heart,heart.size());
            m_pTcpSocket->waitForBytesWritten(300);
            xml_parse(receiveResultDo);

        }
        else
        {//未接完

        }
    }
}
