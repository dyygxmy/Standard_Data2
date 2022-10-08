#include "logdelete.h"

LogDelete::LogDelete(QObject *parent) :
    QObject(parent)
{
    this->moveToThread(&m_thread);
    m_thread.start();
}

void LogDelete::init()
{
    qDebug() <<"LogDelete thread start!!";

    QSettings *config = new QSettings("/config.ini", QSettings::IniFormat);
    notTimeSynchronization = config->value(QString("baseinfo").append("/notTimeSync")).toBool();
    delete config;

    connect(&LogTimer, SIGNAL(timeout()), this, SLOT(logDeleteSlot()));
    LogTimer.start(3600000);

    connect(&timerTimeSync,SIGNAL(timeout()), this, SLOT(slotTimeSync()));
    if(notTimeSynchronization)
    {
        qDebug() << "notTimeSynchronization" << notTimeSynchronization;
    }
    else {
        LogTimer.start(600000);
    }

}

void LogDelete::slotTimeSync()
{
    QDateTime curDateTime=QDateTime::currentDateTime();
    QString str = curDateTime.toString ("hh:mm");
    if(str.contains("04:3"))
    {
        //早晨 4:3* 给控制器同步时间
        Q_EMIT signalSyncTime(4);
    }
}

void LogDelete::logDeleteSlot()
{
    QDir dir("/log");
    if (!dir.exists())
       return ;
    QFileInfoList list = dir.entryInfoList();
    int i=0;

    do{
        QFileInfo fileInfo = list.at(i);
        if(fileInfo.fileName()=="."||fileInfo.fileName()=="..")
        {
            i++;
            continue;
        }
//        qDebug()<<"find "<<fileInfo.filePath();

        QDate date = QDate::currentDate();

        if(QDate::fromString(fileInfo.baseName(),"yyyy-MM-dd") < date.addDays(-30))
        {
            qDebug() << "delete file "+fileInfo.fileName();
            unlink(fileInfo.filePath().toLocal8Bit().data());
        }
        i++;
    }while(i<list.size());
}
