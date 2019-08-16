/********************************************************************************
** Form generated from reading UI file 'change.ui'
**
** Created: Sat Jul 13 22:29:39 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_H
#define UI_CHANGE_H

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

class Ui_change
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *zhanghao;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *jiumima;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *xinmima;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *jiumimaqueren;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *change_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *change_exit;

    void setupUi(QDialog *change)
    {
        if (change->objectName().isEmpty())
            change->setObjectName(QString::fromUtf8("change"));
        change->resize(550, 350);
        change->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/t3.jpg);\n"
""));
        layoutWidget = new QWidget(change);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 70, 411, 181));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        zhanghao = new QLineEdit(layoutWidget);
        zhanghao->setObjectName(QString::fromUtf8("zhanghao"));

        horizontalLayout->addWidget(zhanghao);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 5);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        jiumima = new QLineEdit(layoutWidget);
        jiumima->setObjectName(QString::fromUtf8("jiumima"));

        horizontalLayout_2->addWidget(jiumima);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 40);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        xinmima = new QLineEdit(layoutWidget);
        xinmima->setObjectName(QString::fromUtf8("xinmima"));

        horizontalLayout_3->addWidget(xinmima);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 999);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        jiumimaqueren = new QLineEdit(layoutWidget);
        jiumimaqueren->setObjectName(QString::fromUtf8("jiumimaqueren"));

        horizontalLayout_4->addWidget(jiumimaqueren);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 6);

        verticalLayout->addLayout(horizontalLayout_4);

        layoutWidget1 = new QWidget(change);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 270, 411, 51));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        change_2 = new QPushButton(layoutWidget1);
        change_2->setObjectName(QString::fromUtf8("change_2"));

        horizontalLayout_5->addWidget(change_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        change_exit = new QPushButton(layoutWidget1);
        change_exit->setObjectName(QString::fromUtf8("change_exit"));

        horizontalLayout_5->addWidget(change_exit);


        retranslateUi(change);

        QMetaObject::connectSlotsByName(change);
    } // setupUi

    void retranslateUi(QDialog *change)
    {
        change->setWindowTitle(QApplication::translate("change", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("change", "ID", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("change", "old-passward", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("change", "new-passward", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("change", "confirm", 0, QApplication::UnicodeUTF8));
        change_2->setText(QApplication::translate("change", "OK", 0, QApplication::UnicodeUTF8));
        change_exit->setText(QApplication::translate("change", "exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class change: public Ui_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_H
