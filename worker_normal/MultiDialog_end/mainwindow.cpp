#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog1.h"
#include "load.h"
#include "load_2.h"
#include "change.h"
#include "help.h"
#include "register_1.h"
#include <QString>
#include <QMovie>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>
#include <iostream>
#include "about.h"

using namespace std;

QString code;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setScaledContents(true);
    QMovie *iconShow = new QMovie(":/new/prefix1/bank.PNG");
    ui->label->setMovie(iconShow);
    iconShow->start();
    connect_cu_ser();
    connect(ui->actionGet_number,SIGNAL(triggered()),this,SLOT(normal_sendmessage()));//////////1
}

bool MainWindow::searchboss(QString a,QString b)
{

    //建立并打开数据库
       QSqlDatabase database;
       database = QSqlDatabase::addDatabase("QSQLITE");
       database.setDatabaseName("boss.db");
       if (!database.open())
       {
           qDebug() << "Error: Failed to connect database." << database.lastError();
       }
       else
       {
           qDebug() << "Succeed to connect database." ;
       }

       //创建表格
       QSqlQuery sql_query;
       if(!sql_query.exec("create table boss(name text, pass text)"))
       {
           qDebug() << "Error: Fail to create table."<< sql_query.lastError();
       }
       else
       {
           qDebug() << "Table created!";
       }

       //插入数据
       sql_query.exec("INSERT INTO boss VALUES(3332, 322)");
       sql_query.exec("INSERT INTO boss VALUES(123232, 9455)");
       sql_query.exec("INSERT INTO boss VALUES(2465446, 954)");
       sql_query.exec("INSERT INTO boss VALUES(77657655, 154)");
       sql_query.exec("INSERT INTO boss VALUES(23435564, 433)");

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
                      //删除表格
                      sql_query.exec("drop table boss");
                      if(sql_query.exec())
                      {
                          qDebug() << sql_query.lastError();
                      }
                      else
                      {
                          qDebug() << "table cleared";
                      }

                      //关闭数据库
                      database.close();
                      return true;
                  }
              }
              //删除表格
              sql_query.exec("drop table boss");
              if(sql_query.exec())
              {
                  qDebug() << sql_query.lastError();
              }
              else
              {
                  qDebug() << "table cleared";
              }

              //关闭数据库
              database.close();
              return false;
          }

}

bool MainWindow::changeboss(QString a,QString b,QString c)
{
    //建立并打开数据库
       QSqlDatabase database;
       database = QSqlDatabase::addDatabase("QSQLITE");
       database.setDatabaseName("boss.db");
       if (!database.open())
       {
           qDebug() << "Error: Failed to connect database." << database.lastError();
       }
       else
       {
           qDebug() << "Succeed to connect database." ;
       }

       //创建表格
       QSqlQuery sql_query;
       if(!sql_query.exec("create table boss(name text, pass text)"))
       {
           qDebug() << "Error: Fail to create table."<< sql_query.lastError();
       }
       else
       {
           qDebug() << "Table created!";
       }

       //插入数据
       sql_query.exec("INSERT INTO boss VALUES(3332, 322)");
       sql_query.exec("INSERT INTO boss VALUES(123232, 9455)");
       sql_query.exec("INSERT INTO boss VALUES(2465446, 954)");
       sql_query.exec("INSERT INTO boss VALUES(77657655, 154)");
       sql_query.exec("INSERT INTO boss VALUES(23435564, 433)");

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
                      b=c;
                      //删除表格
                      sql_query.exec("drop table boss");
                      if(sql_query.exec())
                      {
                          qDebug() << sql_query.lastError();
                      }
                      else
                      {
                          qDebug() << "table cleared";
                      }

                      //关闭数据库
                      database.close();
                      return true;
                  }

              }
              //删除表格
              sql_query.exec("drop table boss");
              if(sql_query.exec())
              {
                  qDebug() << sql_query.lastError();
              }
              else
              {
                  qDebug() << "table cleared";
              }

              //关闭数据库
              database.close();
              return false;
          }
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

/*void MainWindow::on_actionGet_number_triggered()///////////////////2
{
    //this->hide();
    qDebug()<<"a";
    Dialog1 *r = new Dialog1(this);

    r->exec();
    this->show();
}*/

void MainWindow::on_actionPhonenumber_triggered()
{
    //this->hide();
    load *r = new load(this);
    r->show();
    r->exec();
    this->show();
}

void MainWindow::on_actionID_triggered()
{
    //this->hide();
    load_2 *r = new load_2(this);
    r->show();
    r->exec();
    this->show();
}

void MainWindow::on_actionChange_triggered()
{
    //this->hide();
    change *r = new change(this);
    r->show();
    r->exec();
    this->show();
}

void MainWindow::on_actionSuggest_triggered()
{
    //this->hide();
    help *r = new help(this);
    r->show();
    r->exec();
    this->show();
}

void MainWindow::on_actionRegister_triggered()
{
    //this->hide();
    register_1 *r = new register_1(this);
    r->show();
    r->exec();
    this->show();
}
void MainWindow::connect_cu_ser()
{
    udpSocket = new QUdpSocket(this);
    udpSocket->bind(QHostAddress("192.168.70.77"), 2222);
    connect(udpSocket, SIGNAL(readyRead()),this, SLOT(readPendingDatagrams()));
}
void MainWindow ::readPendingDatagrams()
{
    while (udpSocket->hasPendingDatagrams()) {
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());
        udpSocket->readDatagram(datagram.data(), datagram.size());
        processTheDatagram(datagram);//接收显示
    }
}
void MainWindow ::normal_sendmessage()
{
    /*Dialog1 *r = new Dialog1(this);
    r->exec();
    this->show();*/
    int fl=0;
    QByteArray datagram;
    datagram="0";
    fl= udpSocket->writeDatagram(datagram.data(),datagram.size(),QHostAddress("192.168.70.77"),3333);

}
void MainWindow::processTheDatagram(QByteArray datagram)//0#23#12haoshu 1#1shouquan
{
    QString temp=datagram;
    string ju = temp.toStdString();
    if(ju[0]=='0')
    {
        int m=2;
        code="";//////////////////3
        while(ju[m]!='#')
        {
            code+=ju[m];
            m++;
        }
        m++;//hao ma
        Dialog1 r;
        r.show();
        r.exec();

        QString number;
        while(ju[m])
        {
            number+=ju[m];
            m++;
        }

    }
}

void MainWindow::on_actionAbout_triggered()
{
    about *r=new about;
    r->show();
    r->exec();
    this->show();
}
