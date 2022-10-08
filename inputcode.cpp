#include "inputcode.h"
#include "ui_inputcode.h"

InputCode::InputCode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputCode)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
}

InputCode::~InputCode()
{
    delete ui;
}

void InputCode::on_pushButton_cancel_clicked()
{
    emit sendClose();
}

void InputCode::on_pushButton_clicked()
{
    emit sendCode(ui->textEdit->toPlainText());
}
