/********************************************************************************
** Form generated from reading UI file 'basestation.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASESTATION_H
#define UI_BASESTATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BaseStation
{
public:
    QLabel *label_26;
    QLineEdit *lineEdit_anchor_no;
    QLabel *label;
    QLineEdit *lineEdit_y;
    QLineEdit *lineEdit_x;
    QLabel *label_y;
    QLabel *label_x;
    QLineEdit *lineEdit_z;
    QLabel *label_z;
    QLabel *label_27;
    QLineEdit *lineEdit_checked;
    QPushButton *pushButton_save;
    QLabel *label_warning;
    QPushButton *pushButton_close;

    void setupUi(QDialog *BaseStation)
    {
        if (BaseStation->objectName().isEmpty())
            BaseStation->setObjectName(QString::fromUtf8("BaseStation"));
        BaseStation->resize(400, 457);
        BaseStation->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 255);"));
        label_26 = new QLabel(BaseStation);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(31, 69, 111, 35));
        label_26->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_anchor_no = new QLineEdit(BaseStation);
        lineEdit_anchor_no->setObjectName(QString::fromUtf8("lineEdit_anchor_no"));
        lineEdit_anchor_no->setGeometry(QRect(190, 69, 141, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lineEdit_anchor_no->setFont(font);
        lineEdit_anchor_no->setFocusPolicy(Qt::ClickFocus);
        lineEdit_anchor_no->setAutoFillBackground(false);
        lineEdit_anchor_no->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        label = new QLabel(BaseStation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(165, 10, 71, 31));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);
        lineEdit_y = new QLineEdit(BaseStation);
        lineEdit_y->setObjectName(QString::fromUtf8("lineEdit_y"));
        lineEdit_y->setGeometry(QRect(190, 210, 141, 35));
        lineEdit_y->setFont(font);
        lineEdit_y->setFocusPolicy(Qt::ClickFocus);
        lineEdit_y->setAutoFillBackground(false);
        lineEdit_y->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        lineEdit_x = new QLineEdit(BaseStation);
        lineEdit_x->setObjectName(QString::fromUtf8("lineEdit_x"));
        lineEdit_x->setGeometry(QRect(190, 140, 141, 35));
        lineEdit_x->setFont(font);
        lineEdit_x->setFocusPolicy(Qt::ClickFocus);
        lineEdit_x->setAutoFillBackground(false);
        lineEdit_x->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        label_y = new QLabel(BaseStation);
        label_y->setObjectName(QString::fromUtf8("label_y"));
        label_y->setGeometry(QRect(31, 210, 111, 35));
        label_y->setFont(font);
        label_y->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_x = new QLabel(BaseStation);
        label_x->setObjectName(QString::fromUtf8("label_x"));
        label_x->setGeometry(QRect(31, 140, 111, 35));
        label_x->setFont(font);
        label_x->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_x->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_z = new QLineEdit(BaseStation);
        lineEdit_z->setObjectName(QString::fromUtf8("lineEdit_z"));
        lineEdit_z->setGeometry(QRect(190, 280, 141, 35));
        lineEdit_z->setFont(font);
        lineEdit_z->setFocusPolicy(Qt::ClickFocus);
        lineEdit_z->setAutoFillBackground(false);
        lineEdit_z->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        label_z = new QLabel(BaseStation);
        label_z->setObjectName(QString::fromUtf8("label_z"));
        label_z->setGeometry(QRect(31, 280, 111, 35));
        label_z->setFont(font);
        label_z->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_z->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_27 = new QLabel(BaseStation);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(31, 350, 111, 35));
        label_27->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_checked = new QLineEdit(BaseStation);
        lineEdit_checked->setObjectName(QString::fromUtf8("lineEdit_checked"));
        lineEdit_checked->setGeometry(QRect(190, 350, 141, 35));
        lineEdit_checked->setFont(font);
        lineEdit_checked->setFocusPolicy(Qt::ClickFocus);
        lineEdit_checked->setAutoFillBackground(false);
        lineEdit_checked->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        pushButton_save = new QPushButton(BaseStation);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(340, 410, 51, 41));
        pushButton_save->setFocusPolicy(Qt::NoFocus);
        pushButton_save->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/67.bmp);\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        pushButton_save->setFlat(true);
        label_warning = new QLabel(BaseStation);
        label_warning->setObjectName(QString::fromUtf8("label_warning"));
        label_warning->setGeometry(QRect(50, 410, 151, 31));
        label_warning->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(250, 0, 0);"));
        pushButton_close = new QPushButton(BaseStation);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(362, 0, 38, 38));
        pushButton_close->setFocusPolicy(Qt::NoFocus);
        pushButton_close->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/cha.bmp);"));
        pushButton_close->setFlat(true);

        retranslateUi(BaseStation);

        QMetaObject::connectSlotsByName(BaseStation);
    } // setupUi

    void retranslateUi(QDialog *BaseStation)
    {
        BaseStation->setWindowTitle(QApplication::translate("BaseStation", "Dialog", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("BaseStation", "\345\237\272\347\253\231\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        lineEdit_anchor_no->setText(QString());
        label->setText(QApplication::translate("BaseStation", "\345\237\272\347\253\231", 0, QApplication::UnicodeUTF8));
        label_y->setText(QApplication::translate("BaseStation", "y\357\274\232", 0, QApplication::UnicodeUTF8));
        label_x->setText(QApplication::translate("BaseStation", "X\357\274\232", 0, QApplication::UnicodeUTF8));
        label_z->setText(QApplication::translate("BaseStation", "Z\357\274\232", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("BaseStation", "\346\240\207\345\256\232\345\237\272\347\253\231\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton_save->setText(QApplication::translate("BaseStation", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label_warning->setText(QApplication::translate("BaseStation", "\350\257\267\345\241\253\345\206\231\345\256\214\346\225\264!", 0, QApplication::UnicodeUTF8));
        pushButton_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BaseStation: public Ui_BaseStation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASESTATION_H
