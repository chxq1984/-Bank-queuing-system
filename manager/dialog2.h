#ifndef DIALOG2_H
#define DIALOG2_H

#include <QDialog>

namespace Ui {
    class dialog2;
}

class dialog2 : public QDialog {
    Q_OBJECT
public:
    dialog2(QWidget *parent = 0);
    ~dialog2();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::dialog2 *ui;
};

#endif // DIALOG2_H
