#ifndef GLOBALVARIBLE_H
#define GLOBALVARIBLE_H

#include <QReadWriteLock>
#include <QQueue>
#include <QVector>
#include <QMetaType>
#include "unistd.h"
extern bool isJS;
extern bool isRFID;   //是否是RFID
extern bool isBarCode;//
extern bool isQueue;
extern bool BAICQueue;  //株洲北汽的队列的配置文件被自动条码枪占用了。该配置文件用来区分是队列还是自动条码枪。 true为队列
extern bool isServerTip;  //与服务器断开连接后，界面是否需要提示”网络异常”  add by wxm 2020/5/18
extern bool isNormal;//是否正常
extern bool workmode;//工作模式
extern bool CsIsConnect; //CS351状态
extern bool RFIDIsConnect;//RFID State
extern bool PLCIsConnect;//PLC State
extern bool RDYY;        //是否准备
extern bool ISmaintenance;//IDLE state
extern bool ISRESET;
extern bool ISWARNING;
extern bool Curve_Is_Null;
extern bool TaoTongState;
extern bool WIFI_STATE;
extern bool SerialGunMode;
extern bool DebugMode;
extern bool QueueIsNull;
extern bool rfidNextCom;   //rfid下辆车已进站标识
extern int Line_ID;
//extern int SerialMode;// 0条码枪  1 RFID  2 队列模式
extern bool bound_enabled;
extern bool restart_enabled;    //启用重启
extern bool isReplaceBarcode;    //条码替换
extern bool isQRVerify ;   //二维码校验
extern QString SYSS;     //状态
extern QString SaveWhat; //要保存什么
extern QString VIN_PIN_SQL;//VIN 码
extern QString VIN_PIN_SQL_RFID;//PIN 码
extern QString VIN_PIN_SQL_RFID_previous;
extern QString AutoNO;
extern QString Type;
extern QString Body_NO;
extern QString SCREWID_SQL;//螺栓编号
//extern QByteArray time_info;//实时信息包
extern QString lsNum;       //额定螺栓数量
extern QString SqlUserName;
extern QString SqlPassword;
extern QString WirelessIp;
extern QString LocalIp;
extern QString LocalIp2;
extern QString ControllerIp_1;
extern QString ControllerIp_2;
extern QString ControlType_1;
extern QString ControlType_2;
extern QString Station;  //工位
extern QString Equip;   //设备号
extern QString variable1;//
extern int BoltOrder[2]; //第几个螺栓
extern int QualifiedNum;  //合格数量
extern int TimeLeft;      //剩余时间
//extern int BackTimeLeft;
extern int enablenumberLeft; //剩余螺栓数量
extern int TAOTONG;
extern int StationStatus;
extern QString Operator;
extern QString info[7];
extern QString status[20][5];
extern QString Version;
extern QString tablePreview;
extern QString factory;
extern QString Localtable;
extern bool battery;
extern int BoltTotalNum;   //螺栓总数
//extern bool NOKflag;          //是否有NOK
extern QReadWriteLock lock;
extern QReadWriteLock RFIDlock;
extern QReadWriteLock deletelock;
extern QReadWriteLock WIFIlock;
extern QReadWriteLock Queuelock;
extern QQueue<QVector<QString> > queue;
extern int locationStatus;
extern bool upInversion;   //是否上传反转数据
extern int  Y1V;  //扭矩存储值类型（2:最大值|1:目标值）
extern int socketSpannerStatus; //当前套筒号，如果当前取下套筒个数>1，则=0，意为不可使用。A-1;B-2;C-3;D-4;
extern bool IOFlag ;   //使用IO（博世） or 使用 套筒（马头）
extern bool unCacheRfidFlag ; //下一辆车进站。1：不缓存Rfid ； 0：缓存Rfid  默认缓存
extern bool notDisqualificationSkip ;
extern QString userName;
extern QString userID ;
extern int taotongNum ;
extern bool notContrlBarcodePower ;
extern int saveTightenResultNum ;

#define DTdebug()  qDebug( ) << __FILE__ << "|"  << __LINE__ << ":"
#define FUNC( )    DTdebug() << "- Enter Funtion : " << QString( __PRETTY_FUNCTION__ )

extern int locationstation;//add lw 2017/10/30
typedef struct
{
    QString pdmName;
    QString boltSN[20];
    QString proNo[20];
    int boltNum[20];
    int ttNum[20];
}CAR_INFOR;

extern CAR_INFOR carInfor[4];
extern int preChannel;
extern int groupNumCh[4];
extern QString channelNum;
extern bool manualMode;

typedef struct insert_data
{
    QString data_model[55];
}DATA_STRUCT;

Q_DECLARE_METATYPE(DATA_STRUCT)

#endif  // GLOBALVARIBLE_H


