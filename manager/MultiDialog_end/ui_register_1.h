/********************************************************************************
** Form generated from reading UI file 'register_1.ui'
**
** Created: Sat Jul 13 06:54:06 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_1_H
#define UI_REGISTER_1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_register_1
{
public:
    QPushButton *OK;
    QLineEdit *VIPregister;
    QLabel *label;

    void setupUi(QDialog *register_1)
    {
        if (register_1->objectName().isEmpty())
            register_1->setObjectName(QString::fromUtf8("register_1"));
        register_1->resize(460, 289);
        register_1->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/t3.jpg);"));
        OK = new QPushButton(register_1);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(260, 200, 93, 27));
        VIPregister = new QLineEdit(register_1);
        VIPregister->setObjectName(QString::fromUtf8("VIPregister"));
        VIPregister->setGeometry(QRect(170, 100, 211, 31));
        label = new QLabel(register_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 100, 91, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(14);
        label->setFont(font);

        retranslateUi(register_1);

        QMetaObject::connectSlotsByName(register_1);
    } // setupUi

    void retranslateUi(QDialog *register_1)
    {
        register_1->setWindowTitle(QApplication::translate("register_1", "Dialog", 0, QApplication::UnicodeUTF8));
        OK->setText(QApplication::translate("register_1", "OK", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("register_1", "ID number", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class register_1: public Ui_register_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_1_H
