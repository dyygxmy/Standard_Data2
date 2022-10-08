/********************************************************************************
** Form generated from reading UI file 'usermanagement.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMANAGEMENT_H
#define UI_USERMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserManagement
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QStackedWidget *stackedWidget_3;
    QWidget *page_34;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_role;
    QLabel *label_role;
    QLabel *label_user;
    QPushButton *pushButton_user;
    QLabel *label_workShift;
    QPushButton *pushButton_workShift;
    QWidget *page_35;
    QPushButton *pushButton_back;
    QPushButton *pushButton_54;
    QLabel *label_157;
    QStackedWidget *stackedWidget_2;
    QWidget *page_17;
    QGroupBox *groupBox_A;
    QPushButton *pushButton_addUser;
    QLabel *label;
    QPushButton *pushButton_down;
    QPushButton *pushButton_up;
    QGroupBox *groupBox_B;
    QGroupBox *groupBox_C;
    QWidget *page_16;
    QLabel *label_2;
    QLabel *label_45;
    QLabel *label_46;
    QLineEdit *lineEdit_UserName;
    QLabel *label_47;
    QLineEdit *lineEdit_WorkID;
    QLabel *label_48;
    QLineEdit *lineEdit_UserPassword;
    QLabel *label_49;
    QComboBox *comboBox;
    QWidget *widget_head;
    QPushButton *pushButton_changeHead;
    QWidget *widget_3;
    QWidget *widget;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_wrong_role;
    QLabel *label_wrong_UserPassword;
    QLabel *label_wrong_WorkID;
    QLabel *label_wrong_UserName;
    QLabel *label_CardNum;
    QLabel *label_wrong_CardNum;
    QPushButton *pushButton_save;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_cancel;
    QWidget *page;
    QLabel *label_6;
    QPushButton *pushButton_addRole;
    QListWidget *listWidget_Role;
    QWidget *page_4;
    QLabel *label_18;
    QPushButton *pushButton_addWorkShift;
    QTableView *tableView;
    QWidget *page_2;
    QLabel *label_7;
    QPushButton *pushButton_toPassword;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QFrame *line_4;
    QLabel *label_8;
    QLabel *label_cardNumber;
    QLabel *label_31;
    QLabel *label_wrong_2;
    QPushButton *pushButton_shutdown;
    QWidget *page_3;
    QLabel *label_9;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pushButton_toCard;
    QLabel *label_17;
    QLineEdit *lineEdit_LoginWorkID;
    QLabel *label_50;
    QLineEdit *lineEdit_LoginPassword;
    QLabel *label_51;
    QPushButton *pushButton_Login;
    QLabel *label_wrong;
    QPushButton *pushButton_shutdown_2;
    QLabel *label_init;
    QWidget *page_5;
    QWidget *widget_2;
    QLabel *label_19;
    QPushButton *pushButton_LoginState;
    QPushButton *pushButton_cancelLogin;
    QLabel *label_head;
    QLabel *label_workid;
    QLabel *label_name;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_black;

    void setupUi(QDialog *UserManagement)
    {
        if (UserManagement->objectName().isEmpty())
            UserManagement->setObjectName(QString::fromUtf8("UserManagement"));
        UserManagement->resize(1366, 768);
        stackedWidget = new QStackedWidget(UserManagement);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1366, 768));
        stackedWidget->setFocusPolicy(Qt::ClickFocus);
        stackedWidget->setStyleSheet(QString::fromUtf8(" background-color: rgb(51, 153, 255);"));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        stackedWidget_3 = new QStackedWidget(page_1);
        stackedWidget_3->setObjectName(QString::fromUtf8("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(-1, 0, 200, 768));
        stackedWidget_3->setStyleSheet(QString::fromUtf8(" background-color: rgb(51, 153, 255);"));
        page_34 = new QWidget();
        page_34->setObjectName(QString::fromUtf8("page_34"));
        groupBox = new QGroupBox(page_34);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 200, 768));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border-width:0px;  \n"
"    border-style:solid;\n"
"    background-color: rgb(51, 153, 255);\n"
"    margin-top: 0ex; \n"
"};\n"
"\n"
"\n"
"\n"
""));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(69, 40, 57, 57));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-image: url(:/re/back.png);"));
        pushButton->setFlat(true);
        pushButton_role = new QPushButton(groupBox);
        pushButton_role->setObjectName(QString::fromUtf8("pushButton_role"));
        pushButton_role->setGeometry(QRect(35, 252, 131, 41));
        pushButton_role->setFocusPolicy(Qt::NoFocus);
        pushButton_role->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    border:none;\n"
"    background:transparent;\n"
"    font: 18pt \"\351\273\221\344\275\223\";\n"
"    color: rgb(248, 248, 255);\n"
"}"));
        pushButton_role->setAutoDefault(false);
        pushButton_role->setFlat(true);
        label_role = new QLabel(groupBox);
        label_role->setObjectName(QString::fromUtf8("label_role"));
        label_role->setGeometry(QRect(16, 259, 17, 27));
        label_role->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/logo/triangle.png);"));
        label_user = new QLabel(groupBox);
        label_user->setObjectName(QString::fromUtf8("label_user"));
        label_user->setGeometry(QRect(16, 167, 17, 27));
        label_user->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/logo/triangle.png);"));
        pushButton_user = new QPushButton(groupBox);
        pushButton_user->setObjectName(QString::fromUtf8("pushButton_user"));
        pushButton_user->setGeometry(QRect(35, 160, 131, 41));
        pushButton_user->setFocusPolicy(Qt::NoFocus);
        pushButton_user->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    border:none;\n"
"    background:transparent;\n"
"    font: 18pt \"\351\273\221\344\275\223\";\n"
"    color: rgb(248, 248, 255);\n"
"}"));
        pushButton_user->setAutoDefault(false);
        pushButton_user->setFlat(true);
        label_workShift = new QLabel(groupBox);
        label_workShift->setObjectName(QString::fromUtf8("label_workShift"));
        label_workShift->setGeometry(QRect(16, 358, 17, 27));
        label_workShift->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/logo/triangle.png);"));
        pushButton_workShift = new QPushButton(groupBox);
        pushButton_workShift->setObjectName(QString::fromUtf8("pushButton_workShift"));
        pushButton_workShift->setGeometry(QRect(35, 351, 131, 41));
        pushButton_workShift->setFocusPolicy(Qt::NoFocus);
        pushButton_workShift->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    border:none;\n"
"    background:transparent;\n"
"    font: 18pt \"\351\273\221\344\275\223\";\n"
"    color: rgb(248, 248, 255);\n"
"}"));
        pushButton_workShift->setAutoDefault(false);
        pushButton_workShift->setFlat(true);
        stackedWidget_3->addWidget(page_34);
        page_35 = new QWidget();
        page_35->setObjectName(QString::fromUtf8("page_35"));
        pushButton_back = new QPushButton(page_35);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(69, 40, 57, 57));
        pushButton_back->setFocusPolicy(Qt::NoFocus);
        pushButton_back->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-image: url(:/re/back.png);"));
        pushButton_back->setFlat(true);
        pushButton_54 = new QPushButton(page_35);
        pushButton_54->setObjectName(QString::fromUtf8("pushButton_54"));
        pushButton_54->setEnabled(true);
        pushButton_54->setGeometry(QRect(45, 160, 111, 41));
        pushButton_54->setFocusPolicy(Qt::NoFocus);
        pushButton_54->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/67.bmp);\n"
"font: 18pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        label_157 = new QLabel(page_35);
        label_157->setObjectName(QString::fromUtf8("label_157"));
        label_157->setGeometry(QRect(16, 168, 17, 27));
        label_157->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/logo/triangle.png);"));
        stackedWidget_3->addWidget(page_35);
        stackedWidget_2 = new QStackedWidget(page_1);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(200, 0, 1166, 768));
        stackedWidget_2->setFocusPolicy(Qt::ClickFocus);
        stackedWidget_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        stackedWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 255);"));
        page_17 = new QWidget();
        page_17->setObjectName(QString::fromUtf8("page_17"));
        groupBox_A = new QGroupBox(page_17);
        groupBox_A->setObjectName(QString::fromUtf8("groupBox_A"));
        groupBox_A->setGeometry(QRect(50, 110, 1041, 151));
        groupBox_A->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    font: 14pt \"\351\273\221\344\275\223\";\n"
"    margin-top: 1ex;\n"
"    border-width:0.5px;  \n"
"    border-style:solid;\n"
"    border-color: rgb(51, 153, 255);  \n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    left:15px;      \n"
"    margin-left: 5px;\n"
"    margin-right: 5px;\n"
"    padding:1px;\n"
"}"));
        groupBox_A->setFlat(false);
        pushButton_addUser = new QPushButton(page_17);
        pushButton_addUser->setObjectName(QString::fromUtf8("pushButton_addUser"));
        pushButton_addUser->setGeometry(QRect(1001, 60, 111, 41));
        pushButton_addUser->setFocusPolicy(Qt::NoFocus);
        pushButton_addUser->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"color: rgb(248, 248, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"font: 14pt \"\351\273\221\344\275\223\";"));
        label = new QLabel(page_17);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(525, 3, 91, 41));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);
        pushButton_down = new QPushButton(page_17);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));
        pushButton_down->setGeometry(QRect(554, 720, 33, 22));
        pushButton_down->setFocusPolicy(Qt::NoFocus);
        pushButton_down->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/down.bmp);"));
        pushButton_down->setFlat(true);
        pushButton_up = new QPushButton(page_17);
        pushButton_up->setObjectName(QString::fromUtf8("pushButton_up"));
        pushButton_up->setGeometry(QRect(554, 80, 33, 22));
        pushButton_up->setFocusPolicy(Qt::NoFocus);
        pushButton_up->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/up.bmp);"));
        pushButton_up->setFlat(true);
        groupBox_B = new QGroupBox(page_17);
        groupBox_B->setObjectName(QString::fromUtf8("groupBox_B"));
        groupBox_B->setGeometry(QRect(50, 318, 1041, 151));
        groupBox_B->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    font: 14pt \"\351\273\221\344\275\223\";\n"
"    margin-top: 1ex;\n"
"    border-width:0.5px;  \n"
"    border-style:solid;\n"
"    border-color: rgb(51, 153, 255);  \n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    left:15px;      \n"
"    margin-left: 5px;\n"
"    margin-right: 5px;\n"
"    padding:1px;\n"
"}"));
        groupBox_B->setFlat(false);
        groupBox_C = new QGroupBox(page_17);
        groupBox_C->setObjectName(QString::fromUtf8("groupBox_C"));
        groupBox_C->setGeometry(QRect(50, 539, 1041, 151));
        groupBox_C->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    font: 14pt \"\351\273\221\344\275\223\";\n"
"    margin-top: 1ex;\n"
"    border-width:0.5px;  \n"
"    border-style:solid;\n"
"    border-color: rgb(51, 153, 255);  \n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    left:15px;      \n"
"    margin-left: 5px;\n"
"    margin-right: 5px;\n"
"    padding:1px;\n"
"}"));
        groupBox_C->setFlat(false);
        stackedWidget_2->addWidget(page_17);
        page_16 = new QWidget();
        page_16->setObjectName(QString::fromUtf8("page_16"));
        label_2 = new QLabel(page_16);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(520, 3, 91, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_45 = new QLabel(page_16);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(406, 174, 91, 35));
        label_45->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_46 = new QLabel(page_16);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(406, 250, 91, 35));
        label_46->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        lineEdit_UserName = new QLineEdit(page_16);
        lineEdit_UserName->setObjectName(QString::fromUtf8("lineEdit_UserName"));
        lineEdit_UserName->setGeometry(QRect(531, 250, 181, 35));
        lineEdit_UserName->setFocusPolicy(Qt::ClickFocus);
        lineEdit_UserName->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        label_47 = new QLabel(page_16);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(406, 330, 91, 35));
        label_47->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        lineEdit_WorkID = new QLineEdit(page_16);
        lineEdit_WorkID->setObjectName(QString::fromUtf8("lineEdit_WorkID"));
        lineEdit_WorkID->setGeometry(QRect(531, 330, 181, 35));
        lineEdit_WorkID->setFocusPolicy(Qt::ClickFocus);
        lineEdit_WorkID->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        label_48 = new QLabel(page_16);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(406, 410, 91, 35));
        label_48->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        lineEdit_UserPassword = new QLineEdit(page_16);
        lineEdit_UserPassword->setObjectName(QString::fromUtf8("lineEdit_UserPassword"));
        lineEdit_UserPassword->setGeometry(QRect(531, 410, 181, 35));
        lineEdit_UserPassword->setFocusPolicy(Qt::ClickFocus);
        lineEdit_UserPassword->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        label_49 = new QLabel(page_16);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(407, 490, 91, 35));
        label_49->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        comboBox = new QComboBox(page_16);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(531, 490, 181, 35));
        comboBox->setFocusPolicy(Qt::NoFocus);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"font: 14pt \"Arial\";\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;\n"
"}\n"
"QComboBox::drop-down {\n"
"width:30px; \n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"}\n"
"QComboBox::down-arrow {\n"
"image: url(:/LCD_CS351/LCD_CS351/logo/arrow.png);\n"
"}\n"
"QComboBox QAbstractItemView{\n"
"height:50px;\n"
"border: 1px solid rgb(51, 153, 255); \n"
"selection-background-color: rgb(51, 153, 255); \n"
"}\n"
"QScrollBar:vertical{\n"
"width:30px;\n"
"border: 2px solid grey;\n"
"}\n"
"QComboBox QAbstractItemView::item{\n"
"height:20px;\n"
"}"));
        comboBox->setEditable(false);
        comboBox->setMaxVisibleItems(10);
        widget_head = new QWidget(page_16);
        widget_head->setObjectName(QString::fromUtf8("widget_head"));
        widget_head->setGeometry(QRect(100, 250, 151, 161));
        widget_head->setStyleSheet(QString::fromUtf8("border-image: url(:/re/head/1.png);"));
        pushButton_changeHead = new QPushButton(page_16);
        pushButton_changeHead->setObjectName(QString::fromUtf8("pushButton_changeHead"));
        pushButton_changeHead->setGeometry(QRect(130, 440, 91, 31));
        pushButton_changeHead->setFocusPolicy(Qt::NoFocus);
        pushButton_changeHead->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(51, 153, 255);\n"
""));
        widget_3 = new QWidget(page_16);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(973, 485, 191, 281));
        widget_3->setStyleSheet(QString::fromUtf8("border-style: dashed;\n"
"border-color: rgb(51, 153, 255);\n"
"border-width:2px;\n"
""));
        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(4, 4, 183, 273));
        widget->setStyleSheet(QString::fromUtf8(" background-color: rgb(51, 153, 255);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 168, 158));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/logo/card.png);"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(25, 23, 141, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(25, 53, 141, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        label_5->setAlignment(Qt::AlignCenter);
        label_wrong_role = new QLabel(page_16);
        label_wrong_role->setObjectName(QString::fromUtf8("label_wrong_role"));
        label_wrong_role->setGeometry(QRect(730, 492, 131, 31));
        label_wrong_role->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(250, 0, 0);"));
        label_wrong_UserPassword = new QLabel(page_16);
        label_wrong_UserPassword->setObjectName(QString::fromUtf8("label_wrong_UserPassword"));
        label_wrong_UserPassword->setGeometry(QRect(730, 411, 131, 31));
        label_wrong_UserPassword->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(250, 0, 0);"));
        label_wrong_WorkID = new QLabel(page_16);
        label_wrong_WorkID->setObjectName(QString::fromUtf8("label_wrong_WorkID"));
        label_wrong_WorkID->setGeometry(QRect(730, 331, 131, 31));
        label_wrong_WorkID->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(250, 0, 0);"));
        label_wrong_UserName = new QLabel(page_16);
        label_wrong_UserName->setObjectName(QString::fromUtf8("label_wrong_UserName"));
        label_wrong_UserName->setGeometry(QRect(730, 250, 131, 31));
        label_wrong_UserName->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(250, 0, 0);"));
        label_CardNum = new QLabel(page_16);
        label_CardNum->setObjectName(QString::fromUtf8("label_CardNum"));
        label_CardNum->setGeometry(QRect(531, 174, 181, 35));
        label_CardNum->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";"));
        label_wrong_CardNum = new QLabel(page_16);
        label_wrong_CardNum->setObjectName(QString::fromUtf8("label_wrong_CardNum"));
        label_wrong_CardNum->setGeometry(QRect(730, 176, 131, 31));
        label_wrong_CardNum->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(250, 0, 0);"));
        pushButton_save = new QPushButton(page_16);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(810, 672, 54, 54));
        pushButton_save->setFocusPolicy(Qt::NoFocus);
        pushButton_save->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/logo/saves.bmp);"));
        pushButton_save->setFlat(false);
        pushButton_delete = new QPushButton(page_16);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(610, 672, 54, 54));
        pushButton_delete->setFocusPolicy(Qt::NoFocus);
        pushButton_delete->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/35_all/5.bmp);"));
        pushButton_cancel = new QPushButton(page_16);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setEnabled(true);
        pushButton_cancel->setGeometry(QRect(710, 672, 54, 54));
        pushButton_cancel->setFocusPolicy(Qt::NoFocus);
        pushButton_cancel->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/logo/cancel.bmp);"));
        pushButton_cancel->setFlat(true);
        stackedWidget_2->addWidget(page_16);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(520, 3, 91, 41));
        label_6->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        pushButton_addRole = new QPushButton(page);
        pushButton_addRole->setObjectName(QString::fromUtf8("pushButton_addRole"));
        pushButton_addRole->setGeometry(QRect(1001, 60, 111, 41));
        pushButton_addRole->setFocusPolicy(Qt::NoFocus);
        pushButton_addRole->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"color: rgb(248, 248, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"font: 14pt \"\351\273\221\344\275\223\";"));
        listWidget_Role = new QListWidget(page);
        listWidget_Role->setObjectName(QString::fromUtf8("listWidget_Role"));
        listWidget_Role->setGeometry(QRect(95, 151, 821, 551));
        listWidget_Role->setFocusPolicy(Qt::NoFocus);
        listWidget_Role->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"border-width:0px;\n"
"border-style:solid;\n"
"border-color:rgb(51, 153, 255);\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"} \n"
"QListWidget::item{\n"
"border-right-width:0px;\n"
"border-bottom-width:0px;\n"
"border-style:solid;\n"
"border-color:rgb(51, 153, 255);\n"
"}\n"
"QScrollBar:vertical{\n"
"width:36px;\n"
"}\n"
""));
        listWidget_Role->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_Role->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_Role->setAutoScroll(false);
        stackedWidget_2->addWidget(page);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_18 = new QLabel(page_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(520, 3, 91, 41));
        label_18->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        pushButton_addWorkShift = new QPushButton(page_4);
        pushButton_addWorkShift->setObjectName(QString::fromUtf8("pushButton_addWorkShift"));
        pushButton_addWorkShift->setGeometry(QRect(960, 70, 111, 41));
        pushButton_addWorkShift->setFocusPolicy(Qt::NoFocus);
        pushButton_addWorkShift->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"color: rgb(248, 248, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"font: 14pt \"\351\273\221\344\275\223\";"));
        tableView = new QTableView(page_4);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(70, 140, 1000, 541));
        tableView->setFocusPolicy(Qt::NoFocus);
        tableView->setStyleSheet(QString::fromUtf8("QTableView{\n"
"    font: 14pt \"\351\273\221\344\275\223\"; \n"
"	border-width:0px;  \n"
"	border-style:solid;\n"
"	border-color: rgb(51, 153, 255);  \n"
"	background-color: rgb(248, 248, 255);\n"
"	gridline-color: rgb(248, 248, 255);\n"
"}\n"
"QTableView::item:seleted{\n"
"    background-color: rgb(248, 248, 255); \n"
"	color: black;\n"
"}\n"
"QTableView QTableCornerButton::section {\n"
"	background-color: rgb(51, 153, 255);\n"
"	border-style:solid;\n"
"	border-width:0px;  \n"
" }"));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setAutoScroll(false);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setTabKeyNavigation(false);
        tableView->setProperty("showDropIndicator", QVariant(false));
        tableView->setDragDropOverwriteMode(false);
        tableView->setSelectionMode(QAbstractItemView::NoSelection);
        tableView->setTextElideMode(Qt::ElideLeft);
        tableView->setShowGrid(true);
        tableView->setGridStyle(Qt::SolidLine);
        tableView->setWordWrap(true);
        tableView->setCornerButtonEnabled(false);
        stackedWidget_2->addWidget(page_4);
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(183, 110, 1000, 81));
        label_7->setStyleSheet(QString::fromUtf8("font: 40pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        label_7->setAlignment(Qt::AlignCenter);
        pushButton_toPassword = new QPushButton(page_2);
        pushButton_toPassword->setObjectName(QString::fromUtf8("pushButton_toPassword"));
        pushButton_toPassword->setGeometry(QRect(1000, 730, 111, 31));
        pushButton_toPassword->setFocusPolicy(Qt::NoFocus);
        pushButton_toPassword->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"color: rgb(248, 248, 255);\n"
"background-color: rgb(242, 157, 33);\n"
"font: 14pt \"\351\273\221\344\275\223\";"));
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(260, 310, 101, 35));
        label_10->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        label_11 = new QLabel(page_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(260, 400, 101, 35));
        label_11->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        label_12 = new QLabel(page_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(400, 400, 101, 35));
        label_12->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(400, 310, 231, 35));
        label_13->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        line_4 = new QFrame(page_2);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(1170, 483, 191, 281));
        line_4->setStyleSheet(QString::fromUtf8("border-style: dashed;\n"
"border-color: rgb(248, 248, 255);\n"
"border-width:4px;\n"
""));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(3);
        line_4->setFrameShape(QFrame::VLine);
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1181, 560, 171, 161));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/LCD_CS351/LCD_CS351/logo/card.png);"));
        label_cardNumber = new QLabel(page_2);
        label_cardNumber->setObjectName(QString::fromUtf8("label_cardNumber"));
        label_cardNumber->setGeometry(QRect(840, 310, 211, 35));
        label_cardNumber->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        label_31 = new QLabel(page_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(700, 310, 111, 35));
        label_31->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        label_wrong_2 = new QLabel(page_2);
        label_wrong_2->setObjectName(QString::fromUtf8("label_wrong_2"));
        label_wrong_2->setGeometry(QRect(700, 400, 431, 35));
        label_wrong_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(250, 0, 0);"));
        pushButton_shutdown = new QPushButton(page_2);
        pushButton_shutdown->setObjectName(QString::fromUtf8("pushButton_shutdown"));
        pushButton_shutdown->setGeometry(QRect(0, 697, 71, 71));
        pushButton_shutdown->setFocusPolicy(Qt::NoFocus);
        pushButton_shutdown->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"image: url(:/maindialog/ICON-12.png);\n"
"background-color: transparent"));
        pushButton_shutdown->setFlat(true);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(183, 110, 1000, 81));
        label_9->setStyleSheet(QString::fromUtf8("font: 40pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        label_9->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(page_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(260, 400, 101, 35));
        label_14->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        label_15 = new QLabel(page_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(400, 400, 341, 35));
        label_15->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        label_16 = new QLabel(page_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(260, 310, 101, 35));
        label_16->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        pushButton_toCard = new QPushButton(page_3);
        pushButton_toCard->setObjectName(QString::fromUtf8("pushButton_toCard"));
        pushButton_toCard->setGeometry(QRect(767, 500, 171, 41));
        pushButton_toCard->setFocusPolicy(Qt::NoFocus);
        pushButton_toCard->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"color: rgb(248, 248, 255);\n"
"background-color: rgb(242, 157, 33);\n"
"font: 14pt \"\351\273\221\344\275\223\";"));
        label_17 = new QLabel(page_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(400, 310, 341, 35));
        label_17->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        lineEdit_LoginWorkID = new QLineEdit(page_3);
        lineEdit_LoginWorkID->setObjectName(QString::fromUtf8("lineEdit_LoginWorkID"));
        lineEdit_LoginWorkID->setGeometry(QRect(892, 310, 251, 35));
        lineEdit_LoginWorkID->setFocusPolicy(Qt::ClickFocus);
        lineEdit_LoginWorkID->setStyleSheet(QString::fromUtf8("font: 20pt \"Arial\";\n"
"background-color: rgb(248, 248, 255);\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        lineEdit_LoginWorkID->setAlignment(Qt::AlignCenter);
        label_50 = new QLabel(page_3);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(767, 310, 101, 35));
        label_50->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        lineEdit_LoginPassword = new QLineEdit(page_3);
        lineEdit_LoginPassword->setObjectName(QString::fromUtf8("lineEdit_LoginPassword"));
        lineEdit_LoginPassword->setGeometry(QRect(891, 400, 251, 35));
        lineEdit_LoginPassword->setFocusPolicy(Qt::ClickFocus);
        lineEdit_LoginPassword->setStyleSheet(QString::fromUtf8("font: 20pt \"Arial\";\n"
"background-color: rgb(248, 248, 255);\n"
"border-width:1px; \n"
"border-style:solid; \n"
"border-color:rgb(51, 153, 255); \n"
"margin-top: 0ex;"));
        lineEdit_LoginPassword->setAlignment(Qt::AlignCenter);
        label_51 = new QLabel(page_3);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(766, 400, 101, 35));
        label_51->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(248, 248, 255);"));
        pushButton_Login = new QPushButton(page_3);
        pushButton_Login->setObjectName(QString::fromUtf8("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(998, 500, 101, 41));
        pushButton_Login->setFocusPolicy(Qt::NoFocus);
        pushButton_Login->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"color: rgb(248, 248, 255);\n"
"background-color: rgb(69, 192, 26);\n"
"font: 14pt \"\351\273\221\344\275\223\";"));
        label_wrong = new QLabel(page_3);
        label_wrong->setObjectName(QString::fromUtf8("label_wrong"));
        label_wrong->setGeometry(QRect(770, 450, 551, 31));
        label_wrong->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(250, 0, 0);"));
        pushButton_shutdown_2 = new QPushButton(page_3);
        pushButton_shutdown_2->setObjectName(QString::fromUtf8("pushButton_shutdown_2"));
        pushButton_shutdown_2->setGeometry(QRect(0, 697, 71, 71));
        pushButton_shutdown_2->setFocusPolicy(Qt::NoFocus);
        pushButton_shutdown_2->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"image: url(:/maindialog/ICON-12.png);\n"
"background-color: transparent"));
        pushButton_shutdown_2->setFlat(true);
        label_init = new QLabel(page_3);
        label_init->setObjectName(QString::fromUtf8("label_init"));
        label_init->setGeometry(QRect(800, 250, 361, 41));
        label_init->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0,0,0);"));
        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        widget_2 = new QWidget(page_5);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 1366, 768));
        widget_2->setStyleSheet(QString::fromUtf8(" background-color: rgb(214, 236, 238);"));
        label_19 = new QLabel(widget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(322, 100, 300, 300));
        label_19->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-radius:150px;\n"
"border-width:5px; \n"
"border-color:rgb(248, 248, 255); \n"
"background-color: rgb(46, 117, 182)"));
        pushButton_LoginState = new QPushButton(widget_2);
        pushButton_LoginState->setObjectName(QString::fromUtf8("pushButton_LoginState"));
        pushButton_LoginState->setGeometry(QRect(429, 510, 301, 100));
        pushButton_LoginState->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(248, 248, 255);\n"
"    border-style: solid;\n"
"    background-color: rgb(0, 176, 80);\n"
"    font: 25pt \"\351\273\221\344\275\223\";\n"
"}"));
        pushButton_cancelLogin = new QPushButton(widget_2);
        pushButton_cancelLogin->setObjectName(QString::fromUtf8("pushButton_cancelLogin"));
        pushButton_cancelLogin->setGeometry(QRect(813, 510, 100, 100));
        pushButton_cancelLogin->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"image: url(:/LCD_CS351/LCD_CS351/logo/65-04.png);\n"
"background-color: rgb(255, 102, 102)"));
        label_head = new QLabel(widget_2);
        label_head->setObjectName(QString::fromUtf8("label_head"));
        label_head->setGeometry(QRect(372, 150, 200, 200));
        label_head->setStyleSheet(QString::fromUtf8("border-image: url(/Head/1.png);\n"
"background-color: transparent"));
        label_workid = new QLabel(widget_2);
        label_workid->setObjectName(QString::fromUtf8("label_workid"));
        label_workid->setGeometry(QRect(850, 300, 251, 51));
        label_workid->setStyleSheet(QString::fromUtf8("font: 30pt \"\351\273\221\344\275\223\";"));
        label_name = new QLabel(widget_2);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(850, 201, 251, 51));
        label_name->setStyleSheet(QString::fromUtf8("font: 30pt \"\351\273\221\344\275\223\";"));
        label_22 = new QLabel(widget_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(696, 201, 131, 51));
        label_22->setStyleSheet(QString::fromUtf8("font: 30pt \"\351\273\221\344\275\223\";"));
        label_23 = new QLabel(widget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(696, 300, 131, 51));
        label_23->setStyleSheet(QString::fromUtf8("font: 30pt \"\351\273\221\344\275\223\";"));
        stackedWidget->addWidget(page_5);
        label_black = new QLabel(UserManagement);
        label_black->setObjectName(QString::fromUtf8("label_black"));
        label_black->setGeometry(QRect(1347, 360, 21, 20));
        label_black->setMouseTracking(false);
        label_black->setFocusPolicy(Qt::ClickFocus);
        label_black->setAcceptDrops(false);
        label_black->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        retranslateUi(UserManagement);

        stackedWidget->setCurrentIndex(1);
        stackedWidget_3->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UserManagement);
    } // setupUi

    void retranslateUi(QDialog *UserManagement)
    {
        UserManagement->setWindowTitle(QApplication::translate("UserManagement", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        pushButton->setText(QString());
        pushButton_role->setText(QApplication::translate("UserManagement", "\350\247\222\350\211\262\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label_role->setText(QString());
        label_user->setText(QString());
        pushButton_user->setText(QApplication::translate("UserManagement", "\347\224\250\346\210\267\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label_workShift->setText(QString());
        pushButton_workShift->setText(QApplication::translate("UserManagement", "\347\217\255\346\254\241\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        pushButton_back->setText(QString());
        pushButton_54->setText(QApplication::translate("UserManagement", "\346\267\273\345\212\240\347\224\250\346\210\267", 0, QApplication::UnicodeUTF8));
        label_157->setText(QString());
        groupBox_A->setTitle(QApplication::translate("UserManagement", "A", 0, QApplication::UnicodeUTF8));
        pushButton_addUser->setText(QApplication::translate("UserManagement", "\346\267\273\345\212\240\347\224\250\346\210\267", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UserManagement", "\347\224\250\346\210\267\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        pushButton_down->setText(QString());
        pushButton_up->setText(QString());
        groupBox_B->setTitle(QApplication::translate("UserManagement", "B", 0, QApplication::UnicodeUTF8));
        groupBox_C->setTitle(QApplication::translate("UserManagement", "C", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UserManagement", "\346\267\273\345\212\240\347\224\250\346\210\267", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("UserManagement", "\345\215\241\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("UserManagement", "\345\247\223\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        lineEdit_UserName->setText(QString());
        label_47->setText(QApplication::translate("UserManagement", "\345\267\245\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        lineEdit_WorkID->setText(QString());
        label_48->setText(QApplication::translate("UserManagement", "\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        lineEdit_UserPassword->setText(QString());
        label_49->setText(QApplication::translate("UserManagement", "\350\201\214\345\212\241\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton_changeHead->setText(QApplication::translate("UserManagement", "\346\233\264\346\224\271\345\244\264\345\203\217", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("UserManagement", "\350\257\267\346\211\253\346\217\217\344\275\240\347\232\204\345\215\241", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("UserManagement", "\350\277\233\350\241\214\345\215\241\347\211\207\345\275\225\345\205\245", 0, QApplication::UnicodeUTF8));
        label_wrong_role->setText(QApplication::translate("UserManagement", "\350\257\267\351\200\211\346\213\251\350\201\214\345\212\241!", 0, QApplication::UnicodeUTF8));
        label_wrong_UserPassword->setText(QApplication::translate("UserManagement", "\350\257\267\345\241\253\345\206\231\345\257\206\347\240\201!", 0, QApplication::UnicodeUTF8));
        label_wrong_WorkID->setText(QApplication::translate("UserManagement", "\350\257\267\345\241\253\345\206\231\345\267\245\345\217\267!", 0, QApplication::UnicodeUTF8));
        label_wrong_UserName->setText(QApplication::translate("UserManagement", "\350\257\267\345\241\253\345\206\231\345\247\223\345\220\215!", 0, QApplication::UnicodeUTF8));
        label_CardNum->setText(QString());
        label_wrong_CardNum->setText(QApplication::translate("UserManagement", "\350\257\267\345\241\253\345\206\231\345\247\223\345\220\215!", 0, QApplication::UnicodeUTF8));
        pushButton_save->setText(QString());
        pushButton_delete->setText(QString());
        pushButton_cancel->setText(QString());
        label_6->setText(QApplication::translate("UserManagement", "\350\247\222\350\211\262\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        pushButton_addRole->setText(QApplication::translate("UserManagement", "\346\267\273\345\212\240\350\247\222\350\211\262", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("UserManagement", "\347\217\255\346\254\241\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        pushButton_addWorkShift->setText(QApplication::translate("UserManagement", "\346\267\273\345\212\240\347\217\255\346\254\241", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("UserManagement", "\350\257\267\345\234\250\350\231\232\347\272\277\346\241\206\345\206\205\346\211\253\346\217\217\344\275\240\347\232\204\345\267\245\344\275\234\345\215\241\350\277\233\350\241\214\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        pushButton_toPassword->setText(QApplication::translate("UserManagement", "\345\257\206\347\240\201\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("UserManagement", "\347\272\277 \345\210\253:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("UserManagement", "\347\253\231 \345\210\253\357\274\232", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("UserManagement", "75L", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("UserManagement", "ba1", 0, QApplication::UnicodeUTF8));
        label_8->setText(QString());
        label_cardNumber->setText(QApplication::translate("UserManagement", "0132364577", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("UserManagement", "\345\215\241 \345\217\267:", 0, QApplication::UnicodeUTF8));
        label_wrong_2->setText(QApplication::translate("UserManagement", "\346\262\241\346\234\211\350\257\245\347\224\250\346\210\267\357\274\214\350\257\267\351\207\215\346\226\260\345\210\267\345\215\241\357\274\201", 0, QApplication::UnicodeUTF8));
        pushButton_shutdown->setText(QString());
        label_9->setText(QApplication::translate("UserManagement", "\350\257\267\350\276\223\345\205\245\345\267\245\345\217\267\345\257\206\347\240\201\350\277\233\350\241\214\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("UserManagement", "\347\253\231 \345\210\253\357\274\232", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("UserManagement", "75L", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("UserManagement", "\347\272\277 \345\210\253:", 0, QApplication::UnicodeUTF8));
        pushButton_toCard->setText(QApplication::translate("UserManagement", "\345\210\267\345\215\241\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("UserManagement", "ba1", 0, QApplication::UnicodeUTF8));
        lineEdit_LoginWorkID->setText(QString());
        label_50->setText(QApplication::translate("UserManagement", "\345\267\245 \345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        lineEdit_LoginPassword->setText(QString());
        label_51->setText(QApplication::translate("UserManagement", "\345\257\206 \347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton_Login->setText(QApplication::translate("UserManagement", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        label_wrong->setText(QApplication::translate("UserManagement", "\346\262\241\346\234\211\350\257\245\347\224\250\346\210\267!", 0, QApplication::UnicodeUTF8));
        pushButton_shutdown_2->setText(QString());
        label_init->setText(QApplication::translate("UserManagement", "\345\210\235\345\247\213\345\267\245\345\217\267\344\270\2720\357\274\214\345\210\235\345\247\213\345\257\206\347\240\201\344\270\2720", 0, QApplication::UnicodeUTF8));
        label_19->setText(QString());
        pushButton_LoginState->setText(QApplication::translate("UserManagement", "\346\227\251\347\217\255  \345\274\200\345\267\245", 0, QApplication::UnicodeUTF8));
        pushButton_cancelLogin->setText(QString());
        label_head->setText(QString());
        label_workid->setText(QApplication::translate("UserManagement", "1234567890", 0, QApplication::UnicodeUTF8));
        label_name->setText(QApplication::translate("UserManagement", "lEE", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("UserManagement", "\345\247\223 \345\220\215 \357\274\232", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("UserManagement", "\345\267\245 \345\217\267 \357\274\232", 0, QApplication::UnicodeUTF8));
        label_black->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserManagement: public Ui_UserManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMANAGEMENT_H
