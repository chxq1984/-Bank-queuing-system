#include "dialog4.h"
#include "ui_dialog4.h"
#include <QMovie>

dialog4::dialog4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog4)
{
    ui->setupUi(this);
    ui->label->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->label_2->setScaledContents(true);
    QMovie *iconShow = new QMovie(":/new/prefix1/s6.jpg");
    ui->label_2->setMovie(iconShow);
    iconShow->start();
}

dialog4::~dialog4()
{
    delete ui;
}

void dialog4::changeEvent(QEvent *e)
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

void dialog4::on_pushButton_clicked()
{
    this->close();
}
