#ifndef LOAD_2_H
#define LOAD_2_H

#include <QDialog>
#include "mainwindow.h"
#include <QtNetwork>
namespace Ui {
    class load_2;
}

class load_2 : public QDialog {
    Q_OBJECT
public:

    load_2(QWidget *parent = 0);
    ~load_2();
    QUdpSocket *udpSocket;
    void connect_cu_ser();
    bool searchvip(QString a,QString b);
    void processTheDatagram(QByteArray datagram);
    void vip_sendmessage();
protected:
    void changeEvent(QEvent *e);

private:
    Ui::load_2 *ui;


private slots:
    void on_load_2_password_cursorPositionChanged(int , int );
    void on_load_2_login_clicked();
    void readPendingDatagrams();
};

#endif // LOAD_2_H
