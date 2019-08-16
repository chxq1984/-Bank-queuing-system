/********************************************************************************
** Form generated from reading UI file 'manager.ui'
**
** Created: Sun Jul 14 09:15:20 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_manager
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *manager)
    {
        if (manager->objectName().isEmpty())
            manager->setObjectName(QString::fromUtf8("manager"));
        manager->resize(415, 306);
        manager->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(manager);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 411, 311));
        textBrowser = new QTextBrowser(manager);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(50, 20, 301, 241));
        pushButton = new QPushButton(manager);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 270, 93, 27));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"Bitstream Charter\";"));

        retranslateUi(manager);

        QMetaObject::connectSlotsByName(manager);
    } // setupUi

    void retranslateUi(QDialog *manager)
    {
        manager->setWindowTitle(QApplication::translate("manager", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton->setText(QApplication::translate("manager", "refresh", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class manager: public Ui_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
