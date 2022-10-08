#include "taotong.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>
TaoTong::TaoTong(QObject *parent) :
    QObject(parent)
{
    count_num1 = 0;
    count_num2 = 0;
    count_num3 = 0;
    count_num4 = 0;
    count_num5 = 0;
    count_num6 = 0;
    count_num7 = 0;
    count_num8 = 0;
    //    taoTongNum = 0;
    k_power = "";
    k_before = "";
    m_thread.start();
    Factory = factory;
    this->moveToThread(&m_thread);
}

void TaoTong::T_start()
{
    k1 = 0,k2 = 0,k3 = 0,k4 = 0,k5 = 0,k6 = 0,k7 = 0,k8 = 0;
    connect(&m_timer,SIGNAL(timeout()),this,SLOT(taotong_timer()));
    m_timer.start(500);
}

void TaoTong::taotong_timer()
{
    if(battery)
    {
        QFile power("/var/power");
        power.open(QIODevice::ReadOnly);
        QTextStream in_power(&power);
        in_power >> k_power;
        if(k_power != k_before)
        {
            k_before = k_power;
            emit sendbattery(k_power);
        }
        power.close();
    }

    if(SYSS == "ING" && TaoTongState)
    {
        if(Factory =="BYDSZ" ||Factory == "BYDXA")
        {
            QFile taotong1("/sys/class/gpio/gpio162/value"); //INA1
            QFile taotong2("/sys/class/gpio/gpio160/value"); //INA2
            QFile taotong3("/sys/class/gpio/gpio165/value"); //INA3
            QFile taotong4("/sys/class/gpio/gpio164/value"); //INA4
            //            QFile taotong5("/sys/class/gpio/gpio159/value"); //INA5
            //            QFile taotong6("/sys/class/gpio/gpio158/value"); //INA6
            //            QFile taotong7("/sys/class/gpio/gpio149/value"); //INA7
            //            QFile taotong8("/sys/class/gpio/gpio146/value"); //INA8
            QFile taotong5("/sys/class/gpio/gpio149/value"); //INA5
            QFile taotong6("/sys/class/gpio/gpio146/value"); //INA6
            QFile taotong7("/sys/class/gpio/gpio147/value"); //INA7
            QFile taotong8("/sys/class/gpio/gpio176/value"); //INA8
            taotong1.open(QIODevice::ReadOnly);
            taotong2.open(QIODevice::ReadOnly);
            taotong3.open(QIODevice::ReadOnly);
            taotong4.open(QIODevice::ReadOnly);
            taotong5.open(QIODevice::ReadOnly);
            taotong6.open(QIODevice::ReadOnly);
            taotong7.open(QIODevice::ReadOnly);
            taotong8.open(QIODevice::ReadOnly);
            QTextStream in1(&taotong1);
            QTextStream in2(&taotong2);
            QTextStream in3(&taotong3);
            QTextStream in4(&taotong4);
            QTextStream in5(&taotong5);
            QTextStream in6(&taotong6);
            QTextStream in7(&taotong7);
            QTextStream in8(&taotong8);
            in1 >> k1;
            in2 >> k2;
            in3 >> k3;
            in4 >> k4;
            in5 >> k5;
            in6 >> k6;
            in7 >> k7;
            in8 >> k8;
            taotong1.close();
            taotong2.close();
            taotong3.close();
            taotong4.close();
            taotong5.close();
            taotong6.close();
            taotong7.close();
            taotong8.close();
//            k8 = k4;
//            k7 = k3;
//            k6 = k2;
//            k5 = k1;
#if 0
            if(k5 == 1 && k6 == 1 && k7 == 1 && k8 == 0)
            {
                //套筒8
                count_num8++;
                if(count_num8 == 3)
                {
                    emit taotong_num(8);
                    count_num8 = 0;

                }
            }
#else
            if(k8 == 0)
            {
                //套筒8
                count_num8++;
                if(count_num8 == 3)
                {
                    taotongNum = 50 ;
                    emit taotong_num(50);
                    count_num8 = 0;

                }
            }
#endif
            else if(k5 == 0 && k6 == 0 && k7 == 0 && k8 == 1)
            {
                //套筒7
                count_num7++;
                if(count_num7 == 3)
                {
                    taotongNum = 7 ;
                    emit taotong_num(7);
                    count_num7 = 0;
                }
            }
            else if(k5 == 1 && k6 == 0 && k7 == 0 && k8 == 1)
            {
                //套筒6
                count_num6++;
                if(count_num6 == 3)
                {
                    taotongNum = 6 ;
                    emit taotong_num(6);
                    count_num6 = 0;
                }
            }
            else if(k5 == 0 && k6 == 1 && k7 == 0 && k8 == 1)
            {
                //套筒5
                count_num5++;
                if(count_num5 == 3)
                {
                    taotongNum = 5 ;
                    emit taotong_num(5);
                    count_num5 = 0;
                }
            }
            else if(k5 == 1 && k6 == 1 && k7 == 0 && k8 == 1)
            {
                //套筒4
                count_num4++;
                if(count_num4 == 3)
                {
                    taotongNum = 4 ;
                    emit taotong_num(4);
                    count_num4 = 0;
                }
            }
            else if(k5 == 0 && k6 == 0 && k7 == 1 && k8 == 1)
            {
                //套筒3
                count_num3++;
                if(count_num3 == 3)
                {
                    //                qDebug() << "send tao tong signal 3 !!!!!!";
                    taotongNum = 3 ;
                    emit taotong_num(3);
                    count_num3 = 0;
                }
            }
            else if(k5 == 1 && k6 == 0 && k7 == 1 && k8 == 1)
            {
                //套筒2
                count_num2++;
                if(count_num2 == 3)
                {
                    taotongNum = 2 ;
                    //                qDebug() << "send tao tong signal 2 !!!!!!";
                    emit taotong_num(2);
                    count_num2 = 0;
                }
            }
            else if(k5 == 0 && k6 == 1 && k7 == 1 && k8 == 1)
            {
                //套筒1
                count_num1++;
                if(count_num1 == 3)
                {
                    taotongNum = 1 ;
                    //                qDebug() << "send tao tong signal 1 !!!!!!";
                    emit taotong_num(1);
                    count_num1=0;
                }
            }
            else
            {
                taotongNum = 10 ;
                //            qDebug() << "send tao tong signal 000 !!!!!!";
                emit taotong_num(10);
            }
        }
        else
        {
            if(IOFlag)  //使用IO
            {
                QFile taotong1("/sys/class/gpio/gpio160/value");
                QFile taotong2("/sys/class/gpio/gpio165/value");
                QFile taotong3("/sys/class/gpio/gpio164/value");
                QFile taotong4("/sys/class/gpio/gpio159/value");
                taotong1.open(QIODevice::ReadOnly);
                taotong2.open(QIODevice::ReadOnly);
                taotong3.open(QIODevice::ReadOnly);
                taotong4.open(QIODevice::ReadOnly);
                QTextStream in1(&taotong1);
                QTextStream in2(&taotong2);
                QTextStream in3(&taotong3);
                QTextStream in4(&taotong4);
                in1 >> k1;
                in2 >> k2;
                in3 >> k3;
                in4 >> k4;

                taotong1.close();
                taotong2.close();
                taotong3.close();
                taotong4.close();
                if(Factory == "Ningbo" ||Factory == "SVW2")
                {
                    if(k1 == 0)
                        k1 = 1;
                    else
                        k1 = 0;
                    if(k2 == 0)
                        k2 = 1;
                    else
                        k2 = 0;
                    if(k3 == 0)
                        k3 = 1;
                    else
                        k3 = 0;
                    if(k4 == 0)
                        k4 = 1;
                    else
                        k4 = 0;
                }
    //            qDebug()<< "taotong k1-k4" << k1 << k2 << k3 << k4;
                if(k1 ==1 && k2==1 && k3 == 1 && k4==0)
                {
                    //套筒4
                    count_num1++;
                    if(count_num1 == 3)
                    {
                        //  qDebug() << "send tao tong signal 4 !!!!!!";
                        emit taotong_num(4);
                        //TaoTongState = false;
                        count_num1 = 0;

                    }
                }
                else if(k1 ==1 && k2==1 && k3 == 0 && k4==1)
                {
                    //套筒3
                    count_num2++;
                    if(count_num2 == 3)
                    {
                        // qDebug() << "send tao tong signal 3 !!!!!!";
                        emit taotong_num(3);
                        //TaoTongState = false;
                        count_num2 = 0;
                    }
                }
                else if(k1 ==1 && k2==0 && k3 == 1 && k4==1)
                {
                    //套筒2
                    count_num3++;
                    if(count_num3 == 3)
                    {
                        // qDebug() << "send tao tong signal 2 !!!!!!";
                        emit taotong_num(2);
                        //TaoTongState = false;
                        count_num3 = 0;
                    }
                }
                else if(k1 ==0 && k2==1 && k3 == 1 && k4==1)
                {
                    //套筒1
                    count_num4++;
                    if(count_num4++)
                    {
                        //qDebug() << "send tao tong signal 1 !!!!!!";
                        //qDebug() << TAOTONG;
                        emit taotong_num(1);
                        //TaoTongState = false;
                        count_num4=0;
                    }
                }
                else
                {
                    emit taotong_num(10);
                }
            }
            else  //使用马头枪,xml解析获得
            {
                DTdebug() << socketSpannerStatus ;
                emit taotong_num(socketSpannerStatus);
            }

        }
    }
}

