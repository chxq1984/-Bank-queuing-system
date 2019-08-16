#include "load_2.h"
#include "ui_load_2.h"
#include "dialog1.h"
#include "dialog6.h"
#include <QString>
#include <QMovie>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>
#include <iostream>
using namespace std;

QString code_2;

load_2::load_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::load_2)
{
    ui->setupUi(this);
    connect_cu_ser();
    connect(this->ui->load_2_exit,SIGNAL(clicked()),this,SLOT(close()));
}

load_2::~load_2()
{
    delete ui;
}

void load_2::changeEvent(QEvent *e)
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

void load_2::on_load_2_login_clicked()///////////////5
{
    QString id = this->ui->load_2_ID->text();
    QString password = this->ui->load_2_password->text();
    if(searchvip(id,password)==1)
    {vip_sendmessage();
        //Dialog1 *r = new Dialog1(this);
        //r->show();
        //r->exec();
        //this->show();
        this->close();
    }
    else
    {
        dialog6 *r1 = new dialog6(this);
        r1->show();
        r1->exec();
        this->show();
    }
}

bool load_2::searchvip(QString a,QString b)
{
      QSqlQuery sql_query;
       //查询数据
          sql_query.exec("select * from vip");
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

void load_2::on_load_2_password_cursorPositionChanged(int , int )
{
    this->ui->load_2_password->setEchoMode(QLineEdit::Password);
}
void load_2::connect_cu_ser()
{
    udpSocket = new QUdpSocket(this);
    udpSocket->bind(QHostAddress("192.168.70.77"), 2222);
    connect(udpSocket, SIGNAL(readyRead()),this, SLOT(readPendingDatagrams()));
}
void load_2::vip_sendmessage()//jie kou han su
{
    int fl=0;
    QByteArray datagram;
    datagram="1";
    fl= udpSocket->writeDatagram(datagram.data(),datagram.size(),QHostAddress("192.168.70.77"),3333);
}
void load_2 ::readPendingDatagrams()
{
    while (udpSocket->hasPendingDatagrams()) {
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());
        udpSocket->readDatagram(datagram.data(), datagram.size());
        processTheDatagram(datagram);//接收显示
    }
}
void load_2::processTheDatagram(QByteArray datagram)//0#23#12haoshu 1#1shouquan
{
    QString temp=datagram;
    string ju = temp.toStdString();
    if(ju[0]=='0')
    {
        int m=2;
        QString code;
        while(ju[m]!='#')
        {
            code+=ju[m];
            m++;
        }
        m++;//hao ma
        Dialog1 *r= new Dialog1(this);
        r->show();
        r->exec();
        //ui->number->setText(code);//!!!
        QString number;
        while(ju[m])
        {
            number+=ju[m];
            m++;//qian mian de ren shu
        }
    }
}
