#ifndef DIALOG1_H
#define DIALOG1_H

#include <QDialog>

namespace Ui {
    class dialog1;
}

class dialog1 : public QDialog {
    Q_OBJECT
public:
    dialog1(QWidget *parent = 0);
    ~dialog1();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::dialog1 *ui;
};

#endif // DIALOG1_H
