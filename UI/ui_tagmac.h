/********************************************************************************
** Form generated from reading UI file 'tagmac.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAGMAC_H
#define UI_TAGMAC_H

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

class Ui_TagMac
{
public:
    QPushButton *pushButton_save;
    QLineEdit *lineEdit_tagMac;
    QPushButton *pushButton_close;
    QLabel *label_warning;

    void setupUi(QDialog *TagMac)
    {
        if (TagMac->objectName().isEmpty())
            TagMac->setObjectName(QString::fromUtf8("TagMac"));
        TagMac->resize(462, 107);
        TagMac->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 255);"));
        pushButton_save = new QPushButton(TagMac);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(320, 23, 51, 51));
        pushButton_save->setFocusPolicy(Qt::NoFocus);
        pushButton_save->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/67.bmp);\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        pushButton_save->setFlat(true);
        lineEdit_tagMac = new QLineEdit(TagMac);
        lineEdit_tagMac->setObjectName(QString::fromUtf8("lineEdit_tagMac"));
        lineEdit_tagMac->setGeometry(QRect(30, 31, 261, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lineEdit_tagMac->setFont(font);
        lineEdit_tagMac->setFocusPolicy(Qt::ClickFocus);
        lineEdit_tagMac->setAutoFillBackground(false);
        lineEdit_tagMac->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        pushButton_close = new QPushButton(TagMac);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(390, 23, 51, 51));
        pushButton_close->setFocusPolicy(Qt::NoFocus);
        pushButton_close->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/cha.bmp);"));
        pushButton_close->setFlat(true);
        label_warning = new QLabel(TagMac);
        label_warning->setObjectName(QString::fromUtf8("label_warning"));
        label_warning->setGeometry(QRect(40, 70, 151, 31));
        label_warning->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(250, 0, 0);"));

        retranslateUi(TagMac);

        QMetaObject::connectSlotsByName(TagMac);
    } // setupUi

    void retranslateUi(QDialog *TagMac)
    {
        TagMac->setWindowTitle(QApplication::translate("TagMac", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_save->setText(QApplication::translate("TagMac", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        lineEdit_tagMac->setText(QString());
        pushButton_close->setText(QString());
        label_warning->setText(QApplication::translate("TagMac", "\350\257\267\345\241\253\345\206\231\345\256\214\346\225\264!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TagMac: public Ui_TagMac {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAGMAC_H
