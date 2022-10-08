/********************************************************************************
** Form generated from reading UI file 'roleadd.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROLEADD_H
#define UI_ROLEADD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RoleAdd
{
public:
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_3;
    QLabel *label_45;
    QLineEdit *lineEdit_roleName;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_save;
    QPushButton *pushButton_close;
    QLabel *label_wrong;
    QPushButton *pushButton_delete;

    void setupUi(QDialog *RoleAdd)
    {
        if (RoleAdd->objectName().isEmpty())
            RoleAdd->setObjectName(QString::fromUtf8("RoleAdd"));
        RoleAdd->resize(396, 331);
        RoleAdd->setFocusPolicy(Qt::ClickFocus);
        RoleAdd->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 255);"));
        checkBox_1 = new QCheckBox(RoleAdd);
        checkBox_1->setObjectName(QString::fromUtf8("checkBox_1"));
        checkBox_1->setGeometry(QRect(50, 108, 141, 31));
        checkBox_1->setFocusPolicy(Qt::NoFocus);
        checkBox_1->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"   font: 14pt \"\351\273\221\344\275\223\";\n"
"   spacing: 10 \n"
"}  \n"
"\n"
"QCheckBox::indicator {\n"
"       width: 25px;\n"
"       height: 25px; \n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"} \n"
"QCheckBox::indicator:checked {\n"
"image: url(:/LCD_CS351/LCD_CS351/logo/check.png);\n"
"}\n"
""));
        checkBox_2 = new QCheckBox(RoleAdd);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(210, 108, 141, 31));
        checkBox_2->setFocusPolicy(Qt::NoFocus);
        checkBox_2->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"   font: 14pt \"\351\273\221\344\275\223\";\n"
"   spacing: 10 \n"
"}  \n"
"\n"
"QCheckBox::indicator {\n"
"       width: 25px;\n"
"       height: 25px; \n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"} \n"
"QCheckBox::indicator:checked {\n"
"image: url(:/LCD_CS351/LCD_CS351/logo/check.png);\n"
"}\n"
""));
        checkBox_4 = new QCheckBox(RoleAdd);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(210, 168, 141, 31));
        checkBox_4->setFocusPolicy(Qt::NoFocus);
        checkBox_4->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"   font: 14pt \"\351\273\221\344\275\223\";\n"
"   spacing: 10 \n"
"}  \n"
"\n"
"QCheckBox::indicator {\n"
"       width: 25px;\n"
"       height: 25px; \n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"} \n"
"QCheckBox::indicator:checked {\n"
"image: url(:/LCD_CS351/LCD_CS351/logo/check.png);\n"
"}\n"
""));
        checkBox_5 = new QCheckBox(RoleAdd);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(50, 228, 141, 31));
        checkBox_5->setFocusPolicy(Qt::NoFocus);
        checkBox_5->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"   font: 14pt \"\351\273\221\344\275\223\";\n"
"   spacing: 10 \n"
"}  \n"
"\n"
"QCheckBox::indicator {\n"
"       width: 25px;\n"
"       height: 25px; \n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"} \n"
"QCheckBox::indicator:checked {\n"
"image: url(:/LCD_CS351/LCD_CS351/logo/check.png);\n"
"}\n"
""));
        checkBox_3 = new QCheckBox(RoleAdd);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(50, 168, 141, 31));
        checkBox_3->setFocusPolicy(Qt::NoFocus);
        checkBox_3->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"   font: 14pt \"\351\273\221\344\275\223\";\n"
"   spacing: 10 \n"
"}  \n"
"\n"
"QCheckBox::indicator {\n"
"       width: 25px;\n"
"       height: 25px; \n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"} \n"
"QCheckBox::indicator:checked {\n"
"image: url(:/LCD_CS351/LCD_CS351/logo/check.png);\n"
"}\n"
""));
        label_45 = new QLabel(RoleAdd);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(58, 41, 71, 35));
        label_45->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        lineEdit_roleName = new QLineEdit(RoleAdd);
        lineEdit_roleName->setObjectName(QString::fromUtf8("lineEdit_roleName"));
        lineEdit_roleName->setGeometry(QRect(133, 41, 181, 35));
        lineEdit_roleName->setFocusPolicy(Qt::ClickFocus);
        lineEdit_roleName->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        pushButton_cancel = new QPushButton(RoleAdd);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(190, 290, 80, 31));
        pushButton_cancel->setFocusPolicy(Qt::NoFocus);
        pushButton_cancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   font: 14pt \"\351\273\221\344\275\223\";\n"
"   color: rgb(248, 248, 255);\n"
"   border-style:solid;\n"
"   background-color: rgb(255, 102, 102);\n"
"}"));
        pushButton_save = new QPushButton(RoleAdd);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(280, 290, 111, 31));
        pushButton_save->setFocusPolicy(Qt::NoFocus);
        pushButton_save->setContextMenuPolicy(Qt::NoContextMenu);
        pushButton_save->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   font: 14pt \"\351\273\221\344\275\223\";\n"
"   color: rgb(248, 248, 255);\n"
"   border-style:solid;\n"
"   background-color: rgb(51, 153, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"	Qt::ToolButtonTextUnderIcon\n"
"}"));
        pushButton_save->setFlat(true);
        pushButton_close = new QPushButton(RoleAdd);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(360, 0, 38, 38));
        pushButton_close->setFocusPolicy(Qt::NoFocus);
        pushButton_close->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/cha.bmp);"));
        pushButton_close->setFlat(true);
        label_wrong = new QLabel(RoleAdd);
        label_wrong->setObjectName(QString::fromUtf8("label_wrong"));
        label_wrong->setGeometry(QRect(59, 6, 301, 31));
        label_wrong->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(250, 0, 0);"));
        pushButton_delete = new QPushButton(RoleAdd);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(90, 290, 80, 31));
        pushButton_delete->setFocusPolicy(Qt::NoFocus);
        pushButton_delete->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   font: 14pt \"\351\273\221\344\275\223\";\n"
"   color: rgb(248, 248, 255);\n"
"   border-style:solid;\n"
"   background-color: rgb(250, 206, 16);\n"
"}"));

        retranslateUi(RoleAdd);

        QMetaObject::connectSlotsByName(RoleAdd);
    } // setupUi

    void retranslateUi(QDialog *RoleAdd)
    {
        RoleAdd->setWindowTitle(QApplication::translate("RoleAdd", "Dialog", 0, QApplication::UnicodeUTF8));
        checkBox_1->setText(QApplication::translate("RoleAdd", "\347\263\273\347\273\237\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("RoleAdd", "\347\274\226\350\276\221\347\250\213\345\272\217", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("RoleAdd", "\346\237\245\347\234\213\345\216\206\345\217\262", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("RoleAdd", "\347\224\250\346\210\267\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("RoleAdd", "\344\275\234\344\270\232\346\214\207\345\257\274", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("RoleAdd", "\350\247\222\350\211\262\357\274\232", 0, QApplication::UnicodeUTF8));
        lineEdit_roleName->setText(QString());
        pushButton_cancel->setText(QApplication::translate("RoleAdd", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        pushButton_save->setText(QApplication::translate("RoleAdd", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        pushButton_close->setText(QString());
        label_wrong->setText(QApplication::translate("RoleAdd", "\350\257\267\345\241\253\345\206\231\350\247\222\350\211\262\345\220\215\357\274\201", 0, QApplication::UnicodeUTF8));
        pushButton_delete->setText(QApplication::translate("RoleAdd", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RoleAdd: public Ui_RoleAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROLEADD_H
