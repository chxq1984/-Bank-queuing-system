/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Jul 14 08:13:40 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionChange;
    QAction *actionPhonenumber;
    QAction *actionID;
    QAction *actionSuggest;
    QAction *actionGet_number;
    QAction *actionRegister;
    QAction *actionAbout;
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuZhucaidan;
    QMenu *menuVIPyonghu;
    QMenu *menuLoad;
    QMenu *menuBangzhu;
    QMenu *menuAbout_us;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(813, 564);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionChange = new QAction(MainWindow);
        actionChange->setObjectName(QString::fromUtf8("actionChange"));
        actionPhonenumber = new QAction(MainWindow);
        actionPhonenumber->setObjectName(QString::fromUtf8("actionPhonenumber"));
        actionID = new QAction(MainWindow);
        actionID->setObjectName(QString::fromUtf8("actionID"));
        actionSuggest = new QAction(MainWindow);
        actionSuggest->setObjectName(QString::fromUtf8("actionSuggest"));
        actionGet_number = new QAction(MainWindow);
        actionGet_number->setObjectName(QString::fromUtf8("actionGet_number"));
        actionRegister = new QAction(MainWindow);
        actionRegister->setObjectName(QString::fromUtf8("actionRegister"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-20, 0, 861, 641));
        label->setStyleSheet(QString::fromUtf8("border-top-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 813, 23));
        menuZhucaidan = new QMenu(menubar);
        menuZhucaidan->setObjectName(QString::fromUtf8("menuZhucaidan"));
        menuVIPyonghu = new QMenu(menubar);
        menuVIPyonghu->setObjectName(QString::fromUtf8("menuVIPyonghu"));
        menuLoad = new QMenu(menuVIPyonghu);
        menuLoad->setObjectName(QString::fromUtf8("menuLoad"));
        menuBangzhu = new QMenu(menubar);
        menuBangzhu->setObjectName(QString::fromUtf8("menuBangzhu"));
        menuAbout_us = new QMenu(menubar);
        menuAbout_us->setObjectName(QString::fromUtf8("menuAbout_us"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuZhucaidan->menuAction());
        menubar->addAction(menuVIPyonghu->menuAction());
        menubar->addAction(menuBangzhu->menuAction());
        menubar->addAction(menuAbout_us->menuAction());
        menuZhucaidan->addSeparator();
        menuZhucaidan->addSeparator();
        menuZhucaidan->addAction(actionGet_number);
        menuVIPyonghu->addAction(menuLoad->menuAction());
        menuVIPyonghu->addAction(actionChange);
        menuVIPyonghu->addAction(actionRegister);
        menuLoad->addAction(actionPhonenumber);
        menuLoad->addAction(actionID);
        menuBangzhu->addAction(actionSuggest);
        menuAbout_us->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionChange->setText(QApplication::translate("MainWindow", "change", 0, QApplication::UnicodeUTF8));
        actionPhonenumber->setText(QApplication::translate("MainWindow", "phonenumber", 0, QApplication::UnicodeUTF8));
        actionID->setText(QApplication::translate("MainWindow", "ID", 0, QApplication::UnicodeUTF8));
        actionSuggest->setText(QApplication::translate("MainWindow", "suggest", 0, QApplication::UnicodeUTF8));
        actionGet_number->setText(QApplication::translate("MainWindow", "get_number", 0, QApplication::UnicodeUTF8));
        actionRegister->setText(QApplication::translate("MainWindow", "register", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "about", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        menuZhucaidan->setTitle(QApplication::translate("MainWindow", "common", 0, QApplication::UnicodeUTF8));
        menuVIPyonghu->setTitle(QApplication::translate("MainWindow", "VIP", 0, QApplication::UnicodeUTF8));
        menuLoad->setTitle(QApplication::translate("MainWindow", "load", 0, QApplication::UnicodeUTF8));
        menuBangzhu->setTitle(QApplication::translate("MainWindow", "help", 0, QApplication::UnicodeUTF8));
        menuAbout_us->setTitle(QApplication::translate("MainWindow", "about us", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
