/********************************************************************************
** Form generated from reading UI file 'dialog1.ui'
**
** Created: Sat Jul 13 18:06:05 2019
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
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog1
{
public:
    QLabel *kk;
    QLabel *label;
    QPushButton *exitpushButton;
    QLineEdit *number;

    void setupUi(QDialog *Dialog1)
    {
        if (Dialog1->objectName().isEmpty())
            Dialog1->setObjectName(QString::fromUtf8("Dialog1"));
        Dialog1->resize(550, 350);
        Dialog1->setStyleSheet(QString::fromUtf8(""));
        kk = new QLabel(Dialog1);
        kk->setObjectName(QString::fromUtf8("kk"));
        kk->setGeometry(QRect(0, 0, 551, 361));
        label = new QLabel(Dialog1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 80, 311, 71));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 26pt \"Courier 10 Pitch\";"));
        exitpushButton = new QPushButton(Dialog1);
        exitpushButton->setObjectName(QString::fromUtf8("exitpushButton"));
        exitpushButton->setGeometry(QRect(0, 320, 101, 31));
        number = new QLineEdit(Dialog1);
        number->setObjectName(QString::fromUtf8("number"));
        number->setGeometry(QRect(120, 160, 161, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        number->setFont(font);
        number->setStyleSheet(QString::fromUtf8("font: 75 36pt \"Bitstream Charter\";"));

        retranslateUi(Dialog1);

        QMetaObject::connectSlotsByName(Dialog1);
    } // setupUi

    void retranslateUi(QDialog *Dialog1)
    {
        Dialog1->setWindowTitle(QApplication::translate("Dialog1", "Dialog", 0, QApplication::UnicodeUTF8));
        kk->setText(QString());
        label->setText(QApplication::translate("Dialog1", "your number is", 0, QApplication::UnicodeUTF8));
        exitpushButton->setText(QApplication::translate("Dialog1", "exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog1: public Ui_Dialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG1_H
