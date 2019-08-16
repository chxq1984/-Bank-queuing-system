#ifndef DIALOG3_H
#define DIALOG3_H

#include <QDialog>
#include <qdebug.h>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariant>

namespace Ui {
    class dialog3;
}

class dialog3 : public QDialog {
    Q_OBJECT
public:
    dialog3(QWidget *parent = 0);

    ~dialog3();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::dialog3 *ui;

};

#endif // DIALOG3_H
