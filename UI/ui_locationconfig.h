/********************************************************************************
** Form generated from reading UI file 'locationconfig.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCATIONCONFIG_H
#define UI_LOCATIONCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LocationConfig
{
public:
    QLineEdit *lineEdit_x0;
    QLabel *label_30;
    QLabel *label_28;
    QLabel *label_x0;
    QLabel *label_y0;
    QLabel *label_175;
    QLabel *label_31;
    QLabel *label_29;
    QLineEdit *lineEdit_y0;
    QLabel *label_176;
    QListWidget *listWidget_tag_mac;
    QLabel *label_x1;
    QLineEdit *lineEdit_y1;
    QLabel *label_y1_3;
    QLineEdit *lineEdit_x1;
    QLabel *label_x2_3;
    QLineEdit *lineEdit_y2;
    QLabel *label_y1_4;
    QLineEdit *lineEdit_x2;
    QLabel *label_x2_4;
    QLineEdit *lineEdit_y3;
    QLabel *label_y1_5;
    QLineEdit *lineEdit_x3;
    QLabel *label_177;
    QLineEdit *lineEdit_IP;
    QPushButton *pushButton_save;
    QPushButton *pushButton_close;
    QPushButton *pushButton_tagMac_remove;
    QPushButton *pushButton_tagMac_append;
    QLabel *label_warning;
    QPushButton *pushButton_tagMac_update;
    QLabel *label_black;

    void setupUi(QDialog *LocationConfig)
    {
        if (LocationConfig->objectName().isEmpty())
            LocationConfig->setObjectName(QString::fromUtf8("LocationConfig"));
        LocationConfig->resize(539, 678);
        LocationConfig->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 255);"));
        lineEdit_x0 = new QLineEdit(LocationConfig);
        lineEdit_x0->setObjectName(QString::fromUtf8("lineEdit_x0"));
        lineEdit_x0->setGeometry(QRect(240, 127, 61, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lineEdit_x0->setFont(font);
        lineEdit_x0->setFocusPolicy(Qt::ClickFocus);
        lineEdit_x0->setAutoFillBackground(false);
        lineEdit_x0->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        label_30 = new QLabel(LocationConfig);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(150, 340, 41, 35));
        label_30->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_28 = new QLabel(LocationConfig);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(150, 127, 41, 35));
        label_28->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_x0 = new QLabel(LocationConfig);
        label_x0->setObjectName(QString::fromUtf8("label_x0"));
        label_x0->setGeometry(QRect(201, 127, 31, 35));
        label_x0->setFont(font);
        label_x0->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_x0->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_y0 = new QLabel(LocationConfig);
        label_y0->setObjectName(QString::fromUtf8("label_y0"));
        label_y0->setGeometry(QRect(320, 127, 31, 35));
        label_y0->setFont(font);
        label_y0->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_y0->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_175 = new QLabel(LocationConfig);
        label_175->setObjectName(QString::fromUtf8("label_175"));
        label_175->setGeometry(QRect(40, 127, 91, 35));
        label_175->setFont(font);
        label_175->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_31 = new QLabel(LocationConfig);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(150, 270, 41, 35));
        label_31->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_29 = new QLabel(LocationConfig);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(150, 197, 41, 35));
        label_29->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        lineEdit_y0 = new QLineEdit(LocationConfig);
        lineEdit_y0->setObjectName(QString::fromUtf8("lineEdit_y0"));
        lineEdit_y0->setGeometry(QRect(360, 127, 61, 35));
        lineEdit_y0->setFont(font);
        lineEdit_y0->setFocusPolicy(Qt::ClickFocus);
        lineEdit_y0->setAutoFillBackground(false);
        lineEdit_y0->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        label_176 = new QLabel(LocationConfig);
        label_176->setObjectName(QString::fromUtf8("label_176"));
        label_176->setGeometry(QRect(40, 400, 81, 35));
        label_176->setFont(font);
        label_176->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        listWidget_tag_mac = new QListWidget(LocationConfig);
        listWidget_tag_mac->setObjectName(QString::fromUtf8("listWidget_tag_mac"));
        listWidget_tag_mac->setGeometry(QRect(150, 400, 281, 181));
        listWidget_tag_mac->setFocusPolicy(Qt::NoFocus);
        listWidget_tag_mac->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:0px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); "));
        listWidget_tag_mac->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_tag_mac->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_x1 = new QLabel(LocationConfig);
        label_x1->setObjectName(QString::fromUtf8("label_x1"));
        label_x1->setGeometry(QRect(201, 200, 31, 35));
        label_x1->setFont(font);
        label_x1->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_x1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y1 = new QLineEdit(LocationConfig);
        lineEdit_y1->setObjectName(QString::fromUtf8("lineEdit_y1"));
        lineEdit_y1->setGeometry(QRect(360, 200, 61, 35));
        lineEdit_y1->setFont(font);
        lineEdit_y1->setFocusPolicy(Qt::ClickFocus);
        lineEdit_y1->setAutoFillBackground(false);
        lineEdit_y1->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        label_y1_3 = new QLabel(LocationConfig);
        label_y1_3->setObjectName(QString::fromUtf8("label_y1_3"));
        label_y1_3->setGeometry(QRect(320, 200, 31, 35));
        label_y1_3->setFont(font);
        label_y1_3->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_y1_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x1 = new QLineEdit(LocationConfig);
        lineEdit_x1->setObjectName(QString::fromUtf8("lineEdit_x1"));
        lineEdit_x1->setGeometry(QRect(240, 200, 61, 35));
        lineEdit_x1->setFont(font);
        lineEdit_x1->setFocusPolicy(Qt::ClickFocus);
        lineEdit_x1->setAutoFillBackground(false);
        lineEdit_x1->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        label_x2_3 = new QLabel(LocationConfig);
        label_x2_3->setObjectName(QString::fromUtf8("label_x2_3"));
        label_x2_3->setGeometry(QRect(201, 270, 31, 35));
        label_x2_3->setFont(font);
        label_x2_3->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_x2_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y2 = new QLineEdit(LocationConfig);
        lineEdit_y2->setObjectName(QString::fromUtf8("lineEdit_y2"));
        lineEdit_y2->setGeometry(QRect(360, 270, 61, 35));
        lineEdit_y2->setFont(font);
        lineEdit_y2->setFocusPolicy(Qt::ClickFocus);
        lineEdit_y2->setAutoFillBackground(false);
        lineEdit_y2->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        label_y1_4 = new QLabel(LocationConfig);
        label_y1_4->setObjectName(QString::fromUtf8("label_y1_4"));
        label_y1_4->setGeometry(QRect(320, 270, 31, 35));
        label_y1_4->setFont(font);
        label_y1_4->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_y1_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x2 = new QLineEdit(LocationConfig);
        lineEdit_x2->setObjectName(QString::fromUtf8("lineEdit_x2"));
        lineEdit_x2->setGeometry(QRect(240, 270, 61, 35));
        lineEdit_x2->setFont(font);
        lineEdit_x2->setFocusPolicy(Qt::ClickFocus);
        lineEdit_x2->setAutoFillBackground(false);
        lineEdit_x2->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        label_x2_4 = new QLabel(LocationConfig);
        label_x2_4->setObjectName(QString::fromUtf8("label_x2_4"));
        label_x2_4->setGeometry(QRect(201, 340, 31, 35));
        label_x2_4->setFont(font);
        label_x2_4->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_x2_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_y3 = new QLineEdit(LocationConfig);
        lineEdit_y3->setObjectName(QString::fromUtf8("lineEdit_y3"));
        lineEdit_y3->setGeometry(QRect(360, 340, 61, 35));
        lineEdit_y3->setFont(font);
        lineEdit_y3->setFocusPolicy(Qt::ClickFocus);
        lineEdit_y3->setAutoFillBackground(false);
        lineEdit_y3->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        label_y1_5 = new QLabel(LocationConfig);
        label_y1_5->setObjectName(QString::fromUtf8("label_y1_5"));
        label_y1_5->setGeometry(QRect(320, 340, 31, 35));
        label_y1_5->setFont(font);
        label_y1_5->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_y1_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_x3 = new QLineEdit(LocationConfig);
        lineEdit_x3->setObjectName(QString::fromUtf8("lineEdit_x3"));
        lineEdit_x3->setGeometry(QRect(240, 340, 61, 35));
        lineEdit_x3->setFont(font);
        lineEdit_x3->setFocusPolicy(Qt::ClickFocus);
        lineEdit_x3->setAutoFillBackground(false);
        lineEdit_x3->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        label_177 = new QLabel(LocationConfig);
        label_177->setObjectName(QString::fromUtf8("label_177"));
        label_177->setGeometry(QRect(40, 50, 91, 35));
        label_177->setFont(font);
        label_177->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        lineEdit_IP = new QLineEdit(LocationConfig);
        lineEdit_IP->setObjectName(QString::fromUtf8("lineEdit_IP"));
        lineEdit_IP->setGeometry(QRect(150, 50, 201, 35));
        lineEdit_IP->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        pushButton_save = new QPushButton(LocationConfig);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(480, 630, 51, 41));
        pushButton_save->setFocusPolicy(Qt::NoFocus);
        pushButton_save->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/67.bmp);\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        pushButton_save->setFlat(true);
        pushButton_close = new QPushButton(LocationConfig);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(501, 0, 38, 38));
        pushButton_close->setFocusPolicy(Qt::NoFocus);
        pushButton_close->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/cha.bmp);"));
        pushButton_close->setFlat(true);
        pushButton_tagMac_remove = new QPushButton(LocationConfig);
        pushButton_tagMac_remove->setObjectName(QString::fromUtf8("pushButton_tagMac_remove"));
        pushButton_tagMac_remove->setGeometry(QRect(344, 587, 80, 35));
        pushButton_tagMac_remove->setFocusPolicy(Qt::NoFocus);
        pushButton_tagMac_remove->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);\n"
"border-style: solid;\n"
"background-color: rgb(51,153,255);"));
        pushButton_tagMac_remove->setFlat(true);
        pushButton_tagMac_append = new QPushButton(LocationConfig);
        pushButton_tagMac_append->setObjectName(QString::fromUtf8("pushButton_tagMac_append"));
        pushButton_tagMac_append->setGeometry(QRect(148, 587, 80, 35));
        pushButton_tagMac_append->setFocusPolicy(Qt::NoFocus);
        pushButton_tagMac_append->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);\n"
"border-style: solid;\n"
"background-color: rgb(51,153,255);"));
        pushButton_tagMac_append->setFlat(true);
        label_warning = new QLabel(LocationConfig);
        label_warning->setObjectName(QString::fromUtf8("label_warning"));
        label_warning->setGeometry(QRect(50, 630, 201, 31));
        label_warning->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(250, 0, 0);"));
        pushButton_tagMac_update = new QPushButton(LocationConfig);
        pushButton_tagMac_update->setObjectName(QString::fromUtf8("pushButton_tagMac_update"));
        pushButton_tagMac_update->setGeometry(QRect(247, 587, 80, 35));
        pushButton_tagMac_update->setFocusPolicy(Qt::NoFocus);
        pushButton_tagMac_update->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);\n"
"border-style: solid;\n"
"background-color: rgb(51,153,255);"));
        pushButton_tagMac_update->setFlat(true);
        label_black = new QLabel(LocationConfig);
        label_black->setObjectName(QString::fromUtf8("label_black"));
        label_black->setGeometry(QRect(517, 170, 41, 20));
        label_black->setMouseTracking(false);
        label_black->setAcceptDrops(false);
        label_black->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0);"));

        retranslateUi(LocationConfig);

        QMetaObject::connectSlotsByName(LocationConfig);
    } // setupUi

    void retranslateUi(QDialog *LocationConfig)
    {
        LocationConfig->setWindowTitle(QApplication::translate("LocationConfig", "Dialog", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("LocationConfig", "D:", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("LocationConfig", "A:", 0, QApplication::UnicodeUTF8));
        label_x0->setText(QApplication::translate("LocationConfig", "X\357\274\232", 0, QApplication::UnicodeUTF8));
        label_y0->setText(QApplication::translate("LocationConfig", "y\357\274\232", 0, QApplication::UnicodeUTF8));
        label_175->setText(QApplication::translate("LocationConfig", "\347\233\221\346\216\247\345\214\272\345\237\237\357\274\232", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("LocationConfig", "C:", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("LocationConfig", "B:", 0, QApplication::UnicodeUTF8));
        label_176->setText(QApplication::translate("LocationConfig", "\346\240\207\347\255\276\357\274\232", 0, QApplication::UnicodeUTF8));
        label_x1->setText(QApplication::translate("LocationConfig", "X\357\274\232", 0, QApplication::UnicodeUTF8));
        label_y1_3->setText(QApplication::translate("LocationConfig", "y\357\274\232", 0, QApplication::UnicodeUTF8));
        label_x2_3->setText(QApplication::translate("LocationConfig", "X\357\274\232", 0, QApplication::UnicodeUTF8));
        label_y1_4->setText(QApplication::translate("LocationConfig", "y\357\274\232", 0, QApplication::UnicodeUTF8));
        label_x2_4->setText(QApplication::translate("LocationConfig", "X\357\274\232", 0, QApplication::UnicodeUTF8));
        label_y1_5->setText(QApplication::translate("LocationConfig", "y\357\274\232", 0, QApplication::UnicodeUTF8));
        label_177->setText(QApplication::translate("LocationConfig", "Data IP\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton_save->setText(QApplication::translate("LocationConfig", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        pushButton_close->setText(QString());
        pushButton_tagMac_remove->setText(QApplication::translate("LocationConfig", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        pushButton_tagMac_append->setText(QApplication::translate("LocationConfig", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
        label_warning->setText(QApplication::translate("LocationConfig", "\350\257\267\345\241\253\345\206\231\345\256\214\346\225\264!", 0, QApplication::UnicodeUTF8));
        pushButton_tagMac_update->setText(QApplication::translate("LocationConfig", "\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        label_black->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LocationConfig: public Ui_LocationConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCATIONCONFIG_H
