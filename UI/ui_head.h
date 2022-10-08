/********************************************************************************
** Form generated from reading UI file 'head.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEAD_H
#define UI_HEAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Head
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *Head)
    {
        if (Head->objectName().isEmpty())
            Head->setObjectName(QString::fromUtf8("Head"));
        Head->resize(652, 670);
        Head->setFocusPolicy(Qt::ClickFocus);
        Head->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 255);"));
        listWidget = new QListWidget(Head);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(23, 10, 601, 571));
        listWidget->setFocusPolicy(Qt::NoFocus);
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"border-width:0.5px;\n"
"border-style:solid;\n"
"border-color:rgb(51, 153, 255);\n"
"} \n"
"QListWidget::item{\n"
"border-right-width:0.5px;\n"
"border-bottom-width:0.5px;\n"
"border-style:solid;\n"
"border-color:rgb(51, 153, 255);\n"
"}\n"
"QScrollBar:vertical{\n"
"width:36px;\n"
"}\n"
""));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton_cancel = new QPushButton(Head);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setEnabled(true);
        pushButton_cancel->setGeometry(QRect(550, 600, 54, 54));
        pushButton_cancel->setFocusPolicy(Qt::NoFocus);
        pushButton_cancel->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/logo/cancel.bmp);"));
        pushButton_cancel->setFlat(true);

        retranslateUi(Head);

        QMetaObject::connectSlotsByName(Head);
    } // setupUi

    void retranslateUi(QDialog *Head)
    {
        Head->setWindowTitle(QApplication::translate("Head", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_cancel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Head: public Ui_Head {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEAD_H
