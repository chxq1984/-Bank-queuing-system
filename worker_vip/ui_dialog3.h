/********************************************************************************
** Form generated from reading UI file 'dialog3.ui'
**
** Created: Sun Jul 14 09:52:45 2019
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

class Ui_dialog3
{
public:
    QLabel *label;
    QLabel *agree;
    QLabel *disagree;

    void setupUi(QDialog *dialog3)
    {
        if (dialog3->objectName().isEmpty())
            dialog3->setObjectName(QString::fromUtf8("dialog3"));
        dialog3->resize(550, 400);
        label = new QLabel(dialog3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, 0, 551, 401));
        label->setStyleSheet(QString::fromUtf8(""));
        agree = new QLabel(dialog3);
        agree->setObjectName(QString::fromUtf8("agree"));
        agree->setGeometry(QRect(110, 170, 91, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        agree->setFont(font);
        disagree = new QLabel(dialog3);
        disagree->setObjectName(QString::fromUtf8("disagree"));
        disagree->setGeometry(QRect(290, 160, 121, 81));
        disagree->setFont(font);

        retranslateUi(dialog3);

        QMetaObject::connectSlotsByName(dialog3);
    } // setupUi

    void retranslateUi(QDialog *dialog3)
    {
        dialog3->setWindowTitle(QApplication::translate("dialog3", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        agree->setText(QApplication::translate("dialog3", "agree", 0, QApplication::UnicodeUTF8));
        disagree->setText(QApplication::translate("dialog3", "disagree", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialog3: public Ui_dialog3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG3_H
