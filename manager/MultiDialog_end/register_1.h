#ifndef REGISTER_1_H
#define REGISTER_1_H

#include <QDialog>
#include <QtNetwork>
namespace Ui {
    class register_1;
}

class register_1 : public QDialog {
    Q_OBJECT
public:
    register_1(QWidget *parent = 0);
    ~register_1();
    QUdpSocket *udpSocket;
    void connect_cu_ser();
    void processTheDatagram(QByteArray datagram);
    void set_newvip(int flag);
protected:
    void changeEvent(QEvent *e);

private:
    Ui::register_1 *ui;


private slots:
    //void on_OK_clicked();
    void readPendingDatagrams();
    void NV_sendmessage(QString temp);
    void get_new_VIP_id();
};

#endif // REGISTER_1_H
