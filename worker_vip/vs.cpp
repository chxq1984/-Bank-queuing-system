#include "vs.h"
#include "ui_vs.h"
#include "QMovie"

VS::VS(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VS)
{
    ui->setupUi(this);
}

VS::~VS()
{
    delete ui;
}

void VS::changeEvent(QEvent *e)
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
