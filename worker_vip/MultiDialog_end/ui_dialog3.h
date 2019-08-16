/********************************************************************************
** Form generated from reading UI file 'dialog3.ui'
**
** Created: Sun Jul 14 08:00:52 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG3_H
#define UI_DIALOG3_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog3
{
public:
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *Dialog3)
    {
        if (Dialog3->objectName().isEmpty())
            Dialog3->setObjectName(QString::fromUtf8("Dialog3"));
        Dialog3->resize(400, 300);
        Dialog3->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(Dialog3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 401, 301));
        label = new QLabel(Dialog3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 70, 231, 121));
        label->setStyleSheet(QString::fromUtf8("font: 28pt \"Bitstream Charter\";"));

        retranslateUi(Dialog3);

        QMetaObject::connectSlotsByName(Dialog3);
    } // setupUi

    void retranslateUi(QDialog *Dialog3)
    {
        Dialog3->setWindowTitle(QApplication::translate("Dialog3", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label->setText(QApplication::translate("Dialog3", "register failed", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog3: public Ui_Dialog3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG3_H
