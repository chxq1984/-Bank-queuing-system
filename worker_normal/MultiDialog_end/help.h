#ifndef HELP_H
#define HELP_H

#include <QDialog>

namespace Ui {
    class help;
}

class help : public QDialog {
    Q_OBJECT
public:
    help(QWidget *parent = 0);
    ~help();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::help *ui;
};

#endif // HELP_H
