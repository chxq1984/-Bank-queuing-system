/********************************************************************************
** Form generated from reading UI file 'load_2.ui'
**
** Created: Sun Jul 14 08:56:51 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOAD_2_H
#define UI_LOAD_2_H

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

class Ui_load_2
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *load_2_ID;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *load_2_password;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *load_2_login;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *load_2_exit;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *load_2)
    {
        if (load_2->objectName().isEmpty())
            load_2->setObjectName(QString::fromUtf8("load_2"));
        load_2->resize(550, 350);
        load_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/t3.jpg);"));
        layoutWidget = new QWidget(load_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 90, 411, 181));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Bitstream Charter\";"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        load_2_ID = new QLineEdit(layoutWidget);
        load_2_ID->setObjectName(QString::fromUtf8("load_2_ID"));

        horizontalLayout->addWidget(load_2_ID);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 12);

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Bitstream Charter\";"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        load_2_password = new QLineEdit(layoutWidget);
        load_2_password->setObjectName(QString::fromUtf8("load_2_password"));

        horizontalLayout_2->addWidget(load_2_password);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 15);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 3);

        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        load_2_login = new QPushButton(layoutWidget);
        load_2_login->setObjectName(QString::fromUtf8("load_2_login"));

        horizontalLayout_3->addWidget(load_2_login);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        load_2_exit = new QPushButton(layoutWidget);
        load_2_exit->setObjectName(QString::fromUtf8("load_2_exit"));

        horizontalLayout_3->addWidget(load_2_exit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 2);
        horizontalLayout_3->setStretch(3, 2);
        horizontalLayout_3->setStretch(4, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(load_2);

        QMetaObject::connectSlotsByName(load_2);
    } // setupUi

    void retranslateUi(QDialog *load_2)
    {
        load_2->setWindowTitle(QApplication::translate("load_2", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("load_2", "ID number", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("load_2", "passward", 0, QApplication::UnicodeUTF8));
        load_2_login->setText(QApplication::translate("load_2", "login", 0, QApplication::UnicodeUTF8));
        load_2_exit->setText(QApplication::translate("load_2", "exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class load_2: public Ui_load_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOAD_2_H
