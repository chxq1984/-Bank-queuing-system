/********************************************************************************
** Form generated from reading UI file 'employee.ui'
**
** Created: Sun Jul 14 20:04:35 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEE_H
#define UI_EMPLOYEE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_employee
{
public:
    QLabel *label;
    QPushButton *the_next;
    QPushButton *exit;
    QPushButton *openBtn;

    void setupUi(QDialog *employee)
    {
        if (employee->objectName().isEmpty())
            employee->setObjectName(QString::fromUtf8("employee"));
        employee->resize(500, 350);
        employee->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(employee);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 501, 351));
        the_next = new QPushButton(employee);
        the_next->setObjectName(QString::fromUtf8("the_next"));
        the_next->setGeometry(QRect(70, 60, 371, 171));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(72);
        the_next->setFont(font);
        exit = new QPushButton(employee);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(330, 260, 121, 61));
        exit->setStyleSheet(QString::fromUtf8("font: 75 20pt \"Bitstream Charter\";\n"
""));
        openBtn = new QPushButton(employee);
        openBtn->setObjectName(QString::fromUtf8("openBtn"));
        openBtn->setGeometry(QRect(0, 10, 41, 27));

        retranslateUi(employee);

        QMetaObject::connectSlotsByName(employee);
    } // setupUi

    void retranslateUi(QDialog *employee)
    {
        employee->setWindowTitle(QApplication::translate("employee", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        the_next->setText(QApplication::translate("employee", "the next", 0, QApplication::UnicodeUTF8));
        exit->setText(QApplication::translate("employee", "break", 0, QApplication::UnicodeUTF8));
        openBtn->setText(QApplication::translate("employee", "open", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class employee: public Ui_employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_H
