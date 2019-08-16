/********************************************************************************
** Form generated from reading UI file 'register2.ui'
**
** Created: Sat Jul 13 06:54:06 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER2_H
#define UI_REGISTER2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register2
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *register2_phonenumber;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *register2_password;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *register2_confirm;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *register2_continue;
    QSpacerItem *horizontalSpacer;
    QPushButton *register2_exit;

    void setupUi(QDialog *register2)
    {
        if (register2->objectName().isEmpty())
            register2->setObjectName(QString::fromUtf8("register2"));
        register2->resize(586, 373);
        register2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/t3.jpg);"));
        layoutWidget = new QWidget(register2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 60, 391, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        register2_phonenumber = new QLineEdit(layoutWidget);
        register2_phonenumber->setObjectName(QString::fromUtf8("register2_phonenumber"));

        horizontalLayout->addWidget(register2_phonenumber);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 10);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        register2_password = new QLineEdit(layoutWidget);
        register2_password->setObjectName(QString::fromUtf8("register2_password"));

        horizontalLayout_2->addWidget(register2_password);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 13);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        register2_confirm = new QLineEdit(layoutWidget);
        register2_confirm->setObjectName(QString::fromUtf8("register2_confirm"));

        horizontalLayout_4->addWidget(register2_confirm);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 8);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        register2_continue = new QPushButton(layoutWidget);
        register2_continue->setObjectName(QString::fromUtf8("register2_continue"));

        horizontalLayout_3->addWidget(register2_continue);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        register2_exit = new QPushButton(layoutWidget);
        register2_exit->setObjectName(QString::fromUtf8("register2_exit"));

        horizontalLayout_3->addWidget(register2_exit);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(register2);

        QMetaObject::connectSlotsByName(register2);
    } // setupUi

    void retranslateUi(QDialog *register2)
    {
        register2->setWindowTitle(QApplication::translate("register2", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("register2", "phonenumber", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("register2", "passward", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("register2", "confirm", 0, QApplication::UnicodeUTF8));
        register2_continue->setText(QApplication::translate("register2", "continue", 0, QApplication::UnicodeUTF8));
        register2_exit->setText(QApplication::translate("register2", "exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class register2: public Ui_register2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER2_H
