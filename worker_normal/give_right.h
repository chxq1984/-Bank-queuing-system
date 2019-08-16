#ifndef GIVE_RIGHT_H
#define GIVE_RIGHT_H

#include <QDialog>
#include <QtNetwork>
namespace Ui {
    class give_right;
}

class give_right : public QDialog {
    Q_OBJECT
public:
    give_right(QWidget *parent = 0);
    ~give_right();
    QUdpSocket *udpSocket1;
    void connect_wor_ser();
    void processTheDatagram(QByteArray datagram);
protected:
    void changeEvent(QEvent *e);
private slots:
    void readPendingDatagrams();
    void send_applicate_manager();
    void send_disapplicate_manager();
private:
    Ui::give_right *ui;
};

#endif // GIVE_RIGHT_H
