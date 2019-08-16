#include "dialog3.h"
#include "ui_dialog3.h"
#include <QMovie>

Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
    ui->label->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->label_2->setScaledContents(true);
    QMovie *iconShow = new QMovie(":/new/prefix1/s3.jpg");
    ui->label_2->setMovie(iconShow);
    iconShow->start();
}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Dialog3::on_pushButton_clicked()
{
    this->close();
}
