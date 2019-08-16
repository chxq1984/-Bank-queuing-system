#include "change.h"
#include "ui_change.h"
#include "dialog1.h"
#include "dialog2.h"
#include <QString>
#include <QDebug>
#include <QMovie>

change::change(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change)
{
    ui->setupUi(this);
    connect(this->ui->change_exit,SIGNAL(clicked()),this,SLOT(close()));
}

change::~change()
{
    delete ui;
}

void change::changeEvent(QEvent *e)
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

void change::on_change_2_clicked()
{
    QString id = this->ui->zhanghao->text();
    QString old = this->ui->jiumima->text();
    QString xin = this->ui->xinmima->text();
    QString confirm = this->ui->xinmimaqueren->text();
    if(changeboss(id,old,xin))
    {
    if(confirm == xin && xin !=NULL)
      {
            dialog1 *r = new dialog1(this);
            r->show();
            r->exec();
            this->show();
            this->close();
      }
    else
      {
            dialog2 *r1 = new dialog2(this);
            r1->show();
            r1->exec();
            this->show();
      }
    }
    else
        this->close();
}



bool change::changeboss(QString a,QString b,QString c)
{

       QSqlQuery sql_query;
       //查询数据
          sql_query.exec("select * from boss");
          if(!sql_query.exec())
          {
              qDebug()<<sql_query.lastError();
          }
          else
          {
              while(sql_query.next())
              {

                  QString name = sql_query.value(0).toString();
                  QString pass = sql_query.value(1).toString();
                  if(QString::compare(name,a)==0&&QString::compare(pass,b)==0)
                  {
                      sql_query.prepare("update boss set pass=? where name=?");
                      sql_query.addBindValue(c);
                      sql_query.addBindValue(a);
                      sql_query.exec();


                      return true;
                  }

              }

              return false;
          }
}
