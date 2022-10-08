#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QThread>
#include <QTimer>
#include <QtNetwork>
#include <QDomDocument>
#include <QtCore/QCoreApplication>
#include <QSqlDatabase>
#include <QDebug>
#include <QStringList>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariant>
#include "GlobalVarible.h"
#include <QSettings>

class Worker : public QObject
{
    Q_OBJECT
public:
    explicit Worker(QObject *parent = 0);
    void dbconnect();

    double dXVA ;
    double dY1V ;  //double 类型的 Y1V

signals:
    void haverec(int);
    void clo2();
    void sendfromworkthread(QVariant);
    void havedconnect(bool);
    void disconnectTellPortA();
    void send_mainwindow(QString,QString,QString,int,int);
public slots:
    void recMessage();
    void DataReceived();
    void fun1();
    void closePortBTcpServer();
    void xml_parse(QByteArray);
    void heartTimerFunc();
    void portAsendPortB();
private:
    QTcpServer *tcpServer;
    QTcpSocket *m_pTcpSocket;
    QTimer *heartTimer;
    QThread m_thread;
    QByteArray receiveResult;
    QByteArray receiveResultDo;
    QDomNode node;
//    QString data_model[11];
    QString CurveStr;
    int timerCount;
    QString CyclePrevious;
//    QString data_model[15];
    QString Factory;
    bool socket4710Flag;

};

#endif // WORKER_H
