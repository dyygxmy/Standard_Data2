/********************************************************************************
** Form generated from reading UI file 'basicset.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICSET_H
#define UI_BASICSET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BasicSet
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_controllerIp_ch1;
    QLineEdit *lineEdit_controllerIp_ch2;
    QLabel *label_7;
    QPushButton *pushButton;
    QWidget *page_3;
    QLabel *label_9;
    QComboBox *comboBox;
    QLabel *label_8;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *label_11;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QPushButton *pushButton_truncateQueue;
    QLabel *label_queue;
    QWidget *page_4;
    QLabel *label_10;
    QLabel *label_21;
    QLineEdit *lineEdit_DataServerIp;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *lineEdit_CurveServerIp;
    QLineEdit *lineEdit_AndonServerIp;
    QLabel *label_29;
    QLabel *label_31;
    QLineEdit *lineEdit_port;
    QWidget *page_2;
    QLabel *label_6;
    QLineEdit *lineEdit_BarcodeGun;
    QLabel *label_27;
    QLabel *label_28;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit_RfidIp;
    QLineEdit *lineEdit_RfidPort;
    QLabel *label_24;
    QLabel *label_26;
    QLabel *label_30;
    QLabel *label_142;
    QPushButton *pushButton_37;
    QPushButton *pushButton_38;

    void setupUi(QDialog *BasicSet)
    {
        if (BasicSet->objectName().isEmpty())
            BasicSet->setObjectName(QString::fromUtf8("BasicSet"));
        BasicSet->resize(538, 341);
        stackedWidget = new QStackedWidget(BasicSet);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 538, 341));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 255);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 149, 341));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/logo/cs351set.png);"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 30, 171, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 87, 81, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        lineEdit_controllerIp_ch1 = new QLineEdit(page);
        lineEdit_controllerIp_ch1->setObjectName(QString::fromUtf8("lineEdit_controllerIp_ch1"));
        lineEdit_controllerIp_ch1->setGeometry(QRect(279, 90, 181, 35));
        lineEdit_controllerIp_ch1->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); "));
        lineEdit_controllerIp_ch1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_controllerIp_ch2 = new QLineEdit(page);
        lineEdit_controllerIp_ch2->setObjectName(QString::fromUtf8("lineEdit_controllerIp_ch2"));
        lineEdit_controllerIp_ch2->setGeometry(QRect(279, 153, 181, 35));
        lineEdit_controllerIp_ch2->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); "));
        lineEdit_controllerIp_ch2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(190, 150, 81, 41));
        label_7->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 262, 80, 81));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"background-color: rgb(51, 153, 255);"));
        pushButton->setAutoDefault(false);
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 0, 149, 341));
        label_9->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"background-color: rgb(51, 153, 255);"));
        comboBox = new QComboBox(page_3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(270, 64, 211, 31));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"font: 14pt \"Arial\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;\n"
"}\n"
"QComboBox::drop-down {\n"
"width:30px; \n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"}\n"
"QComboBox::down-arrow {\n"
"image: url(:/LCD_CS351/LCD_CS351/logo/arrow.png);\n"
"}\n"
"QComboBox  QAbstractItemView{\n"
"height:80px;\n"
"border: 1px solid rgb(51, 153, 255); \n"
"selection-background-color: rgb(51, 153, 255); \n"
"}\n"
"QScrollBar:vertical{\n"
"width:30px;\n"
"}\n"
"QComboBox QAbstractItemView::item{\n"
"height:20px;\n"
"}"));
        label_8 = new QLabel(page_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(170, 113, 81, 41));
        label_8->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 60, 81, 41));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        comboBox_2 = new QComboBox(page_3);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(270, 120, 211, 31));
        comboBox_2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"font: 14pt \"Arial\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;\n"
"}\n"
"QComboBox::drop-down {\n"
"width:30px; \n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"}\n"
"QComboBox::down-arrow {\n"
"image: url(:/LCD_CS351/LCD_CS351/logo/arrow.png);\n"
"}\n"
"QComboBox QAbstractItemView{\n"
"height:50px;\n"
"border: 1px solid rgb(51, 153, 255); \n"
"selection-background-color: rgb(51, 153, 255); \n"
"}\n"
"QScrollBar:vertical{\n"
"width:30px;\n"
"}"));
        comboBox_3 = new QComboBox(page_3);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(270, 179, 211, 31));
        comboBox_3->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"font: 14pt \"Arial\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;\n"
"}\n"
"QComboBox::drop-down {\n"
"width:30px; \n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"}\n"
"QComboBox::down-arrow {\n"
"image: url(:/LCD_CS351/LCD_CS351/logo/arrow.png);\n"
"}\n"
"QComboBox QAbstractItemView{\n"
"height:50px;\n"
"border: 1px solid rgb(51, 153, 255); \n"
"selection-background-color: rgb(51, 153, 255); \n"
"}\n"
"QScrollBar:vertical{\n"
"width:30px;\n"
"}"));
        label_11 = new QLabel(page_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(170, 172, 81, 41));
        label_11->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 236, 111, 41));
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);\n"
"border-style: solid;\n"
"background-color: rgb(51, 153, 255);"));
        pushButton_2->setAutoDefault(true);
        pushButton_2->setFlat(true);
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(300, 241, 121, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        pushButton_truncateQueue = new QPushButton(page_3);
        pushButton_truncateQueue->setObjectName(QString::fromUtf8("pushButton_truncateQueue"));
        pushButton_truncateQueue->setGeometry(QRect(170, 290, 111, 41));
        pushButton_truncateQueue->setFocusPolicy(Qt::NoFocus);
        pushButton_truncateQueue->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);\n"
"border-style: solid;\n"
"background-color: rgb(51, 153, 255);"));
        pushButton_truncateQueue->setAutoDefault(true);
        pushButton_truncateQueue->setFlat(true);
        label_queue = new QLabel(page_3);
        label_queue->setObjectName(QString::fromUtf8("label_queue"));
        label_queue->setGeometry(QRect(300, 295, 121, 31));
        label_queue->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_10 = new QLabel(page_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 0, 149, 341));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/logo/serve set.png);"));
        label_21 = new QLabel(page_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(157, 166, 141, 41));
        label_21->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_DataServerIp = new QLineEdit(page_4);
        lineEdit_DataServerIp->setObjectName(QString::fromUtf8("lineEdit_DataServerIp"));
        lineEdit_DataServerIp->setGeometry(QRect(301, 111, 161, 35));
        lineEdit_DataServerIp->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); "));
        lineEdit_DataServerIp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_22 = new QLabel(page_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(157, 108, 141, 41));
        label_22->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_23 = new QLabel(page_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(280, 30, 101, 41));
        label_23->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        lineEdit_CurveServerIp = new QLineEdit(page_4);
        lineEdit_CurveServerIp->setObjectName(QString::fromUtf8("lineEdit_CurveServerIp"));
        lineEdit_CurveServerIp->setGeometry(QRect(301, 170, 161, 34));
        lineEdit_CurveServerIp->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); "));
        lineEdit_CurveServerIp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_AndonServerIp = new QLineEdit(page_4);
        lineEdit_AndonServerIp->setObjectName(QString::fromUtf8("lineEdit_AndonServerIp"));
        lineEdit_AndonServerIp->setGeometry(QRect(301, 230, 161, 34));
        lineEdit_AndonServerIp->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); "));
        lineEdit_AndonServerIp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_29 = new QLabel(page_4);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(157, 226, 141, 41));
        label_29->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_29->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_31 = new QLabel(page_4);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(157, 290, 141, 41));
        label_31->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_port = new QLineEdit(page_4);
        lineEdit_port->setObjectName(QString::fromUtf8("lineEdit_port"));
        lineEdit_port->setGeometry(QRect(301, 294, 161, 34));
        lineEdit_port->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); "));
        lineEdit_port->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 149, 341));
        label_6->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"background-color: rgb(51,153,255);"));
        lineEdit_BarcodeGun = new QLineEdit(page_2);
        lineEdit_BarcodeGun->setObjectName(QString::fromUtf8("lineEdit_BarcodeGun"));
        lineEdit_BarcodeGun->setGeometry(QRect(310, 196, 161, 35));
        lineEdit_BarcodeGun->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); "));
        lineEdit_BarcodeGun->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_27 = new QLabel(page_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(280, 30, 141, 41));
        label_27->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_28 = new QLabel(page_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(149, 193, 151, 41));
        label_28->setLayoutDirection(Qt::LeftToRight);
        label_28->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        layoutWidget = new QWidget(page_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 253, 181, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFocusPolicy(Qt::NoFocus);
        radioButton->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"   font: 14pt \"\351\273\221\344\275\223\";\n"
"   spacing: 10 \n"
"}  \n"
"\n"
"QRadioButton::indicator { \n"
"   width: 25px;\n"
"   height: 25px;\n"
"   image: url(:/LCD_CS351/LCD_CS351/logo/Radio.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked { \n"
"image: url(:/LCD_CS351/LCD_CS351/logo/Radio_check.png);\n"
"}"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFocusPolicy(Qt::NoFocus);
        radioButton_2->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"   font: 14pt \"\351\273\221\344\275\223\";\n"
"   spacing: 10 \n"
"}  \n"
"\n"
"QRadioButton::indicator { \n"
"   width: 25px;\n"
"   height: 25px;\n"
"   image: url(:/LCD_CS351/LCD_CS351/logo/Radio.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked { \n"
"image: url(:/LCD_CS351/LCD_CS351/logo/Radio_check.png);\n"
"}"));

        horizontalLayout->addWidget(radioButton_2);

        lineEdit_RfidIp = new QLineEdit(page_2);
        lineEdit_RfidIp->setObjectName(QString::fromUtf8("lineEdit_RfidIp"));
        lineEdit_RfidIp->setGeometry(QRect(310, 90, 181, 35));
        lineEdit_RfidIp->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); "));
        lineEdit_RfidIp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_RfidPort = new QLineEdit(page_2);
        lineEdit_RfidPort->setObjectName(QString::fromUtf8("lineEdit_RfidPort"));
        lineEdit_RfidPort->setGeometry(QRect(310, 143, 111, 35));
        lineEdit_RfidPort->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); "));
        lineEdit_RfidPort->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_24 = new QLabel(page_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(180, 140, 120, 41));
        label_24->setLayoutDirection(Qt::LeftToRight);
        label_24->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_26 = new QLabel(page_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(180, 87, 120, 41));
        label_26->setLayoutDirection(Qt::LeftToRight);
        label_26->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_30 = new QLabel(page_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(180, 246, 120, 41));
        label_30->setLayoutDirection(Qt::LeftToRight);
        label_30->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_30->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_142 = new QLabel(page_2);
        label_142->setObjectName(QString::fromUtf8("label_142"));
        label_142->setGeometry(QRect(0, 100, 151, 121));
        label_142->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/logo/Barcode.png);\n"
"background:transparent;"));
        stackedWidget->addWidget(page_2);
        pushButton_37 = new QPushButton(BasicSet);
        pushButton_37->setObjectName(QString::fromUtf8("pushButton_37"));
        pushButton_37->setGeometry(QRect(500, 0, 38, 38));
        pushButton_37->setFocusPolicy(Qt::NoFocus);
        pushButton_37->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/cha.bmp);"));
        pushButton_37->setFlat(true);
        pushButton_38 = new QPushButton(BasicSet);
        pushButton_38->setObjectName(QString::fromUtf8("pushButton_38"));
        pushButton_38->setGeometry(QRect(482, 295, 51, 41));
        pushButton_38->setFocusPolicy(Qt::NoFocus);
        pushButton_38->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/67.bmp);\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        pushButton_38->setFlat(true);
        stackedWidget->raise();
        pushButton_38->raise();
        pushButton_37->raise();
#ifndef QT_NO_SHORTCUT
        label_28->setBuddy(lineEdit_BarcodeGun);
        label_24->setBuddy(lineEdit_RfidPort);
        label_26->setBuddy(lineEdit_RfidIp);
#endif // QT_NO_SHORTCUT

        retranslateUi(BasicSet);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(BasicSet);
    } // setupUi

    void retranslateUi(QDialog *BasicSet)
    {
        BasicSet->setWindowTitle(QApplication::translate("BasicSet", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("BasicSet", "Controller\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BasicSet", "CH1 IP\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("BasicSet", "CH2 IP\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
        label_9->setText(QString());
        label_8->setText(QApplication::translate("BasicSet", "CH2\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("BasicSet", "CH1\357\274\232", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("BasicSet", "\345\267\245\345\216\202\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("BasicSet", "\346\270\205\347\251\272\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        pushButton_truncateQueue->setText(QApplication::translate("BasicSet", "\346\270\205\347\251\272\351\230\237\345\210\227", 0, QApplication::UnicodeUTF8));
        label_queue->setText(QString());
        label_10->setText(QString());
        label_21->setText(QApplication::translate("BasicSet", "\346\233\262\347\272\277\346\234\215\345\212\241\345\231\250\357\274\232", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("BasicSet", "\346\225\260\346\215\256\346\234\215\345\212\241\345\231\250\357\274\232", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("BasicSet", "\346\234\215\345\212\241\345\231\250\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("BasicSet", "Andon\346\234\215\345\212\241\345\231\250\357\274\232", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("BasicSet", "\347\253\257\345\217\243\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        label_27->setText(QApplication::translate("BasicSet", "\346\235\241\347\240\201\346\235\245\346\272\220\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("BasicSet", "\346\235\241\347\240\201\346\236\252\346\263\242\347\211\271\347\216\207\357\274\232", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("BasicSet", "\346\234\211\347\272\277", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("BasicSet", "\346\227\240\347\272\277", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("BasicSet", "RFID\347\253\257\345\217\243\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("BasicSet", "RFID IP\357\274\232", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("BasicSet", "\346\235\241\347\240\201\346\236\252\346\250\241\345\274\217\357\274\232", 0, QApplication::UnicodeUTF8));
        label_142->setText(QString());
        pushButton_37->setText(QString());
        pushButton_38->setText(QApplication::translate("BasicSet", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BasicSet: public Ui_BasicSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICSET_H
