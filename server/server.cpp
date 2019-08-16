#include "server.h"
#include "ui_server.h"
#include <iostream>
using namespace std;
server::server(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::server)
{
    ui->setupUi(this);
    connect_server();
    finish_vip=finish_normal=0;
    initNum();
}

server::~server()
{
    delete ui;
}

void server ::initNum()
{
    num_ord =0;  //普通排队人数
    ord_ord=0;  //普通牌号
    num_VIP=0;
    ord_VIP= 0;
    num_sum=0;
}
//ʼ׽
void server ::connect_server()
{
    udpSocket = new QUdpSocket(this);
    udpSocket->bind(QHostAddress("192.168.70.77"), 3333);
    connect(udpSocket, SIGNAL(readyRead()),this, SLOT(readPendingDatagrams()));
}

void server ::readPendingDatagrams()
{
    while (udpSocket->hasPendingDatagrams()) {
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());
        udpSocket->readDatagram(datagram.data(), datagram.size());
        processTheDatagram(datagram);//ʾ
    }
}

void server ::processTheDatagram(QByteArray datagram)
{
    QString tmp;
    QString ju=datagram;
    int length=ju.length();
    if(length>10)
        give_vip(ju);
    else
    {
    tmp = ju.at(0);
    if(tmp=="v")
    {
        give_right(ju);
    }
    else
    {
    //int temp =tmp.toInt();
        int temp;
        if(tmp=="0")
            temp=0;
        else if(tmp=="1")
            temp=1;
        else if(tmp=="2")
            temp=2;
        else if(tmp=="A"||tmp=="B"||tmp=="C"||tmp=="D")
            temp=3;
    switch(temp)
    {
      case 0 : reply_ordinary();
            break;
      case 1 : reply_VIP();
            break;
      case 2 : reply_information();
            break;
      case 3: reply_next(datagram);
            break;
    }
    }
    }

}
void server::give_vip(QString id)
{
    int fl=0;
    QByteArray qarray = id.toLatin1();
    fl = udpSocket->writeDatagram(qarray, qarray.size(),QHostAddress("192.168.70.77"),4444);

}

void server ::reply_ordinary()
{
    finish_normal++;
    this->ord_ord ++;
    //this->num_sum = this->num_ord + this->num_VIP;
    this->num_sum++;
    /*QString i=QString::fromUtf8("普通客户取号：");
    QString j=QString::fromUtf8("号。");
    ui->text_inf->append(QString("%1%2%3").arg(i).arg(this->ord_ord).arg(j));
    int fl=0;
    QString k = QString("1;%1;%2").arg(this->ord_ord).arg(num_sum);
    QByteArray qarray = k.toLatin1();
    fl = udpSocket->writeDatagram(qarray, qarray.size(),QHostAddress::LocalHost,2222);
    */
    QString k="0#";
    k+=QString::number(ord_ord);
    k+="#";
    k+=QString::number(num_ord);
    QByteArray qarray = k.toLatin1();
    int m=0;
    m=udpSocket->writeDatagram(qarray, qarray.size(),QHostAddress("192.168.70.83"),2222);
    num_ord ++;
}

void server ::reply_VIP()
{
    finish_vip++;
    this->ord_VIP ++;
    //this->num_sum = this->num_ord + this->num_VIP;
    this->num_sum++;
    /*QString i=QString::fromUtf8("VIP客户取号：");
    QString j=QString::fromUtf8("号。");
    ui->text_inf->append(QString("%1%2%3").arg(i).arg(this->ord_VIP).arg(j));
    int fl=0;
    QString k = QString("2;%1;%2").arg(this->ord_VIP).arg(num_VIP);
    QByteArray qarray = k.toLatin1();
    fl = udpSocket->writeDatagram(qarray, qarray.size(),QHostAddress::LocalHost,2222);
    */
    QString k="0#";
    k+=QString::number(ord_VIP);
    k+="#";
    k+=QString::number(num_VIP);
    QByteArray qarray = k.toLatin1();
    udpSocket->writeDatagram(qarray, qarray.size(),QHostAddress("192.168.70.83"),2222);
    this->num_VIP ++;
}

void server ::reply_next(QByteArray datagram)
{
    QString temp;
    temp = QString(datagram);
    string s = temp.toStdString();
    if(s[0]=='A'||s[0]=='B'||s[0]=='C')
    {
        int a = this->ord_ord-this->num_ord +1;
        QString i=QString::fromUtf8("请客户");
        QString j=QString::number(a);
        QString k=QString::fromUtf8("号到");
        QString l=temp;
        QString m=QString::fromUtf8("号窗口办理业务");
        ui->text_inf->append(QString("%1%2%3%4%5").arg(i).arg(j).arg(k).arg(l).arg(m));
        num_ord--;
        if(num_ord<=0)
            num_ord=0;
    }
    else
    {
        int a=this->ord_VIP-this->num_VIP+1;
        QString i=QString::fromUtf8("请VIP客户");
        QString j=QString::number(a);
        QString k=QString::fromUtf8("号到");
        QString l=temp;
        QString m=QString::fromUtf8("号窗口办理业务");
        ui->text_inf->append(QString("%1%2%3%4%5").arg(i).arg(j).arg(k).arg(l).arg(m));
        num_VIP--;
        if(num_VIP<=0)
            num_VIP=0;
    }
    num_sum--;
    if(num_sum<=0)
        num_sum=0;
    /*int a =0;
    QString k;
    if(this->num_VIP > 0)
    {
        a=this->ord_VIP-this->num_VIP+1;
        k = QString("32;%1").arg(a);
        QString i=QString::fromUtf8("请VIP客户 ");
        QString j=QString::fromUtf8(" 号到柜台办理业务。");
        ui->text_inf->append(QString("%1%2%3").arg(i).arg(a).arg(j));


        QString k_client = QString("32;%1").arg(this->ord_VIP);
        QByteArray qarray_client = k_client.toLatin1();
        udpSocket->writeDatagram(qarray_client, qarray_client.size(),QHostAddress::LocalHost,2222);

    }
    else if(this->num_ord >0)
    {
             a = this->ord_ord-this->num_ord +1;
             k = QString("31;%1").arg(a);
             QString i=QString::fromUtf8("ͨ请普通客户");
             QString j=QString::fromUtf8("号到柜台办理业务。");
             ui->text_inf->append(QString("%1%2%3").arg(i).arg(a).arg(j));

             QString k_client = QString("31;%1").arg(this->ord_ord);
             QByteArray qarray_client = k_client.toLatin1();
             udpSocket->writeDatagram(qarray_client, qarray_client.size(),QHostAddress::LocalHost,2222);

    }
    else if (this->num_VIP == 0 && this->num_ord ==0)
    {
                  a=0;
                  k = QString("3;0");
                  ui->text_inf->append(QString::fromUtf8("无号可取！"));
    }


        int fl=0;
        QByteArray qarray = k.toLatin1();
        fl = udpSocket->writeDatagram(qarray, qarray.size(),QHostAddress::LocalHost,5555);
        if(fl==-1)
        {
            ui->text_inf->append(QString::fromUtf8("叫号回复发送失败！"));
        }
        else if(fl>0)
       {
            ui->text_inf->append(QString::fromUtf8("叫号回复发送成功！"));
        }*/

}
void server ::reply_information()
{
    QString k = QString("5;%1;%2;%3;%4").arg(this->ord_ord).arg(this->ord_VIP).arg(this->num_ord).arg(this->num_VIP);
    int fl=0;
    QByteArray qarray = k.toLatin1();
    fl = udpSocket->writeDatagram(qarray, qarray.size(),QHostAddress("192.168.70.77"),4444);
}
void server::give_right(QString right)
{
    string s = right.toStdString();
    QString k;
    if(s=="vip_1")
    {
        k = "1#1";
    }
    else if(s=="vip_0")
    {
        k="1#0";
    }
        int fl=0;
        QByteArray qarray = k.toLatin1();
        fl = udpSocket->writeDatagram(qarray, qarray.size(),QHostAddress("192.168.70.83"),1111);


}
