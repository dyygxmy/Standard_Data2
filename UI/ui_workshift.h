/********************************************************************************
** Form generated from reading UI file 'workshift.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKSHIFT_H
#define UI_WORKSHIFT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_WorkShift
{
public:
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_save;
    QPushButton *pushButton_delete;
    QLineEdit *lineEdit_workShiftName;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QLineEdit *lineEdit_remark;
    QLabel *label_48;
    QLabel *label;
    QLabel *label_wrong;
    QPushButton *pushButton_StartMinuteSubstract;
    QPushButton *pushButton_StartHourSubstract;
    QPushButton *pushButton_StartMinuteAdd;
    QPushButton *pushButton_StartHourAdd;
    QPushButton *pushButton_EndMinuteSubstract;
    QPushButton *pushButton_EndHourSubstract;
    QPushButton *pushButton_EndMinuteAdd;
    QPushButton *pushButton_EndHourAdd;
    QLabel *label_361;
    QLabel *label_362;
    QTimeEdit *timeEdit_StartHour;
    QTimeEdit *timeEdit_EndHour;
    QTimeEdit *timeEdit_StartMinute;
    QTimeEdit *timeEdit_EndMinute;
    QPushButton *pushButton_close;

    void setupUi(QDialog *WorkShift)
    {
        if (WorkShift->objectName().isEmpty())
            WorkShift->setObjectName(QString::fromUtf8("WorkShift"));
        WorkShift->resize(474, 382);
        WorkShift->setFocusPolicy(Qt::ClickFocus);
        WorkShift->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 255);"));
        pushButton_cancel = new QPushButton(WorkShift);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(251, 330, 80, 31));
        pushButton_cancel->setFocusPolicy(Qt::NoFocus);
        pushButton_cancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   font: 14pt \"\351\273\221\344\275\223\";\n"
"   color: rgb(248, 248, 255);\n"
"   border-style:solid;\n"
"   background-color: rgb(255, 102, 102);\n"
"}"));
        pushButton_save = new QPushButton(WorkShift);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(351, 330, 111, 31));
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
        pushButton_delete = new QPushButton(WorkShift);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(151, 330, 80, 31));
        pushButton_delete->setFocusPolicy(Qt::NoFocus);
        pushButton_delete->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   font: 14pt \"\351\273\221\344\275\223\";\n"
"   color: rgb(248, 248, 255);\n"
"   border-style:solid;\n"
"   background-color: rgb(250, 206, 16);\n"
"}"));
        lineEdit_workShiftName = new QLineEdit(WorkShift);
        lineEdit_workShiftName->setObjectName(QString::fromUtf8("lineEdit_workShiftName"));
        lineEdit_workShiftName->setGeometry(QRect(125, 65, 211, 35));
        lineEdit_workShiftName->setFocusPolicy(Qt::ClickFocus);
        lineEdit_workShiftName->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        label_45 = new QLabel(WorkShift);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(30, 65, 91, 35));
        label_45->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_46 = new QLabel(WorkShift);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(30, 160, 91, 35));
        label_46->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_47 = new QLabel(WorkShift);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(238, 160, 91, 35));
        label_47->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        lineEdit_remark = new QLineEdit(WorkShift);
        lineEdit_remark->setObjectName(QString::fromUtf8("lineEdit_remark"));
        lineEdit_remark->setGeometry(QRect(125, 260, 211, 35));
        lineEdit_remark->setFocusPolicy(Qt::ClickFocus);
        lineEdit_remark->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        label_48 = new QLabel(WorkShift);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(31, 260, 91, 35));
        label_48->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label = new QLabel(WorkShift);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 0, 91, 41));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);
        label_wrong = new QLabel(WorkShift);
        label_wrong->setObjectName(QString::fromUtf8("label_wrong"));
        label_wrong->setGeometry(QRect(27, 33, 301, 31));
        label_wrong->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(250, 0, 0);"));
        pushButton_StartMinuteSubstract = new QPushButton(WorkShift);
        pushButton_StartMinuteSubstract->setObjectName(QString::fromUtf8("pushButton_StartMinuteSubstract"));
        pushButton_StartMinuteSubstract->setGeometry(QRect(186, 198, 41, 31));
        pushButton_StartMinuteSubstract->setFocusPolicy(Qt::TabFocus);
        pushButton_StartMinuteSubstract->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/67.bmp);\n"
"background:transparent;\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        pushButton_StartMinuteSubstract->setFlat(true);
        pushButton_StartHourSubstract = new QPushButton(WorkShift);
        pushButton_StartHourSubstract->setObjectName(QString::fromUtf8("pushButton_StartHourSubstract"));
        pushButton_StartHourSubstract->setGeometry(QRect(127, 198, 41, 31));
        pushButton_StartHourSubstract->setFocusPolicy(Qt::TabFocus);
        pushButton_StartHourSubstract->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/67.bmp);\n"
"background:transparent;\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        pushButton_StartHourSubstract->setFlat(true);
        pushButton_StartMinuteAdd = new QPushButton(WorkShift);
        pushButton_StartMinuteAdd->setObjectName(QString::fromUtf8("pushButton_StartMinuteAdd"));
        pushButton_StartMinuteAdd->setGeometry(QRect(186, 126, 41, 31));
        pushButton_StartMinuteAdd->setFocusPolicy(Qt::TabFocus);
        pushButton_StartMinuteAdd->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/67.bmp);\n"
"background:transparent;\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        pushButton_StartMinuteAdd->setFlat(true);
        pushButton_StartHourAdd = new QPushButton(WorkShift);
        pushButton_StartHourAdd->setObjectName(QString::fromUtf8("pushButton_StartHourAdd"));
        pushButton_StartHourAdd->setGeometry(QRect(127, 126, 41, 31));
        pushButton_StartHourAdd->setFocusPolicy(Qt::TabFocus);
        pushButton_StartHourAdd->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/67.bmp);\n"
"background:transparent;\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        pushButton_StartHourAdd->setFlat(true);
        pushButton_EndMinuteSubstract = new QPushButton(WorkShift);
        pushButton_EndMinuteSubstract->setObjectName(QString::fromUtf8("pushButton_EndMinuteSubstract"));
        pushButton_EndMinuteSubstract->setGeometry(QRect(392, 198, 41, 31));
        pushButton_EndMinuteSubstract->setFocusPolicy(Qt::TabFocus);
        pushButton_EndMinuteSubstract->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/67.bmp);\n"
"background:transparent;\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        pushButton_EndMinuteSubstract->setFlat(true);
        pushButton_EndHourSubstract = new QPushButton(WorkShift);
        pushButton_EndHourSubstract->setObjectName(QString::fromUtf8("pushButton_EndHourSubstract"));
        pushButton_EndHourSubstract->setGeometry(QRect(335, 198, 41, 31));
        pushButton_EndHourSubstract->setFocusPolicy(Qt::TabFocus);
        pushButton_EndHourSubstract->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/67.bmp);\n"
"background:transparent;\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        pushButton_EndHourSubstract->setFlat(true);
        pushButton_EndMinuteAdd = new QPushButton(WorkShift);
        pushButton_EndMinuteAdd->setObjectName(QString::fromUtf8("pushButton_EndMinuteAdd"));
        pushButton_EndMinuteAdd->setGeometry(QRect(392, 126, 41, 31));
        pushButton_EndMinuteAdd->setFocusPolicy(Qt::TabFocus);
        pushButton_EndMinuteAdd->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/67.bmp);\n"
"background:transparent;\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        pushButton_EndMinuteAdd->setFlat(true);
        pushButton_EndHourAdd = new QPushButton(WorkShift);
        pushButton_EndHourAdd->setObjectName(QString::fromUtf8("pushButton_EndHourAdd"));
        pushButton_EndHourAdd->setGeometry(QRect(335, 126, 41, 31));
        pushButton_EndHourAdd->setFocusPolicy(Qt::TabFocus);
        pushButton_EndHourAdd->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/67.bmp);\n"
"background:transparent;\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        pushButton_EndHourAdd->setFlat(true);
        label_361 = new QLabel(WorkShift);
        label_361->setObjectName(QString::fromUtf8("label_361"));
        label_361->setGeometry(QRect(168, 167, 13, 21));
        label_361->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_361->setAlignment(Qt::AlignCenter);
        label_362 = new QLabel(WorkShift);
        label_362->setObjectName(QString::fromUtf8("label_362"));
        label_362->setGeometry(QRect(376, 167, 13, 21));
        label_362->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_362->setAlignment(Qt::AlignCenter);
        timeEdit_StartHour = new QTimeEdit(WorkShift);
        timeEdit_StartHour->setObjectName(QString::fromUtf8("timeEdit_StartHour"));
        timeEdit_StartHour->setGeometry(QRect(127, 157, 41, 41));
        timeEdit_StartHour->setFocusPolicy(Qt::NoFocus);
        timeEdit_StartHour->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); "));
        timeEdit_StartHour->setAlignment(Qt::AlignCenter);
        timeEdit_StartHour->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_StartHour->setMinimumTime(QTime(0, 0, 0));
        timeEdit_StartHour->setTime(QTime(8, 0, 0));
        timeEdit_EndHour = new QTimeEdit(WorkShift);
        timeEdit_EndHour->setObjectName(QString::fromUtf8("timeEdit_EndHour"));
        timeEdit_EndHour->setGeometry(QRect(335, 157, 41, 41));
        timeEdit_EndHour->setFocusPolicy(Qt::NoFocus);
        timeEdit_EndHour->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); "));
        timeEdit_EndHour->setAlignment(Qt::AlignCenter);
        timeEdit_EndHour->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_EndHour->setTime(QTime(17, 0, 0));
        timeEdit_StartMinute = new QTimeEdit(WorkShift);
        timeEdit_StartMinute->setObjectName(QString::fromUtf8("timeEdit_StartMinute"));
        timeEdit_StartMinute->setGeometry(QRect(186, 157, 41, 41));
        timeEdit_StartMinute->setFocusPolicy(Qt::NoFocus);
        timeEdit_StartMinute->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); "));
        timeEdit_StartMinute->setAlignment(Qt::AlignCenter);
        timeEdit_StartMinute->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_EndMinute = new QTimeEdit(WorkShift);
        timeEdit_EndMinute->setObjectName(QString::fromUtf8("timeEdit_EndMinute"));
        timeEdit_EndMinute->setGeometry(QRect(392, 157, 41, 41));
        timeEdit_EndMinute->setFocusPolicy(Qt::NoFocus);
        timeEdit_EndMinute->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); "));
        timeEdit_EndMinute->setAlignment(Qt::AlignCenter);
        timeEdit_EndMinute->setButtonSymbols(QAbstractSpinBox::NoButtons);
        pushButton_close = new QPushButton(WorkShift);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(436, 0, 38, 38));
        pushButton_close->setFocusPolicy(Qt::NoFocus);
        pushButton_close->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/cha.bmp);"));
        pushButton_close->setFlat(true);

        retranslateUi(WorkShift);

        QMetaObject::connectSlotsByName(WorkShift);
    } // setupUi

    void retranslateUi(QDialog *WorkShift)
    {
        WorkShift->setWindowTitle(QApplication::translate("WorkShift", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_cancel->setText(QApplication::translate("WorkShift", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        pushButton_save->setText(QApplication::translate("WorkShift", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        pushButton_delete->setText(QApplication::translate("WorkShift", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        lineEdit_workShiftName->setText(QString());
        label_45->setText(QApplication::translate("WorkShift", "\347\217\255\346\254\241\357\274\232", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("WorkShift", "\344\270\212\345\267\245\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("WorkShift", "\344\270\213\345\267\245\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        lineEdit_remark->setText(QString());
        label_48->setText(QApplication::translate("WorkShift", "\350\213\261\346\226\207\357\274\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WorkShift", "\345\242\236\345\212\240\347\217\255\346\254\241", 0, QApplication::UnicodeUTF8));
        label_wrong->setText(QApplication::translate("WorkShift", "\350\257\267\345\241\253\345\206\231\347\217\255\346\254\241\345\220\215\357\274\201", 0, QApplication::UnicodeUTF8));
        pushButton_StartMinuteSubstract->setText(QApplication::translate("WorkShift", "\357\274\215", 0, QApplication::UnicodeUTF8));
        pushButton_StartHourSubstract->setText(QApplication::translate("WorkShift", "\357\274\215", 0, QApplication::UnicodeUTF8));
        pushButton_StartMinuteAdd->setText(QApplication::translate("WorkShift", "+", 0, QApplication::UnicodeUTF8));
        pushButton_StartHourAdd->setText(QApplication::translate("WorkShift", "+", 0, QApplication::UnicodeUTF8));
        pushButton_EndMinuteSubstract->setText(QApplication::translate("WorkShift", "\357\274\215", 0, QApplication::UnicodeUTF8));
        pushButton_EndHourSubstract->setText(QApplication::translate("WorkShift", "\357\274\215", 0, QApplication::UnicodeUTF8));
        pushButton_EndMinuteAdd->setText(QApplication::translate("WorkShift", "+", 0, QApplication::UnicodeUTF8));
        pushButton_EndHourAdd->setText(QApplication::translate("WorkShift", "+", 0, QApplication::UnicodeUTF8));
        label_361->setText(QApplication::translate("WorkShift", " :", 0, QApplication::UnicodeUTF8));
        label_362->setText(QApplication::translate("WorkShift", " :", 0, QApplication::UnicodeUTF8));
        timeEdit_StartHour->setDisplayFormat(QApplication::translate("WorkShift", "hh", 0, QApplication::UnicodeUTF8));
        timeEdit_EndHour->setDisplayFormat(QApplication::translate("WorkShift", "hh", 0, QApplication::UnicodeUTF8));
        timeEdit_StartMinute->setDisplayFormat(QApplication::translate("WorkShift", "mm", 0, QApplication::UnicodeUTF8));
        timeEdit_EndMinute->setDisplayFormat(QApplication::translate("WorkShift", "mm", 0, QApplication::UnicodeUTF8));
        pushButton_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WorkShift: public Ui_WorkShift {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKSHIFT_H
