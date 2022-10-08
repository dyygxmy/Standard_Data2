/********************************************************************************
** Form generated from reading UI file 'inputcode.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTCODE_H
#define UI_INPUTCODE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_InputCode
{
public:
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_cancel;
    QTextEdit *textEdit;

    void setupUi(QDialog *InputCode)
    {
        if (InputCode->objectName().isEmpty())
            InputCode->setObjectName(QString::fromUtf8("InputCode"));
        InputCode->resize(400, 189);
        InputCode->setFocusPolicy(Qt::ClickFocus);
        InputCode->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 255);"));
        label_3 = new QLabel(InputCode);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 20, 221, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_3->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(InputCode);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 140, 61, 41));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/67.bmp);\n"
"background:transparent;\n"
"font: 12pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        pushButton_cancel = new QPushButton(InputCode);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(360, 0, 41, 41));
        pushButton_cancel->setFocusPolicy(Qt::NoFocus);
        pushButton_cancel->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/cha.bmp);\n"
"background:transparent;"));
        pushButton_cancel->setAutoDefault(false);
        pushButton_cancel->setFlat(true);
        textEdit = new QTextEdit(InputCode);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 60, 331, 70));
        textEdit->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); "));

        retranslateUi(InputCode);

        QMetaObject::connectSlotsByName(InputCode);
    } // setupUi

    void retranslateUi(QDialog *InputCode)
    {
        InputCode->setWindowTitle(QApplication::translate("InputCode", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("InputCode", "\350\257\267\350\276\223\345\205\245\346\235\241\347\240\201", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("InputCode", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        pushButton_cancel->setText(QString());
        textEdit->setHtml(QApplication::translate("InputCode", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\351\273\221\344\275\223'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InputCode: public Ui_InputCode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTCODE_H
