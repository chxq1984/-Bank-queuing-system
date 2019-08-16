#include "dialog5.h"
#include "ui_dialog5.h"
#include <QMovie>

dialog5::dialog5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog5)
{
    ui->setupUi(this);
    ui->label->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->label_2->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    //ui->pushbutton->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->label_3->setScaledContents(true);
    QMovie *iconShow = new QMovie(":/new/prefix1/s5.jpg");
    ui->label_3->setMovie(iconShow);
    iconShow->start();
}

dialog5::~dialog5()
{
    delete ui;
}

void dialog5::changeEvent(QEvent *e)
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

void dialog5::on_pushButton_clicked()
{
    this->close();
}
