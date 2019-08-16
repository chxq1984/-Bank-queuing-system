#ifndef LOAD_H
#define LOAD_H

#include <QDialog>
#include "mainwindow.h"
#include <QtNetwork>
namespace Ui {
    class load;
}

class load : public QDialog {
    Q_OBJECT
public:
    load(QWidget *parent = 0);
    ~load();
    QUdpSocket *udpSocket;
    void connect_cu_ser();
    bool searchvip(QString a,QString b);
    void processTheDatagram(QByteArray datagram);
    void vip_sendmessage();
protected:
    void changeEvent(QEvent *e);

private:
    Ui::load *ui;


private slots:
    void on_load_password_cursorPositionChanged(int , int );
    void on_load_login_clicked();
    void readPendingDatagrams();
};

#endif // LOAD_H
