#include "dialog1.h"
#include "ui_dialog1.h"
#include <QDebug>
#include <QMovie>
#include "mainwindow.h"
#include "load.h"
#include "load_2.h"

extern QString code;
extern QString code_1;
extern QString code_2;

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
    connect(ui->exitpushButton,SIGNAL(clicked()),this,SLOT(close()));
    ui->kk->setScaledContents(true);
    QMovie *iconShow = new QMovie(":/new/prefix1/t8.gif");
    ui->kk->setMovie(iconShow);
    iconShow->start();
    flash();
    flash_1();
    flash_2();
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::changeEvent(QEvent *e)
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

void Dialog1::flash()
{
    ui->number->setText(code);
}

void Dialog1::flash_1()
{
    ui->number->setText(code);
}

void Dialog1::flash_2()
{
    ui->number->setText(code);
}
