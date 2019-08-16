#include "register_1.h"
#include "ui_register_1.h"
#include "register2.h"
#include "dialog3.h"
#include <QString>
#include <QDebug>
#include <iostream>
using namespace std;
register_1::register_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::register_1)
{
    ui->setupUi(this);
    connect(this->ui->OK, SIGNAL(clicked()), this, SLOT(get_new_VIP_id()));
    connect_cu_ser();

    //connect(ui->pushButton_VIP, SIGNAL(clicked()), this, SLOT(slot_VIP()));
    //connect(ui->close,SIGNAL(clicked()),this,SLOT(close()));
}

register_1::~register_1()
{
    delete ui;
}

void register_1::changeEvent(QEvent *e)
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
void register_1 ::connect_cu_ser()
{
    udpSocket = new QUdpSocket(this);
    udpSocket->bind(QHostAddress("192.168.70.77"), 2222);
    connect(udpSocket, SIGNAL(readyRead()),this, SLOT(readPendingDatagrams()));
}
void register_1 ::readPendingDatagrams()
{
    while (udpSocket->hasPendingDatagrams()) {
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());
        udpSocket->readDatagram(datagram.data(), datagram.size());
        processTheDatagram(datagram);//接收显示
    }
}
void register_1::processTheDatagram(QByteArray datagram)//0#23#12haoshu 1#1shouquan
{
    QString temp=datagram;
    //string ju = temp.toStdString();
    if(temp[0]=='1')
    {
        if(temp[2]=='1')
            set_newvip(1);
        else
            set_newvip(0);
    }
}
void register_1::set_newvip(int flag)//tan chu shi fou shou quan
{
    if(flag==1)
    {
        register2 *r = new register2(this);
        r->show();
        r->exec();
        this->show();
    }
    else
    {
        Dialog3 *r1 = new Dialog3(this);
        r1->show();
        r1->exec();
        this->show();
    }

}

/*void register_1::on_OK_clicked()
{
    QString id = this->ui->VIPregister->text();
    NV_sendmessage(id);
}*/
void register_1::NV_sendmessage(QString temp)
{
    int fl=0;
    QByteArray datagram;
    datagram=temp.toLatin1();
    fl= udpSocket->writeDatagram(datagram.data(),datagram.size(),QHostAddress("192.168.70.77"),3333);
    qDebug()<<fl;
}

void register_1::get_new_VIP_id()
{
    QString inf = this->ui->VIPregister->text();
    NV_sendmessage(inf);
}
