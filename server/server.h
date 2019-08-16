#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include <QtNetwork>
namespace Ui {
    class server;
}

class server : public QMainWindow {
    Q_OBJECT
public:
    server(QWidget *parent = 0);
    ~server();
    QUdpSocket *udpSocket;
    void connect_server();
    void processTheDatagram(QByteArray datagram);
    int num_ord;//普通排队人数
    int ord_ord;//普通牌号
    int num_VIP;
    int ord_VIP;
    int num_sum;
    int finish_normal;
    int finish_vip;
    void initNum();
    void reply_ordinary();//返回普通人的号码
    void reply_VIP();//返回vip的号码
    void reply_next(QByteArray datagram);//返回到达哪个窗口办理
    void reply_information();//返回统计信息
    void give_vip(QString id);//得到身份证信息并传给经理
    void give_right(QString right);//得到授权信息并传给客户
private:
    Ui::server *ui;
private slots:
    void readPendingDatagrams();
};

#endif // SERVER_H
