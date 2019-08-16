/********************************************************************************
** Form generated from reading UI file 'dialog4.ui'
**
** Created: Sun Jul 14 08:00:52 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG4_H
#define UI_DIALOG4_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_dialog4
{
public:
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *dialog4)
    {
        if (dialog4->objectName().isEmpty())
            dialog4->setObjectName(QString::fromUtf8("dialog4"));
        dialog4->resize(400, 300);
        dialog4->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(dialog4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 401, 301));
        label = new QLabel(dialog4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 70, 301, 131));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 20pt \"Bitstream Charter\";"));

        retranslateUi(dialog4);

        QMetaObject::connectSlotsByName(dialog4);
    } // setupUi

    void retranslateUi(QDialog *dialog4)
    {
        dialog4->setWindowTitle(QApplication::translate("dialog4", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label->setText(QApplication::translate("dialog4", "now password is changed!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialog4: public Ui_dialog4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG4_H
