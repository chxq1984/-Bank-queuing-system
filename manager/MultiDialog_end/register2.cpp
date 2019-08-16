#include "register2.h"
#include "ui_register2.h"
#include <QString>
#include "dialog1.h"
#include "dialog2.h"
#include <qdebug.h>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariant>


register2::register2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::register2)
{
    ui->setupUi(this);
    connect(this->ui->register2_exit,SIGNAL(clicked()),this,SLOT(close()));

}

register2::~register2()
{
    delete ui;
}

void register2::changeEvent(QEvent *e)
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

void register2::on_register2_continue_clicked()
{
    QString id = this->ui->register2_phonenumber->text();
    QString password = this->ui->register2_password->text();
    QString confirm = this->ui->register2_confirm->text();
    addvip(id,password);
         Dialog2 *r = new Dialog2(this);
         r->show();
         r->exec();
         this->show();


}


void register2::addvip(QString a,QString b)
{

    //创建表格
    QSqlQuery sql_query;



    //增添数据
    sql_query.prepare("insert into vip(name,pass)""values(:name,:pass)");
    sql_query.bindValue(":name",a);
    sql_query.bindValue(":pass",b);
    sql_query.exec();





}


void register2::on_register2_password_cursorPositionChanged(int , int )
{
    this->ui->register2_password->setEchoMode(QLineEdit::Password);
}

void register2::on_register2_confirm_cursorPositionChanged(int , int )
{
    this->ui->register2_confirm->setEchoMode(QLineEdit::Password);
}
