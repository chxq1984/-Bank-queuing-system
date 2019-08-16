#ifndef DIALOG5_H
#define DIALOG5_H

#include <QDialog>

namespace Ui {
    class dialog5;
}

class dialog5 : public QDialog {
    Q_OBJECT
public:
    dialog5(QWidget *parent = 0);
    ~dialog5();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::dialog5 *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG5_H
