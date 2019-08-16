#include "dialog2.h"
#include "ui_dialog2.h"
#include <QMovie>

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    ui->label->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->label_2->setScaledContents(true);
    QMovie *iconShow = new QMovie(":/new/prefix1/s4.jpg");
    ui->label_2->setMovie(iconShow);
    iconShow->start();
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::changeEvent(QEvent *e)
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



void Dialog2::on_pushButton_clicked()
{
    this->close();
}
