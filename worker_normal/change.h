#ifndef CHANGE_H
#define CHANGE_H

#include <QDialog>
#include <qdebug.h>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariant>

namespace Ui {
    class change;
}

class change : public QDialog {
    Q_OBJECT
public:
    change(QWidget *parent = 0);
    bool changeboss(QString a,QString b,QString c);
    ~change();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::change *ui;

private slots:
    void on_change_2_clicked();
};

#endif // CHANGE_H
