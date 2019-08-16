#ifndef DIALOG4_H
#define DIALOG4_H

#include <QDialog>

namespace Ui {
    class dialog4;
}

class dialog4 : public QDialog {
    Q_OBJECT
public:
    dialog4(QWidget *parent = 0);
    ~dialog4();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::dialog4 *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG4_H
