#include "dialog1.h"
#include "ui_dialog1.h"
#include <QMovie>

dialog1::dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog1)
{
    ui->setupUi(this);
    ui->label->setStyleSheet("background:transparent;border-width:0;border-style:outset");


    ui->label_2->setScaledContents(true);
    QMovie *iconShow = new QMovie(":/new/prefix1/s6.jpg");
    ui->label_2->setMovie(iconShow);
    iconShow->start();
}

dialog1::~dialog1()
{
    delete ui;
}

void dialog1::changeEvent(QEvent *e)
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
