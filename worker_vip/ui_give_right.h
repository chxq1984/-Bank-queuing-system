/********************************************************************************
** Form generated from reading UI file 'give_right.ui'
**
** Created: Sun Jul 14 09:32:48 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIVE_RIGHT_H
#define UI_GIVE_RIGHT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_give_right
{
public:
    QLabel *label;
    QPushButton *agree;
    QPushButton *disagree;

    void setupUi(QDialog *give_right)
    {
        if (give_right->objectName().isEmpty())
            give_right->setObjectName(QString::fromUtf8("give_right"));
        give_right->resize(438, 331);
        label = new QLabel(give_right);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 441, 321));
        agree = new QPushButton(give_right);
        agree->setObjectName(QString::fromUtf8("agree"));
        agree->setGeometry(QRect(50, 110, 111, 81));
        agree->setStyleSheet(QString::fromUtf8("font: 20pt \"Bitstream Charter\";"));
        disagree = new QPushButton(give_right);
        disagree->setObjectName(QString::fromUtf8("disagree"));
        disagree->setGeometry(QRect(260, 110, 111, 81));
        disagree->setStyleSheet(QString::fromUtf8("font: 20pt \"Bitstream Charter\";"));

        retranslateUi(give_right);

        QMetaObject::connectSlotsByName(give_right);
    } // setupUi

    void retranslateUi(QDialog *give_right)
    {
        give_right->setWindowTitle(QApplication::translate("give_right", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        agree->setText(QApplication::translate("give_right", "agree", 0, QApplication::UnicodeUTF8));
        disagree->setText(QApplication::translate("give_right", "disagree", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class give_right: public Ui_give_right {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIVE_RIGHT_H
