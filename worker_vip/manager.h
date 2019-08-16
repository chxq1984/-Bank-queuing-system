#ifndef MANAGER_H
#define MANAGER_H
#include <QUdpSocket>
#include <QDialog>

namespace Ui {
    class manager;
}

class manager : public QDialog {
    Q_OBJECT
public:
    manager(QWidget *parent = 0);
    ~manager();
    QUdpSocket *udpSocket;
    void connect_wor_ser();
    void processTheDatagram(QByteArray datagram);
    void give_vip(QByteArray datagram);
protected:
    void changeEvent(QEvent *e);
private slots:
    void readPendingDatagrams();
    void send_askmessage();
private:
    Ui::manager *ui;
};

#endif // MANAGER_H
