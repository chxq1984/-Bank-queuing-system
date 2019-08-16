/********************************************************************************
** Form generated from reading UI file 'dialog6.ui'
**
** Created: Sat Jul 13 06:59:12 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG6_H
#define UI_DIALOG6_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialog6
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *change_again;
    QSpacerItem *horizontalSpacer;
    QPushButton *change_exit;

    void setupUi(QDialog *dialog6)
    {
        if (dialog6->objectName().isEmpty())
            dialog6->setObjectName(QString::fromUtf8("dialog6"));
        dialog6->resize(400, 300);
        dialog6->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/t4.jpg);"));
        label = new QLabel(dialog6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 70, 251, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(dialog6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 130, 251, 41));
        label_2->setFont(font);
        layoutWidget = new QWidget(dialog6);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 210, 251, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        change_again = new QPushButton(layoutWidget);
        change_again->setObjectName(QString::fromUtf8("change_again"));

        horizontalLayout->addWidget(change_again);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        change_exit = new QPushButton(layoutWidget);
        change_exit->setObjectName(QString::fromUtf8("change_exit"));

        horizontalLayout->addWidget(change_exit);


        retranslateUi(dialog6);

        QMetaObject::connectSlotsByName(dialog6);
    } // setupUi

    void retranslateUi(QDialog *dialog6)
    {
        dialog6->setWindowTitle(QApplication::translate("dialog6", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dialog6", "Authentication failed", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dialog6", "please login again", 0, QApplication::UnicodeUTF8));
        change_again->setText(QApplication::translate("dialog6", "again", 0, QApplication::UnicodeUTF8));
        change_exit->setText(QApplication::translate("dialog6", "exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialog6: public Ui_dialog6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG6_H
