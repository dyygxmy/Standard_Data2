#ifndef FTPFILE_H
#define FTPFILE_H

#include <QObject>
#include <QThread>

class FtpFile : public QObject
{
    Q_OBJECT
public:
    explicit FtpFile(QObject *parent = 0);

public:
    QThread mftpFile_thread;

public:
    void findSerialFile(QString path);

signals:

public slots:

};

#endif // FTPFILE_H
