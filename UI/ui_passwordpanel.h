/********************************************************************************
** Form generated from reading UI file 'passwordpanel.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDPANEL_H
#define UI_PASSWORDPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PasswordPanel
{
public:
    QPushButton *pushButton_error;
    QPushButton *pushButton_password;
    QPushButton *pushButton_13;
    QPushButton *pushButton;
    QPushButton *pushButton_37;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_1;
    QPushButton *pushButton_0;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *PasswordPanel)
    {
        if (PasswordPanel->objectName().isEmpty())
            PasswordPanel->setObjectName(QString::fromUtf8("PasswordPanel"));
        PasswordPanel->resize(600, 600);
        PasswordPanel->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 255);"));
        pushButton_error = new QPushButton(PasswordPanel);
        pushButton_error->setObjectName(QString::fromUtf8("pushButton_error"));
        pushButton_error->setEnabled(false);
        pushButton_error->setGeometry(QRect(236, 263, 127, 24));
        pushButton_error->setFlat(true);
        pushButton_password = new QPushButton(PasswordPanel);
        pushButton_password->setObjectName(QString::fromUtf8("pushButton_password"));
        pushButton_password->setEnabled(false);
        pushButton_password->setGeometry(QRect(245, 224, 109, 19));
        pushButton_password->setFlat(true);
        pushButton_13 = new QPushButton(PasswordPanel);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setEnabled(false);
        pushButton_13->setGeometry(QRect(235, 50, 129, 145));
        pushButton_13->setFocusPolicy(Qt::NoFocus);
        pushButton_13->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"background-color: rgb(51,153,255);"));
        pushButton_13->setFlat(true);
        pushButton = new QPushButton(PasswordPanel);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(166, 309, 268, 234));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/re/num.png);"));
        pushButton->setFlat(true);
        pushButton_37 = new QPushButton(PasswordPanel);
        pushButton_37->setObjectName(QString::fromUtf8("pushButton_37"));
        pushButton_37->setGeometry(QRect(563, 0, 38, 38));
        pushButton_37->setFocusPolicy(Qt::NoFocus);
        pushButton_37->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/cha.bmp);"));
        pushButton_37->setFlat(true);
        pushButton_8 = new QPushButton(PasswordPanel);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setEnabled(true);
        pushButton_8->setGeometry(QRect(263, 429, 75, 46));
        pushButton_8->setFocusPolicy(Qt::NoFocus);
        pushButton_8->setStyleSheet(QString::fromUtf8("background : transparent;"));
        pushButton_8->setFlat(true);
        pushButton_9 = new QPushButton(PasswordPanel);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setEnabled(true);
        pushButton_9->setGeometry(QRect(343, 429, 75, 46));
        pushButton_9->setFocusPolicy(Qt::NoFocus);
        pushButton_9->setStyleSheet(QString::fromUtf8("background : transparent;"));
        pushButton_9->setFlat(true);
        pushButton_2 = new QPushButton(PasswordPanel);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(263, 327, 75, 46));
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_2->setStyleSheet(QString::fromUtf8("background : transparent;"));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(PasswordPanel);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(343, 327, 75, 46));
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        pushButton_3->setStyleSheet(QString::fromUtf8("background : transparent;"));
        pushButton_3->setFlat(true);
        pushButton_6 = new QPushButton(PasswordPanel);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setEnabled(true);
        pushButton_6->setGeometry(QRect(343, 378, 75, 46));
        pushButton_6->setFocusPolicy(Qt::NoFocus);
        pushButton_6->setStyleSheet(QString::fromUtf8("background : transparent;"));
        pushButton_6->setFlat(true);
        pushButton_delete = new QPushButton(PasswordPanel);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setEnabled(true);
        pushButton_delete->setGeometry(QRect(343, 480, 75, 46));
        pushButton_delete->setFocusPolicy(Qt::NoFocus);
        pushButton_delete->setStyleSheet(QString::fromUtf8("background : transparent;"));
        pushButton_delete->setFlat(true);
        pushButton_5 = new QPushButton(PasswordPanel);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setEnabled(true);
        pushButton_5->setGeometry(QRect(263, 378, 75, 46));
        pushButton_5->setFocusPolicy(Qt::NoFocus);
        pushButton_5->setStyleSheet(QString::fromUtf8("background : transparent;"));
        pushButton_5->setFlat(true);
        pushButton_4 = new QPushButton(PasswordPanel);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(true);
        pushButton_4->setGeometry(QRect(183, 378, 75, 46));
        pushButton_4->setFocusPolicy(Qt::NoFocus);
        pushButton_4->setStyleSheet(QString::fromUtf8("background : transparent;"));
        pushButton_4->setFlat(true);
        pushButton_7 = new QPushButton(PasswordPanel);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setEnabled(true);
        pushButton_7->setGeometry(QRect(183, 429, 75, 46));
        pushButton_7->setFocusPolicy(Qt::NoFocus);
        pushButton_7->setStyleSheet(QString::fromUtf8("background : transparent;"));
        pushButton_7->setFlat(true);
        pushButton_1 = new QPushButton(PasswordPanel);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setEnabled(true);
        pushButton_1->setGeometry(QRect(183, 327, 75, 46));
        pushButton_1->setFocusPolicy(Qt::NoFocus);
        pushButton_1->setStyleSheet(QString::fromUtf8("background : transparent;"));
        pushButton_1->setFlat(true);
        pushButton_0 = new QPushButton(PasswordPanel);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setEnabled(true);
        pushButton_0->setGeometry(QRect(263, 480, 75, 46));
        pushButton_0->setFocusPolicy(Qt::NoFocus);
        pushButton_0->setStyleSheet(QString::fromUtf8("background : transparent;"));
        pushButton_0->setFlat(true);
        label = new QLabel(PasswordPanel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(274, 170, 51, 16));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);\n"
"background:transparent;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(PasswordPanel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(259, 69, 81, 91));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/re/Administrator_white.png);\n"
"background-color: transparent"));

        retranslateUi(PasswordPanel);

        QMetaObject::connectSlotsByName(PasswordPanel);
    } // setupUi

    void retranslateUi(QDialog *PasswordPanel)
    {
        PasswordPanel->setWindowTitle(QApplication::translate("PasswordPanel", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_error->setText(QString());
        pushButton_password->setText(QString());
        pushButton_13->setText(QString());
        pushButton->setText(QString());
        pushButton_37->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_6->setText(QString());
        pushButton_delete->setText(QString());
        pushButton_5->setText(QString());
        pushButton_4->setText(QString());
        pushButton_7->setText(QString());
        pushButton_1->setText(QString());
        pushButton_0->setText(QString());
        label->setText(QApplication::translate("PasswordPanel", "\347\256\241\347\220\206\345\221\230", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PasswordPanel: public Ui_PasswordPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDPANEL_H
