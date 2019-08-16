#include "dialog6.h"
#include "ui_dialog6.h"
#include "load.h"

dialog6::dialog6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog6)
{
    ui->setupUi(this);
    connect(this->ui->change_exit,SIGNAL(clicked()),this,SLOT(close()));
    ui->label->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->label_2->setStyleSheet("background:transparent;border-width:0;border-style:outset");
}

dialog6::~dialog6()
{
    delete ui;
}

void dialog6::changeEvent(QEvent *e)
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

void dialog6::on_change_again_clicked()
{
    //this->close();
    //load *r = new load(this);
    //r->show();
    //r->exec();
    //this->show();
    this->close();
}
