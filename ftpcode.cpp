#include "ftpcode.h"

FtpCode::FtpCode(QObject *parent) :
    QObject(parent)
{
    ftpServer = QString("192.168.2.102");
    currentDir = "/tmp";

    ftp_thread.start();
    this->moveToThread(&ftp_thread);
    connect (&connectTimer,SIGNAL(timeout()),this,SLOT(connectTimeout()));
    connect (&heartTimer,SIGNAL(timeout()),this,SLOT(heartTimeout()));
    connect (&detectTimer,SIGNAL(timeout()),this,SLOT(dirList()));
}

void FtpCode::initServer()
{
    connectTimer.start(5000);
    connectServer();
}

// 连接按钮
void FtpCode::connectServer()
{
    ftp = new QFtp(this);
    connect(ftp, SIGNAL(commandStarted(int)), this, SLOT(ftpCommandStarted(int)));
    connect(ftp, SIGNAL(commandFinished(int, bool)), this, SLOT(ftpCommandFinished(int, bool)));
    connect(ftp, SIGNAL(listInfo(const QUrlInfo &)), this, SLOT(ftpListInfo(const QUrlInfo &)));
    qDebug()<<"FtpCode connect to ftpServer"<<ftpServer;
    ftp->connectToHost(ftpServer, 21);
    ftp->login("root", "1234");
}

void FtpCode::connectTimeout()
{
    if(detectTimer.isActive())
        detectTimer.stop();
    ftp->disconnect();
    delete ftp;
    qDebug()<<"FTP connect timeout";
    connectServer();
}

void FtpCode::heartTimeout()
{
    if(heartTimer.isActive())
        heartTimer.stop();
    if(detectTimer.isActive())
        detectTimer.stop();
    qDebug()<<"FTP heart Timeout";
    ftp->disconnect();
    delete ftp;
    connectTimer.start(5000);
    connectServer();
}

void FtpCode::stateChanged(int state)
{
    switch(state)
    {
    case QFtp::Unconnected:
        qDebug("Ftp:Unconnected...");
        break;
    case QFtp::HostLookup:
        qDebug("Ftp:HostLookup...");
        break;
    case QFtp::Connecting:
        qDebug("Ftp:Connecting...");
        break;
    case QFtp::Connected:
        qDebug("Ftp:Connected...");
        break;
    case QFtp::LoggedIn:
        qDebug("Ftp:LoggedIn...");
        break;
    case QFtp::Closing:
        qDebug("Ftp:Closing...");
        break;
    }
}

void FtpCode::ftpCommandStarted(int)
{
    int id = ftp->currentCommand();
    switch (id)
    {
    case QFtp::ConnectToHost :
        qDebug()<<tr("正在连接到服务器…");
        break;
    case QFtp::Login :
        qDebug()<<tr("正在登录…");
        break;
    case QFtp::Close :
        qDebug()<<"正在关闭连接…";
        break;
    case QFtp::Connecting:
        qDebug()<<(tr("连接中"));
        break;
    default:
        break;
    }
}

void FtpCode::ftpCommandFinished(int id, bool error)
{
    if(heartTimer.isActive())
        heartTimer.stop();
    if(ftp->currentCommand() == QFtp::ConnectToHost)
    {
        if (error)
            qDebug()<<tr("连接服务器出现错误：%1").arg(ftp->errorString());
        else
            qDebug()<<tr("连接到服务器成功");
    }
    else if (ftp->currentCommand() == QFtp::Login)
    {
        if (error)
            qDebug()<<tr("登录出现错误：%1").arg(ftp->errorString());
        else
        {
            qDebug()<<tr("登录成功");
            ftp->cd(currentDir);
            if(connectTimer.isActive())
                connectTimer.stop();
            detectTimer.start(5000);
        }
    }
    else if (ftp->currentCommand() == QFtp::Close)
    {
        qDebug()<<tr("已经关闭连接");
    }
    else if (ftp->currentCommand() == QFtp::Put)
    {
        if(error)
            qDebug()<<tr("put error!：%1").arg(ftp->errorString())<<id;
        else
            qDebug()<<"put success recv put id"<<id;
    }
    else if(ftp->currentCommand() == QFtp::Mkdir)
    {
        if (error)
            qDebug()<<tr("mkdir fail:%1").arg(ftp->errorString());
        else
            qDebug()<<tr("mkdir success");
    }
    else if (ftp->currentCommand() == QFtp::Cd)
    {
        if (error)
            qDebug()<<tr("cd fail:%1").arg(ftp->errorString());
    }
    else if (ftp->currentCommand() == QFtp::List)
    {
        if (error)
        {
            qDebug() << "list Error: " << qPrintable(ftp->errorString());
        }
        else
        {
            qDebug() << "list success";
        }
    }
    if(error)
        QTimer::singleShot(5000,this,SLOT(heartTimeout()));
    else
        heartTimer.start(10000);
}

void FtpCode::dirList()
{
    allFilePaths.clear();
    ftp->list();
}

void FtpCode::ftpListInfo(const QUrlInfo &urlInfo)
{
    if (urlInfo.isFile())
    {
        static QString sCode;
        QString tmpCode = urlInfo.name();
        if(tmpCode.count() == 17)
        {
            if(tmpCode.compare(sCode))
            {
                sCode = tmpCode;
                emit serialCom(tmpCode,false,"BarCode");
            }
            else
            {
                emit serialCom(tmpCode,true,"BarCode");
            }
            allFilePaths.append(tmpCode);
        }
    }
    else if (urlInfo.isDir() && !urlInfo.isSymLink())
    {
        qDebug()<<"dir:"<<urlInfo.name();
    }
}

/*************************************************************************
*处理内容：将GBK编码格式转化为FTP编码格式
*@param：gbkCode		待转化字符串
*@return：
*@exception
**************************************************************************/
QString FtpCode::gbkCodeToFtpCode(const QString &gbkCode)
{
    QString TempResult;
    //1.提取数据
    size_t InStrBufSize = gbkCode.toAscii().size();
    char* InStrBuf = (char *)malloc(InStrBufSize);//= InputStr.toAscii().data();
    memset(InStrBuf, 0, InStrBufSize);
    if (InStrBuf == NULL)
    {
        return TempResult;
    }
    memcpy(InStrBuf, gbkCode.toAscii().constData(), InStrBufSize);
    //2.建立输出缓冲
    //输出缓冲大小要比Ascii字节*2后多两个字节 用于标识输出字符串结尾
    size_t OutStrBufSize = (InStrBufSize + 1) * sizeof(QChar);
    quint16* OutStrBuf = (quint16 *)malloc(OutStrBufSize);
    if (OutStrBuf == NULL)
    {
        return TempResult;
    }
    memset(OutStrBuf, 0, OutStrBufSize);
    //3.重新编码
    size_t i = 0;
    for(i = 0; i < InStrBufSize; i++)
    {
        OutStrBuf[i] = (quint8)InStrBuf[i];
    }
    //4.数据重新组装
    TempResult = QString::fromUtf16(OutStrBuf);
    free(InStrBuf);
    free(OutStrBuf);
    return TempResult;
}
