/********************************************************************************
** Form generated from reading UI file 'dialog5.ui'
**
** Created: Sun Jul 14 08:47:46 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG5_H
#define UI_DIALOG5_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_dialog5
{
public:
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *dialog5)
    {
        if (dialog5->objectName().isEmpty())
            dialog5->setObjectName(QString::fromUtf8("dialog5"));
        dialog5->resize(400, 300);
        dialog5->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(dialog5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 401, 301));
        label = new QLabel(dialog5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 90, 171, 61));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Bitstream Charter\";\n"
"color: rgb(0, 85, 255);"));
        label_2 = new QLabel(dialog5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 160, 341, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(16);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));

        retranslateUi(dialog5);

        QMetaObject::connectSlotsByName(dialog5);
    } // setupUi

    void retranslateUi(QDialog *dialog5)
    {
        dialog5->setWindowTitle(QApplication::translate("dialog5", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label->setText(QApplication::translate("dialog5", "change failed", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dialog5", "Because the passwords are different ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialog5: public Ui_dialog5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG5_H
