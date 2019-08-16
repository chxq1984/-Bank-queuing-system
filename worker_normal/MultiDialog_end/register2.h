#ifndef REGISTER2_H
#define REGISTER2_H

#include <QDialog>

namespace Ui {
    class register2;
}

class register2 : public QDialog {
    Q_OBJECT
public:
    register2(QWidget *parent = 0);
    void addvip(QString a,QString b);
    ~register2();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::register2 *ui;

private slots:
    void on_register2_confirm_cursorPositionChanged(int , int );
    void on_register2_password_cursorPositionChanged(int , int );
    void on_register2_continue_clicked();
};

#endif // REGISTER2_H
