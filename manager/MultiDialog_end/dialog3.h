#ifndef DIALOG3_H
#define DIALOG3_H

#include <QDialog>

namespace Ui {
    class Dialog3;
}

class Dialog3 : public QDialog {
    Q_OBJECT
public:
    Dialog3(QWidget *parent = 0);
    ~Dialog3();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Dialog3 *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG3_H
