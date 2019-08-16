#include "give_right.h"
#include "ui_give_right.h"
#include <QMovie>

give_right::give_right(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::give_right)
{
    ui->setupUi(this);
    ui->agree->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->disagree->setStyleSheet("background:transparent;border-width:0;border-style:outset");
    ui->label->setScaledContents(true);
    QMovie *iconShow = new QMovie(":/new/prefix1/lu.jpg");
    ui->label->setMovie(iconShow);
    connect_wor_ser();
    connect(ui->agree,SIGNAL(clicked()),this,SLOT(send_applicate_manager()));
    connect(ui->disagree,SIGNAL(clicked()),this,SLOT(send_disapplicate_manager()));
}

give_right::~give_right()
{
    delete ui;
}

void give_right::changeEvent(QEvent *e)
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
void give_right::connect_wor_ser()
{
    udpSocket1 = new QUdpSocket(this);
    udpSocket1->bind(QHostAddress("192.168.70.78"), 4444);
    connect(udpSocket1, SIGNAL(readyRead()),this, SLOT(readPendingDatagrams()));
}
void give_right ::readPendingDatagrams()
{
    while (udpSocket1->hasPendingDatagrams()) {
        QByteArray datagram;
        datagram.resize(udpSocket1->pendingDatagramSize());
        udpSocket1->readDatagram(datagram.data(), datagram.size());
        QString ju=datagram;
    }
}
void give_right::send_applicate_manager()
{
    int fl=0;
    QByteArray datagram;
    datagram="vip_1";
    fl= udpSocket1->writeDatagram(datagram.data(),datagram.size(),QHostAddress("192.168.70.77"),3333);
}
void give_right::send_disapplicate_manager()
{
    int fl=0;
    QByteArray datagram;
    datagram="vip_0";
    fl= udpSocket1->writeDatagram(datagram.data(),datagram.size(),QHostAddress("192.168.70.77"),3333);
}
