#ifndef DIALOG6_H
#define DIALOG6_H

#include <QDialog>

namespace Ui {
    class dialog6;
}

class dialog6 : public QDialog {
    Q_OBJECT
public:
    dialog6(QWidget *parent = 0);
    ~dialog6();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::dialog6 *ui;

private slots:
    void on_change_again_clicked();
};

#endif // DIALOG6_H
