/********************************************************************************
** Form generated from reading UI file 'location.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCATION_H
#define UI_LOCATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Location
{
public:
    QPushButton *pushButton_close;
    QCustomPlot *plot;
    QLabel *locationtitle_label;
    QPushButton *PushButton_clearpoint;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Location)
    {
        if (Location->objectName().isEmpty())
            Location->setObjectName(QString::fromUtf8("Location"));
        Location->resize(760, 560);
        Location->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 255);"));
        pushButton_close = new QPushButton(Location);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(720, 0, 41, 41));
        pushButton_close->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/cha.bmp);"));
        plot = new QCustomPlot(Location);
        plot->setObjectName(QString::fromUtf8("plot"));
        plot->setGeometry(QRect(36, 60, 681, 441));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plot->sizePolicy().hasHeightForWidth());
        plot->setSizePolicy(sizePolicy);
        plot->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 255);"));
        locationtitle_label = new QLabel(Location);
        locationtitle_label->setObjectName(QString::fromUtf8("locationtitle_label"));
        locationtitle_label->setGeometry(QRect(290, 10, 251, 41));
        PushButton_clearpoint = new QPushButton(Location);
        PushButton_clearpoint->setObjectName(QString::fromUtf8("PushButton_clearpoint"));
        PushButton_clearpoint->setGeometry(QRect(580, 520, 81, 23));
        PushButton_clearpoint->setFocusPolicy(Qt::NoFocus);
        PushButton_clearpoint->setAutoFillBackground(false);
        PushButton_clearpoint->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        PushButton_clearpoint->setAutoDefault(true);
        PushButton_clearpoint->setDefault(false);
        PushButton_clearpoint->setFlat(false);
        label = new QLabel(Location);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 515, 101, 31));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_2 = new QLabel(Location);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 515, 211, 31));
        label_2->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(Location);

        QMetaObject::connectSlotsByName(Location);
    } // setupUi

    void retranslateUi(QDialog *Location)
    {
        Location->setWindowTitle(QApplication::translate("Location", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_close->setText(QString());
        locationtitle_label->setText(QApplication::translate("Location", "\346\227\240\347\272\277\345\256\232\344\275\215\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        PushButton_clearpoint->setText(QApplication::translate("Location", "\346\270\205\351\231\244\350\275\250\350\277\271", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Location", "\345\256\236\346\227\266\345\235\220\346\240\207:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Location", "(0,0)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Location: public Ui_Location {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCATION_H
