/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created: Sun Jul 14 18:49:53 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_dialog2
{
public:
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *dialog2)
    {
        if (dialog2->objectName().isEmpty())
            dialog2->setObjectName(QString::fromUtf8("dialog2"));
        dialog2->resize(400, 300);
        dialog2->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(dialog2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 401, 301));
        label = new QLabel(dialog2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 120, 251, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(dialog2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 180, 221, 41));
        label_2->setFont(font);

        retranslateUi(dialog2);

        QMetaObject::connectSlotsByName(dialog2);
    } // setupUi

    void retranslateUi(QDialog *dialog2)
    {
        dialog2->setWindowTitle(QApplication::translate("dialog2", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label->setText(QApplication::translate("dialog2", "Authentication failed", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dialog2", "please login again", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialog2: public Ui_dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H
