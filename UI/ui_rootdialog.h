/********************************************************************************
** Form generated from reading UI file 'rootdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOTDIALOG_H
#define UI_ROOTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RootDialog
{
public:
    QLabel *label_8;
    QPushButton *pushButton_8;
    QLabel *label_11;
    QPushButton *pushButton_2;
    QPushButton *pushButton_11;
    QLabel *label_12;
    QPushButton *pushButton_5;
    QLabel *label_14;
    QPushButton *pushButton_13;
    QPushButton *pushButton;
    QLabel *label_15;
    QLabel *label_4;
    QLabel *label_wifi;
    QLabel *label_5;
    QPushButton *pushButton_10;
    QPushButton *pushButton_4;
    QLabel *label_date;
    QLabel *label_6;
    QPushButton *pushButton_9;
    QLabel *label_battery;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QLabel *label_16;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_black;
    QPushButton *pushButton_6;
    QLabel *label_user;
    QLabel *label_17;

    void setupUi(QDialog *RootDialog)
    {
        if (RootDialog->objectName().isEmpty())
            RootDialog->setObjectName(QString::fromUtf8("RootDialog"));
        RootDialog->resize(1366, 768);
        RootDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 255);"));
        label_8 = new QLabel(RootDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1046, 254, 101, 31));
        QPalette palette;
        QBrush brush(QColor(253, 253, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(93, 61, 188, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(156, 153, 162, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_8->setPalette(palette);
        label_8->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(93, 61, 188);"));
        pushButton_8 = new QPushButton(RootDialog);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(807, 311, 448, 168));
        pushButton_8->setFocusPolicy(Qt::NoFocus);
        pushButton_8->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"image: url(:/maindialog/ICON-08.png);\n"
"background-color: rgb(51,153,255);"));
        label_11 = new QLabel(RootDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(817, 438, 101, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush3(QColor(0, 0, 0, 0));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_11->setPalette(palette1);
        label_11->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";\n"
"background:transparent;"));
        pushButton_2 = new QPushButton(RootDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(575, 127, 448, 168));
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: solid;\n"
"image: url(:/maindialog/ICON-14.png);\n"
"background-color: rgb(212, 37, 66);\n"
"}\n"
"QPushButton::onPressed {\n"
"border-style: solid;\n"
"image: url(:/maindialog/ICON-02.png);\n"
"background-color: rgb(212, 37, 66);\n"
"}\n"
""));
        pushButton_11 = new QPushButton(RootDialog);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(1039, 495, 216, 168));
        pushButton_11->setFocusPolicy(Qt::NoFocus);
        pushButton_11->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"image: url(:/maindialog/ICON-12.png);\n"
"background-color: rgb(26, 86, 136);\n"
""));
        label_12 = new QLabel(RootDialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(121, 622, 101, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush4(QColor(212, 37, 66, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        label_12->setPalette(palette2);
        label_12->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(212, 37, 66);\n"
""));
        pushButton_5 = new QPushButton(RootDialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(575, 495, 448, 168));
        pushButton_5->setFocusPolicy(Qt::NoFocus);
        pushButton_5->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"image: url(:/maindialog/ICON-11.png);\n"
"background-color: rgb(93, 61, 188);"));
        label_14 = new QLabel(RootDialog);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(585, 622, 101, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_14->setPalette(palette3);
        label_14->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";\n"
"background:transparent;"));
        pushButton_13 = new QPushButton(RootDialog);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(1039, 127, 216, 168));
        pushButton_13->setFocusPolicy(Qt::NoFocus);
        pushButton_13->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"image: url(:/maindialog/ICON-05.png);\n"
"background-color: rgb(93, 61, 188);"));
        pushButton = new QPushButton(RootDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(111, 127, 448, 168));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: solid;\n"
"image: url(:/maindialog/ICON-01.png);\n"
"background-color: rgb(241, 156, 31);\n"
"}\n"
"QPushButton::pressed {\n"
"border-style: solid;\n"
"image: url(:/maindialog/ICON-01.png);\n"
"background-color: rgb(241, 156, 31);\n"
"}"));
        label_15 = new QLabel(RootDialog);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(1046, 622, 101, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_15->setPalette(palette4);
        label_15->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";\n"
"background:transparent;"));
        label_4 = new QLabel(RootDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(121, 254, 101, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_4->setPalette(palette5);
        label_4->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";\n"
"background:transparent;"));
        label_wifi = new QLabel(RootDialog);
        label_wifi->setObjectName(QString::fromUtf8("label_wifi"));
        label_wifi->setGeometry(QRect(1105, 744, 23, 18));
        label_wifi->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/logo/wifi.png);"));
        label_5 = new QLabel(RootDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(585, 254, 101, 31));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_5->setPalette(palette6);
        label_5->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";\n"
"background:transparent;\n"
""));
        pushButton_10 = new QPushButton(RootDialog);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(1285, 300, 71, 168));
        pushButton_10->setFocusPolicy(Qt::NoFocus);
        pushButton_10->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"image: url(:/maindialog/ICON-10.png);\n"
"background-color: rgb(241, 156, 31);"));
        pushButton_4 = new QPushButton(RootDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(111, 311, 216, 168));
        pushButton_4->setFocusPolicy(Qt::NoFocus);
        pushButton_4->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"image: url(:/maindialog/ICON-04.png);\n"
"background-color: rgb(26, 86, 136);"));
        label_date = new QLabel(RootDialog);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setGeometry(QRect(1184, 740, 171, 21));
        label_date->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color: rgb(51, 153, 255);\n"
"font: 12pt \"\351\273\221\344\275\223\";"));
        label_6 = new QLabel(RootDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(353, 438, 101, 31));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush5(QColor(8, 129, 60, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        label_6->setPalette(palette7);
        label_6->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(8, 129, 60);\n"
""));
        pushButton_9 = new QPushButton(RootDialog);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(111, 495, 448, 168));
        pushButton_9->setFocusPolicy(Qt::NoFocus);
        pushButton_9->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"image: url(:/maindialog/ICON-09.png);\n"
"background-color: rgb(212, 37, 66);"));
        label_battery = new QLabel(RootDialog);
        label_battery->setObjectName(QString::fromUtf8("label_battery"));
        label_battery->setGeometry(QRect(1143, 744, 28, 14));
        label_battery->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-image: url(:/LCD_CS351/LCD_CS351/logo/battery.png);"));
        label_7 = new QLabel(RootDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(121, 438, 101, 31));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_7->setPalette(palette8);
        label_7->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";\n"
"background:transparent;"));
        pushButton_3 = new QPushButton(RootDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(343, 311, 448, 168));
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        pushButton_3->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"image: url(:/maindialog/ICON-PDM.png);\n"
"background-color: rgb(8, 129, 60);\n"
""));
        label_16 = new QLabel(RootDialog);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(121, 622, 101, 31));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_16->setPalette(palette9);
        label_16->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";\n"
"background:transparent;"));
        label_9 = new QLabel(RootDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(353, 438, 101, 31));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_9->setPalette(palette10);
        label_9->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";\n"
"background:transparent;"));
        label_10 = new QLabel(RootDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(1046, 254, 101, 31));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_10->setPalette(palette11);
        label_10->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";\n"
"background:transparent;"));
        label_black = new QLabel(RootDialog);
        label_black->setObjectName(QString::fromUtf8("label_black"));
        label_black->setGeometry(QRect(1350, 430, 58, 15));
        label_black->setMouseTracking(false);
        label_black->setAcceptDrops(false);
        label_black->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0);"));
        pushButton_6 = new QPushButton(RootDialog);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(1173, 34, 61, 61));
        pushButton_6->setFocusPolicy(Qt::NoFocus);
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/logo/Head.png);\n"
"border-style: solid;"));
        pushButton_6->setFlat(true);
        label_user = new QLabel(RootDialog);
        label_user->setObjectName(QString::fromUtf8("label_user"));
        label_user->setGeometry(QRect(1241, 50, 121, 31));
        label_user->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_17 = new QLabel(RootDialog);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(1260, 370, 101, 31));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        label_17->setPalette(palette12);
        label_17->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";\n"
"background:transparent;"));
        label_8->raise();
        pushButton_8->raise();
        label_11->raise();
        pushButton_2->raise();
        pushButton_11->raise();
        label_12->raise();
        pushButton_5->raise();
        label_14->raise();
        pushButton_13->raise();
        pushButton->raise();
        label_15->raise();
        label_4->raise();
        label_wifi->raise();
        label_5->raise();
        pushButton_10->raise();
        pushButton_4->raise();
        label_date->raise();
        label_6->raise();
        pushButton_9->raise();
        label_battery->raise();
        label_7->raise();
        pushButton_3->raise();
        label_16->raise();
        label_9->raise();
        label_10->raise();
        pushButton_6->raise();
        label_user->raise();
        label_black->raise();
        label_17->raise();

        retranslateUi(RootDialog);

        QMetaObject::connectSlotsByName(RootDialog);
    } // setupUi

    void retranslateUi(QDialog *RootDialog)
    {
        RootDialog->setWindowTitle(QApplication::translate("RootDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("RootDialog", "\345\216\206\345\217\262", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QString());
        label_11->setText(QApplication::translate("RootDialog", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QString());
        pushButton_11->setText(QString());
        label_12->setText(QApplication::translate("RootDialog", "\347\224\250\346\210\267", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QString());
        label_14->setText(QApplication::translate("RootDialog", "\346\263\250\351\224\200", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QString());
        pushButton->setText(QString());
        label_15->setText(QApplication::translate("RootDialog", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RootDialog", "\344\270\273\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        label_wifi->setText(QString());
        label_5->setText(QApplication::translate("RootDialog", "\345\267\245\350\211\272", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QString());
        pushButton_4->setText(QString());
        label_date->setText(QApplication::translate("RootDialog", "2016-8-4  17:19:30", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("RootDialog", "\344\275\234\344\270\232\346\214\207\345\257\274", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QString());
        label_battery->setText(QString());
        label_7->setText(QApplication::translate("RootDialog", "\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QString());
        label_16->setText(QApplication::translate("RootDialog", "\347\224\250\346\210\267", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("RootDialog", "\344\275\234\344\270\232\346\214\207\345\257\274", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("RootDialog", "\345\216\206\345\217\262", 0, QApplication::UnicodeUTF8));
        label_black->setText(QString());
        pushButton_6->setText(QString());
        label_user->setText(QString());
        label_17->setText(QApplication::translate("RootDialog", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RootDialog: public Ui_RootDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOTDIALOG_H
