#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QMovie>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>
#include <QtNetwork>
namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    ///////////////////
    bool searchboss(QString a,QString b);
    bool changeboss(QString a,QString b,QString c);
    QUdpSocket *udpSocket;
    void connect_cu_ser();
    void processTheDatagram(QByteArray datagram);
protected:
    void changeEvent(QEvent *e);
private:
    Ui::MainWindow *ui;


private slots:
    void on_actionAbout_triggered();
    void on_actionRegister_triggered();
    void on_actionSuggest_triggered();
    void on_actionChange_triggered();
    void on_actionID_triggered();
    void on_actionPhonenumber_triggered();
    //void on_actionGet_number_triggered();
    //void on_actionDenglu_triggered();
    void normal_sendmessage();
    void readPendingDatagrams();
};

#endif // MAINWINDOW_H
