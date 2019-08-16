#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QDialog>
#include <QtNetwork>


#include <QWidget>
#include <QStringList>
#include <QList>
#include <QFileDialog>
#include <QDesktopServices>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLCDNumber>
#include <QTime>
#include <QIcon>
#include <QSound>
#include <QMenu>
#include <QSystemTrayIcon>
#include <QSize>
#include <QSizePolicy>
#include <QPainter>
#include <QPoint>
#include <QPropertyAnimation>
#include <QMouseEvent>
#include <QRect>
#include <QCloseEvent>
#include <QMessageBox>
#include <QAction>
#include <phonon>


namespace Ui {
    class employee;
}

class employee : public QDialog {
    Q_OBJECT
public:
    employee(QWidget *parent = 0);
    ~employee();
    void connect_wor_ser();
    QUdpSocket *udpSocket;
protected:
    void changeEvent(QEvent *e);

private:
    Ui::employee *ui;

    QLCDNumber *timeLcd;      //  ʱʾ   LCD
        Phonon::SeekSlider *seekSlider;      //  ʱ   ýĲλ
        Phonon::VolumeSlider *volumeSlider;    //

        QList<Phonon::MediaSource> sources;
        Phonon::MediaObject *mediaObject;       // ý
        Phonon::AudioOutput *audioOutput;       // Ƶ豸
        Phonon::MediaObject *metaInfomationResolver;    // ָǰƵļ

        QPoint lastPos;     // ƶ һλ
        QPoint newPos;       // ƶ ǰλ

        //  ϵͳͼ
        QSystemTrayIcon *trayicon;
        QMenu *trayiconMenu;

        //  ϵͳ̵Ķ˵
        QAction *playAction;
        QAction *pauseAction;

        QAction *ShowAction;
        QAction *hideTrayIconAction;
        QAction *exit;

        bool bSize;
        void createLayout();


private slots:
    void on_openBtn_clicked();
    void on_the_next_clicked();
    void readPendingDatagrams();
    void send_asknew();

    void addFiles();
    void playOrPause();
};

#endif // EMPLOYEE_H
