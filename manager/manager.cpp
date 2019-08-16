#include "manager.h"
#include "ui_manager.h"
#include <QUdpSocket>
#include "give_right.h"
#include <QMovie>

manager::manager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manager)
{
    ui->setupUi(this);
    ui->textBrowser->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->pushButton->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->label->setScaledContents(true);
    QMovie *iconShow = new QMovie(":/new/prefix1/s3.jpg");
    ui->label->setMovie(iconShow);
    iconShow->start();
    connect_wor_ser();
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(send_askmessage()));
}

manager::~manager()
{
    delete ui;
}

void manager::changeEvent(QEvent *e)
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
void manager::connect_wor_ser()
{
    udpSocket = new QUdpSocket(this);
    udpSocket->bind(QHostAddress("192.168.70.77"), 4444);
    connect(udpSocket, SIGNAL(readyRead()),this, SLOT(readPendingDatagrams()));
}
void manager ::readPendingDatagrams()
{
    while (udpSocket->hasPendingDatagrams()) {
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());
        udpSocket->readDatagram(datagram.data(), datagram.size());
        QString ju=datagram;
        if(ju.startsWith("5;"))
        processTheDatagram(datagram);//接收显示
        else
        give_vip(datagram);//shou quan
    }
}
void manager ::processTheDatagram(QByteArray datagram)
{
         QString ju=datagram;
         QString f = ";";
         int a = ju.indexOf(f,3);
         int b = ju.indexOf(f,a+1);
         int c = ju.indexOf(f,b+1);

         QString tmp1 = ju.mid(3,a-2);
         int order_ord = tmp1.toInt();
         QString tmp2 = ju.mid(a+1,b-a-1);
         int order_VIP = tmp2.toInt();
         QString tmp3 = ju.mid(b+1,c-b-1);
         int num_ord = tmp3.toInt();
         QString tmp4 = ju.mid(c+1);
         int num_VIP = tmp4.toInt();

         /*
总排队人数： 人
普通客户排队人数： 人
VIP客户排队人数： 人

已受理总人数： 人
已受理普通客户： 人
已受理VIP客户： 人

当前未受理总人数： 人
当前未受理普通客户： 人
当前未受理VIP客户： 人
           */

         QString i=QString::fromUtf8("人");
         QString s1=QString::fromUtf8("总排队人数：");
         int num1 = order_ord + order_VIP;
         QString s2=QString::fromUtf8("普通客户排队人数：");
         QString s3=QString::fromUtf8("VIP客户排队人数：");
         QString s4=QString::fromUtf8("已受理总人数：");
         int num4 = num1-num_ord-num_VIP;
         QString s5=QString::fromUtf8("已受理普通客户：");
         int num5 = order_ord - num_ord;
         QString s6=QString::fromUtf8("已受理VIP客户：");
         int num6 = order_VIP - num_VIP;
         QString s7=QString::fromUtf8("当前未受理总人数： ");
         int num7 = num_ord + num_VIP;
         QString s8=QString::fromUtf8("当前未受理普通客户： ");
         QString s9=QString::fromUtf8("当前未受理VIP客户：");
         QString string1 = QString("%1  %2%3 \n%4  %5%6 \n%7  %8%9\n\n").arg(s1).arg(num1).arg(i).arg(s2).arg(order_ord).arg(i).arg(s3).arg(order_VIP).arg(i);
         QString string2 = QString("%1  %2%3 \n%4  %5%6 \n%7  %8%9\n\n").arg(s4).arg(num4).arg(i).arg(s5).arg(num5).arg(i).arg(s6).arg(num6).arg(i);
         QString string3 = QString("%1  %2%3 \n%4  %5%6 \n%7  %8%9").arg(s7).arg(num7).arg(i).arg(s8).arg(num_ord).arg(i).arg(s9).arg(num_VIP).arg(i);
         QString string = QString("%1").arg(string3);

         ui->textBrowser->setText(string);//xian shi shua xing de dao de xin xi
}
void manager::give_vip(QByteArray datagram)
{
    give_right *r = new give_right (this);
    r->show();
    r->exec();
}
void manager::send_askmessage()
{
    int fl=0;
    QByteArray datagram;
    datagram="2";
    fl= udpSocket->writeDatagram(datagram.data(),datagram.size(),QHostAddress("192.168.70.77"),3333);
}
