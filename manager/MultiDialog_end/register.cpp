#include "register.h"
#include "ui_register.h"

register::register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::register)
{
    ui->setupUi(this);
}

register::~register()
{
    delete ui;
}

void register::changeEvent(QEvent *e)
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
