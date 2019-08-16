#include "dialog2.h"
#include "ui_dialog2.h"
#include <QMovie>

dialog2::dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog2)
{
    ui->setupUi(this);
    ui->label->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->label_2->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->label_3->setScaledContents(true);
    QMovie *iconShow = new QMovie(":/new/prefix1/s5.jpg");
    ui->label_3->setMovie(iconShow);
    iconShow->start();
    //connect(this->ui->continue_2,SIGNAL(clicked()),this,SLOT(close()));
}

dialog2::~dialog2()
{
    delete ui;
}

void dialog2::changeEvent(QEvent *e)
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
