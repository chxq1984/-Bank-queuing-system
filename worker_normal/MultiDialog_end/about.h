#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>

namespace Ui {
    class about;
}

class about : public QDialog {
    Q_OBJECT
public:
    about(QWidget *parent = 0);
    ~about();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::about *ui;
};

#endif // ABOUT_H
