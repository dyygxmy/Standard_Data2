#ifndef SERIALCOMS_H
#define SERIALCOMS_H

#include <QObject>
#include <QThread>
#include <QDebug>
#include <unistd.h>
#include <fcntl.h>
#include <getopt.h>
#include <string.h>
#include <termios.h>
#include "GlobalVarible.h"
#include "qextserial/qextserialport.h"
class SerialComs : public QObject
{
    Q_OBJECT
public:
    explicit SerialComs(QObject *parent = 0);


signals:
    void serialCom(QString,bool,QString);//发给UI线程
    void sendDebug(QString);
    void deleteCar(QString);
    void alignCar(QString);

public slots:
    void comInit() ;                      //初始化条码枪串口
    void readCom() ;
private:
    QThread m_thread;
    QextSerialPort *myCom;
    QList<QString> seriallist;//条码链表 存储10个条码以内不能重复
    char buff[20];
    int dev_fd;               //串口文件描述符
    bool isEqual;            //条码是否重复
    int whichindex;           //当前条码索引

    int vinLen;
    QByteArray vinHead;
    QString Factory;
};

#endif // SERIALCOMS_H
