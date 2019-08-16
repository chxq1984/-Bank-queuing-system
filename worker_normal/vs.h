#ifndef VS_H
#define VS_H

#include <QDialog>

namespace Ui {
    class VS;
}

class VS : public QDialog {
    Q_OBJECT
public:
    VS(QWidget *parent = 0);
    ~VS();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::VS *ui;
};

#endif // VS_H
