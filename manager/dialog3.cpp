#include "dialog3.h"
#include "ui_dialog3.h"
#include "dialog1.h"
#include "dialog2.h"
#include <QMovie>

dialog3::dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog3)
{
    ui->setupUi(this);
    ui->agree->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->disagree->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->label->setScaledContents(true);
    QMovie *iconShow = new QMovie(":/new/prefix1/lu.jpg");
    ui->label->setMovie(iconShow);
}

dialog3::~dialog3()
{
    delete ui;
}

void dialog3::changeEvent(QEvent *e)
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




