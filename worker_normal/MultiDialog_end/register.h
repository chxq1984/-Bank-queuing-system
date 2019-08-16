#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>

namespace Ui {
    class register;
}

class register : public QDialog {
    Q_OBJECT
public:
    register(QWidget *parent = 0);
    ~register();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::register *ui;
};

#endif // REGISTER_H
