#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>

namespace Ui {
    class client;
}

class client : public QMainWindow {
    Q_OBJECT
public:
    client(QWidget *parent = 0);
    ~client();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::client *ui;
};

#endif // CLIENT_H
