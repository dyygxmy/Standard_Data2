#ifndef FTPCODE_H
#define FTPCODE_H

#include <QObject>

class QFtp;
#include <QFtp>
#include <QFile>
#include <QHash>
#include <QTimer>
#include <QThread>
#include <QDebug>
#include <QDir>
#include "unistd.h"
class QFile;

class FtpCode : public QObject
{
    Q_OBJECT
public:
    explicit FtpCode(QObject *parent = 0);

    QString gbkCodeToFtpCode(const QString &gbkCode);

signals:
    void serialCom(QString,bool,QString);//发给UI线程

public slots:
    void ftpCommandStarted(int);
    void ftpCommandFinished(int, bool);
    void initServer();
    void connectServer();

    void dirList();

    void connectTimeout();
    void heartTimeout();
    void ftpListInfo(const QUrlInfo &urlInfo);
    void stateChanged(int state);

public:
    QString ftpServer;
    QThread ftp_thread;
    QFtp *ftp;

    // 用来表示下载的文件
    QFile *file;

    QTimer connectTimer;
    QTimer detectTimer;
    QTimer heartTimer;

    QStringList allFilePaths;
    QString currentDir;
};

#endif // FTPCODE_H
