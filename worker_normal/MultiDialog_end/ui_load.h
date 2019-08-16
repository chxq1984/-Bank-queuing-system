/********************************************************************************
** Form generated from reading UI file 'load.ui'
**
** Created: Sat Jul 13 06:50:50 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOAD_H
#define UI_LOAD_H

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

class Ui_load
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *load_phonenumber;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *load_password;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *load_login;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *load_exit;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *load)
    {
        if (load->objectName().isEmpty())
            load->setObjectName(QString::fromUtf8("load"));
        load->resize(550, 350);
        load->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/t3.jpg);"));
        layoutWidget = new QWidget(load);
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

        load_phonenumber = new QLineEdit(layoutWidget);
        load_phonenumber->setObjectName(QString::fromUtf8("load_phonenumber"));

        horizontalLayout->addWidget(load_phonenumber);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Bitstream Charter\";"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        load_password = new QLineEdit(layoutWidget);
        load_password->setObjectName(QString::fromUtf8("load_password"));

        horizontalLayout_2->addWidget(load_password);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 15);

        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        load_login = new QPushButton(layoutWidget);
        load_login->setObjectName(QString::fromUtf8("load_login"));

        horizontalLayout_3->addWidget(load_login);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        load_exit = new QPushButton(layoutWidget);
        load_exit->setObjectName(QString::fromUtf8("load_exit"));

        horizontalLayout_3->addWidget(load_exit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 2);
        horizontalLayout_3->setStretch(3, 2);
        horizontalLayout_3->setStretch(4, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(load);

        QMetaObject::connectSlotsByName(load);
    } // setupUi

    void retranslateUi(QDialog *load)
    {
        load->setWindowTitle(QApplication::translate("load", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("load", "phonenumber", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("load", "passward", 0, QApplication::UnicodeUTF8));
        load_login->setText(QApplication::translate("load", "login", 0, QApplication::UnicodeUTF8));
        load_exit->setText(QApplication::translate("load", "exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class load: public Ui_load {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOAD_H
