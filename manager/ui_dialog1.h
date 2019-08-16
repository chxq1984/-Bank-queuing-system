/********************************************************************************
** Form generated from reading UI file 'dialog1.ui'
**
** Created: Sun Jul 14 18:46:31 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG1_H
#define UI_DIALOG1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_dialog1
{
public:
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *dialog1)
    {
        if (dialog1->objectName().isEmpty())
            dialog1->setObjectName(QString::fromUtf8("dialog1"));
        dialog1->resize(400, 300);
        dialog1->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(dialog1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 401, 301));
        label = new QLabel(dialog1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 100, 321, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(20);
        label->setFont(font);

        retranslateUi(dialog1);

        QMetaObject::connectSlotsByName(dialog1);
    } // setupUi

    void retranslateUi(QDialog *dialog1)
    {
        dialog1->setWindowTitle(QApplication::translate("dialog1", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label->setText(QApplication::translate("dialog1", "the password has changed!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialog1: public Ui_dialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG1_H
