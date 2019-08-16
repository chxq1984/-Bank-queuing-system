#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "change.h"
#include "employee.h"
#include "manager.h"
#include "dialog2.h"
#include <QString>
#include <QMovie>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>
#include "dialog3.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this->ui->exit,SIGNAL(clicked()),this,SLOT(close()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_change_clicked()
{
    change *r = new change(this);
    r->show();
    r->exec();
    this->show();
}

void MainWindow::on_employee_clicked()
{
    QString id = this->ui->employee_ID->text();
    QString password = this->ui->employee_password->text();
    if(searchboss(id,password))
    {
    employee *r = new employee(this);
    r->show();
    r->exec();
    this->show();
    }
    else
    {
       dialog2 *r=new dialog2;
       r->show();
       r->exec();
   }

}


void MainWindow::on_manger_clicked()
{
    QString id = this->ui->employee_ID->text();
    QString password = this->ui->employee_password->text();
    if(searchboss(id,password))
    {
    manager *r = new manager(this);
    r->show();
    r->exec();
    this->show();
     }
    else
    {
       dialog2 *r=new dialog2;
       r->show();
       r->exec();
    }
}

bool MainWindow::searchboss(QString a,QString b)
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


                      return true;
                  }
              }

              return false;
          }


}
