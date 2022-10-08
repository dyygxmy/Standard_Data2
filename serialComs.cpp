#include "serialComs.h"
#include "qsettings.h"

SerialComs::SerialComs(QObject *parent) :
    QObject(parent)
{
    whichindex = 0;
    bzero(&buff,sizeof(buff));
    this->moveToThread(&m_thread);
    m_thread.start();
}

void SerialComs::comInit()
{    
    Factory = factory;
    seriallist.clear();
    Queuelock.lockForRead();
    if(isBarCode||isQueue||Factory =="Dongfeng")
    {
        Queuelock.unlock();
        const char *dev_name;
        if(Factory == "SVW2" && ControlType_1 == "GWK")
        {
            dev_name = "/dev/ttymxc0";
        }
        else if(ControlType_1 == "PF_232")
        {
            dev_name = "/dev/ttymxc0";
        }
        else
        {
            dev_name = "/dev/ttymxc3";
        }
              //  dev_name = "/dev/ttyUSB0";//usB调试专用

        myCom = new QextSerialPort(dev_name);
        connect(myCom, SIGNAL(readyRead()), this, SLOT(readCom()));

        //设置波特率
        myCom->setBaudRate((BaudRateType)9600);

        //设置数据位
        myCom->setDataBits((DataBitsType)8);

        //设置校验
        myCom->setParity(PAR_NONE);

        //设置停止位
        myCom->setStopBits(STOP_1);

        //设置数据流控制
        myCom->setFlowControl(FLOW_OFF);
        //设置延时
        myCom->setTimeout(10);

        if(myCom->open(QIODevice::ReadWrite)){
            DTdebug()<<QObject::tr("serial open ok ") << dev_name;

        }else{
            DTdebug()<<QObject::tr("serial open fail ") << dev_name;
        }

        if(Factory == "GM" ||Factory == "Haima")
        {
            QSettings *configIniRead = new QSettings("/config.ini", QSettings::IniFormat);
            vinLen = configIniRead->value("baseinfo/vinLen").toInt();
            vinHead = configIniRead->value("baseinfo/vinHead").toByteArray();
            delete configIniRead;
        }
        else if(isReplaceBarcode)
        {
            vinLen = 15;
            vinHead = "5";
        }
        else
        {
            vinLen = 17;
            vinHead = "L";
        }
#if 0
        struct termios tty_attr;
        int baudrate;
        int byte_bits ;
        baudrate = B9600;
        byte_bits = CS8;
        fd_set rset;
        dev_fd = open(dev_name, O_RDWR, 0);
        if (dev_fd < 0)
        {
            DTdebug() << "vin serial open fail "+QString(dev_name);
        }
        else
        {
            DTdebug() <<"vin open serial success "+QString(dev_name);
        }
        if (fcntl(dev_fd, F_SETFL, O_NONBLOCK) < 0)
            DTdebug() << "unable to set serial port";
        memset(&tty_attr, 0, sizeof(struct termios));
        tty_attr.c_iflag = IGNPAR;
        tty_attr.c_cflag = baudrate | HUPCL | byte_bits | CREAD | CLOCAL;
        tty_attr.c_cc[VTIME] = 0;
        tty_attr.c_cc[VMIN] = 1;
        tcsetattr(dev_fd, TCSANOW, &tty_attr);
        QByteArray buff;//[20];
        int select_fd ;
        if(Factory == "GM" ||Factory == "Haima")
        {
            QSettings *configIniRead = new QSettings("/config.ini", QSettings::IniFormat);
            vinLen = configIniRead->value("baseinfo/vinLen").toInt();
            vinHead = configIniRead->value("baseinfo/vinHead").toByteArray();
            delete configIniRead;
        }
        else if(isReplaceBarcode)
        {
            vinLen = 15;
            vinHead = "5";
        }
        else
        {
            vinLen = 17;
            vinHead = "L";
        }

        while(1)
        {
            FD_ZERO(&rset);
            FD_SET(dev_fd, &rset);

            select_fd = select(dev_fd+1,&rset,NULL,NULL,NULL);
            if (select_fd < 0)
            {
                DTdebug() << "select fail";
            }
            if (FD_ISSET(dev_fd, &rset))
            {
                int  nread = 0;
                char data1[1];
                while ((nread = (read(dev_fd, &data1,sizeof(data1)))) > 0)
                {
                    //                    if(((data1[0] >='a') && (data1[0]  <= 'z')) ||((data1[0]  >='A') && (data1[0]  <= 'Z'))||((data1[0]  >='0')&&(data1[0] <= '9'))||((char)data1[0] == 0x0d)||((char)data1[0] == 0x20))
                    //                    if(data1[0] <= 0x7F)
                    //                    {
                    buff.append(data1[0]);
                    //                    }
                }
                //                DTdebug()<<"******1***1***1*****1********"<<manualMode<<buff.toHex();
                if(Factory == "Benz"||((Factory =="BYDXA")&& isBarCode))   //用于长沙BYD
                {
                    int len = 0;
                    if(Factory == "Benz")
                        len = 8;
                    else if(Factory == "BYDXA")
                        len = 18;
                    //                    DTdebug()<<"buff<<"<<buff.size()<<buff;
                    for(int i=0;i<buff.size();i++)
                    {
                        if((char)buff[i] == 0x0d)
                        {
                            QString serialNums = buff.left(i);
                            buff.clear();
                            //                            buff = buff.right(buff.size()-i-1);
                            if (serialNums.size()== len)
                            {
                                if(CsIsConnect && !ISmaintenance && SYSS!="ING"&& isBarCode)
                                {
                                    isEqual = false;
                                    if(seriallist.isEmpty())
                                    {
                                        seriallist.push_back(serialNums);
                                        whichindex++;
                                    }
                                    else
                                    {
                                        QList<QString>::iterator i;
                                        for (i = seriallist.begin(); i != seriallist.end(); ++i)
                                        {
                                            if(!(QString::compare(serialNums, *i, Qt::CaseSensitive)))
                                            {
                                                isEqual = true;
                                                break;
                                            }
                                        }
                                        if(!isEqual)
                                        {
                                            if(seriallist.size() == 10)
                                            {
                                                seriallist[whichindex] = serialNums;
                                            }
                                            else
                                            {
                                                seriallist.push_back(serialNums);
                                            }
                                            whichindex++;
                                            if(whichindex == 10)
                                                whichindex = 0;
                                        }
                                    }

                                    DTdebug()<<"send SerialNumbs "<<serialNums;
                                    emit serialCom(serialNums,isEqual," ");
                                }
                            }
                            else
                            {
                                DTdebug()<<"wrong SerialNums "<<serialNums;
                            }
                            break;
                        }
                    }
                    if(buff.size()>30)
                    {
                        buff.clear();
                    }
                    bzero(data1,sizeof(data1));
                }
                else if(!manualMode)
                {
                    while( (!buff.isEmpty())&&(!buff.startsWith(vinHead)) )
                    {
                        DTdebug()<<"not Start with "<<vinHead<<buff;
                        buff.replace(0,1,"");
                        //                    DTdebug() << "*******clear********" <<buff;
                    }



                    if((buff.size() >= vinLen)&&(buff[0]==vinHead[0]))
                    {
                        DTdebug()<<SaveWhat<<isQueue;
                        buff[vinLen] = '\0';
                        QString serialNums = QString(buff);
                        DTdebug() << "tiaoma qiang"<< serialNums;
#if 1
                        if(DebugMode)
                        {
                            emit sendDebug(QString(buff));
                        }
#endif
                        Queuelock.lockForRead();
                        if(Factory == "Dongfeng")
                        {
                            if(SaveWhat == "delete_car")
                                emit deleteCar(serialNums);
                            else
                                emit alignCar(serialNums);
                        }
                        else if(SaveWhat == "delete_car")
                        {
                            Queuelock.unlock();
                            emit serialCom(serialNums,false,"VIN");
                        }
                        else if(isQueue)
                        {
                            Queuelock.unlock();
                            if(SaveWhat.mid(0,8) != "queue_no")
                            {
                                emit serialCom(serialNums,false,"VIN");
                            }
                        }
                        else if(CsIsConnect && !ISmaintenance  && SYSS!="ING"&& isBarCode)
                        {
                            Queuelock.unlock();
                            if((ControlType_1 == "SB356_PLC")&&(!PLCIsConnect))
                            {}
                            else
                            {
                                if(SerialGunMode && notContrlBarcodePower == false)
                                {
                                    if(Factory == "Haima"||(Factory == "SVW2" && ControlType_1 == "GWK"))
                                        system("echo 1 > /sys/class/leds/control_uart1/brightness");
                                    else
                                        system("echo 1 > /sys/class/leds/control_uart2/brightness");
                                }

                                isEqual = false;
                                if(seriallist.isEmpty())
                                {
                                    seriallist.push_back(serialNums);
                                    whichindex++;
                                }
                                else
                                {
                                    QList<QString>::iterator i;
                                    for (i = seriallist.begin(); i != seriallist.end(); ++i)
                                    {
                                        if(!(QString::compare(serialNums, *i, Qt::CaseSensitive)))
                                        {
                                            isEqual = true;
                                            break;
                                        }
                                    }
                                    if(factory == "GZBAIC")
                                    {
                                        isEqual = false ;
                                    }

                                    if(!isEqual)
                                    {
                                        if(seriallist.size() == 10)
                                        {
                                            seriallist[whichindex] = serialNums;
                                        }
                                        else
                                        {
                                            seriallist.push_back(serialNums);
                                        }
                                        whichindex++;
                                        if(whichindex == 10)
                                            whichindex = 0;
                                    }
                                }
                                DTdebug()<<"send SerialNumbs "<<serialNums<<isEqual;
                                emit serialCom(serialNums,isEqual,"BarCode");
                            }
                        }
                        else
                            Queuelock.unlock();
                        buff.clear();
                        bzero(data1,sizeof(data1));
                    }


                }
                else if(manualMode && Factory=="Dongfeng")
                {
                    for(int i=0;i<buff.size();i++)
                    {
                        if((char)buff[i] == 0x0d)
                        {
                            DTdebug()<<"&&&&&&&&&&&&&&&"<<buff;
                            QString serialNums = buff.left(i);
                            buff.clear();
                            while( (!serialNums.isEmpty())&&(!(((serialNums[0] >='a') && (serialNums[0]  <= 'z')) ||((serialNums[0]  >='A') && (serialNums[0]  <= 'Z'))||((serialNums[0]  >='0')&&(serialNums[0] <= '9'))) ) )
                            {
                                DTdebug()<<"not a number or letter"<<serialNums;
                                serialNums.replace(0,1,"");
                                //                    DTdebug() << "*******clear********" <<buff;
                            }

                            //                            buff = buff.right(buff.size()-i-1);
                            if (serialNums.size()==17)
                            {
                                if(CsIsConnect && !ISmaintenance  && SYSS!="ING" && (serialNums.left(1)!="L") )
                                {
                                    isEqual = false;
                                    if(seriallist.isEmpty())
                                    {
                                        seriallist.push_back(serialNums);
                                        whichindex++;
                                    }
                                    else
                                    {
                                        QList<QString>::iterator i;
                                        for (i = seriallist.begin(); i != seriallist.end(); ++i)
                                        {
                                            if(!(QString::compare(serialNums, *i, Qt::CaseSensitive)))
                                            {
                                                isEqual = true;
                                                break;
                                            }
                                        }


                                        if(!isEqual)
                                        {
                                            if(seriallist.size() == 10)
                                            {
                                                seriallist[whichindex] = serialNums;
                                            }
                                            else
                                            {
                                                seriallist.push_back(serialNums);
                                            }
                                            whichindex++;
                                            if(whichindex == 10)
                                                whichindex = 0;
                                        }
                                    }

                                    DTdebug()<<"send SerialNumbs "<<serialNums<<isEqual;
                                    emit serialCom(serialNums,isEqual,"BarCode");
                                }
                            }
                            else
                            {
                                DTdebug()<<"wrong SerialNums "<<serialNums;
                            }
                            break;
                        }
                    }
                    if(buff.size()>30)
                        buff.clear();
                    bzero(data1,sizeof(data1));
                }
            }
        }
#endif
    }
    else
        Queuelock.unlock();
}

void SerialComs::readCom()
{
    usleep(50000) ;
    QByteArray buff = myCom->readAll();
    DTdebug() << buff ;

    if(Factory == "Benz"||((Factory =="BYDXA")&& isBarCode))   //用于长沙BYD
    {
        int len = 0;
        if(Factory == "Benz")
            len = 8;
        else if(Factory == "BYDXA")
            len = 18;
        //                    DTdebug()<<"buff<<"<<buff.size()<<buff;
        for(int i=0;i<buff.size();i++)
        {
            if((char)buff[i] == 0x0d)
            {
                QString serialNums = buff.left(i);
                buff.clear();
                if (serialNums.size()== len)
                {
                    if(CsIsConnect && !ISmaintenance && SYSS!="ING"&& isBarCode)
                    {
                        isEqual = false;
                        if(seriallist.isEmpty())
                        {
                            seriallist.push_back(serialNums);
                            whichindex++;
                        }
                        else
                        {
                            QList<QString>::iterator i;
                            for (i = seriallist.begin(); i != seriallist.end(); ++i)
                            {
                                if(!(QString::compare(serialNums, *i, Qt::CaseSensitive)))
                                {
                                    isEqual = true;
                                    break;
                                }
                            }
                            if(!isEqual)
                            {
                                if(seriallist.size() == 10)
                                {
                                    seriallist[whichindex] = serialNums;
                                }
                                else
                                {
                                    seriallist.push_back(serialNums);
                                }
                                whichindex++;
                                if(whichindex == 10)
                                    whichindex = 0;
                            }
                        }

                        DTdebug()<<"send SerialNumbs "<<serialNums;
                        emit serialCom(serialNums,isEqual," ");
                    }
                }
                else
                {
                    DTdebug()<<"wrong SerialNums "<<serialNums;
                }
                break;
            }
        }
        if(buff.size()>30)
        {
            buff.clear();
        }
//        bzero(data1,sizeof(data1));
    }
    else if(!manualMode)
    {
        while( (!buff.isEmpty())&&(!buff.startsWith(vinHead)) )
        {
            DTdebug()<<"not Start with "<<vinHead<<buff;
            return ;
        }

        if((buff.size() >= vinLen)&&(buff[0]==vinHead[0]))
        {
            DTdebug()<<SaveWhat<<isQueue;
            buff[vinLen] = '\0';
            QString serialNums = QString(buff);
            DTdebug() << "tiaoma qiang"<< serialNums;
#if 1
            if(DebugMode)
            {
                emit sendDebug(QString(buff));
            }
#endif
            Queuelock.lockForRead();
            if(Factory == "Dongfeng")
            {
                if(SaveWhat == "delete_car")
                    emit deleteCar(serialNums);
                else
                    emit alignCar(serialNums);
            }
            else if(SaveWhat == "delete_car")
            {
                Queuelock.unlock();
                emit serialCom(serialNums,false,"VIN");
            }
            else if(isQueue)
            {
                Queuelock.unlock();
                if(SaveWhat.mid(0,8) != "queue_no")
                {
                    emit serialCom(serialNums,false,"VIN");
                }
            }
            else if(CsIsConnect && !ISmaintenance  && SYSS!="ING"&& isBarCode)
            {
                Queuelock.unlock();
                if((ControlType_1 == "SB356_PLC")&&(!PLCIsConnect))
                {}
                else
                {
                    if(SerialGunMode && notContrlBarcodePower == false)
                    {
                        if(Factory == "Haima"||(Factory == "SVW2" && ControlType_1 == "GWK"))
                            system("echo 1 > /sys/class/leds/control_uart1/brightness");
                        else
                            system("echo 1 > /sys/class/leds/control_uart2/brightness");
                    }

                    isEqual = false;
                    if(seriallist.isEmpty())
                    {
                        seriallist.push_back(serialNums);
                        whichindex++;
                    }
                    else
                    {
                        QList<QString>::iterator i;
                        for (i = seriallist.begin(); i != seriallist.end(); ++i)
                        {
                            if(!(QString::compare(serialNums, *i, Qt::CaseSensitive)))
                            {
                                isEqual = true;
                                break;
                            }
                        }
                        if(factory == "GZBAIC")
                        {
                            isEqual = false ;
                        }

                        if(!isEqual)
                        {
                            if(seriallist.size() == 10)
                            {
                                seriallist[whichindex] = serialNums;
                            }
                            else
                            {
                                seriallist.push_back(serialNums);
                            }
                            whichindex++;
                            if(whichindex == 10)
                                whichindex = 0;
                        }
                    }
                    DTdebug()<<"send SerialNumbs "<<serialNums<<isEqual;
                    emit serialCom(serialNums,isEqual,"BarCode");
                }
            }
            else
                Queuelock.unlock();
            buff.clear();
//            bzero(data1,sizeof(data1));
        }


    }
    else if(manualMode && Factory=="Dongfeng")
    {
        for(int i=0;i<buff.size();i++)
        {
            if((char)buff[i] == 0x0d)
            {
                DTdebug()<<"&&&&&&&&&&&&&&&"<<buff;
                QString serialNums = buff.left(i);
                buff.clear();
                while( (!serialNums.isEmpty())&&(!(((serialNums[0] >='a') && (serialNums[0]  <= 'z')) ||((serialNums[0]  >='A') && (serialNums[0]  <= 'Z'))||((serialNums[0]  >='0')&&(serialNums[0] <= '9'))) ) )
                {
                    DTdebug()<<"not a number or letter"<<serialNums;
                    serialNums.replace(0,1,"");
                    //                    DTdebug() << "*******clear********" <<buff;
                }

                //                            buff = buff.right(buff.size()-i-1);
                if (serialNums.size()==17)
                {
                    if(CsIsConnect && !ISmaintenance  && SYSS!="ING" && (serialNums.left(1)!="L") )
                    {
                        isEqual = false;
                        if(seriallist.isEmpty())
                        {
                            seriallist.push_back(serialNums);
                            whichindex++;
                        }
                        else
                        {
                            QList<QString>::iterator i;
                            for (i = seriallist.begin(); i != seriallist.end(); ++i)
                            {
                                if(!(QString::compare(serialNums, *i, Qt::CaseSensitive)))
                                {
                                    isEqual = true;
                                    break;
                                }
                            }


                            if(!isEqual)
                            {
                                if(seriallist.size() == 10)
                                {
                                    seriallist[whichindex] = serialNums;
                                }
                                else
                                {
                                    seriallist.push_back(serialNums);
                                }
                                whichindex++;
                                if(whichindex == 10)
                                    whichindex = 0;
                            }
                        }

                        DTdebug()<<"send SerialNumbs "<<serialNums<<isEqual;
                        emit serialCom(serialNums,isEqual,"BarCode");
                    }
                }
                else
                {
                    DTdebug()<<"wrong SerialNums "<<serialNums;
                }
                break;
            }
        }
        if(buff.size()>30)
            buff.clear();
//        bzero(data1,sizeof(data1));
    }

}
