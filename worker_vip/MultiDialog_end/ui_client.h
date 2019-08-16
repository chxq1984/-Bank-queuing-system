/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created: Sat Jul 13 22:53:31 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_client
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *client)
    {
        if (client->objectName().isEmpty())
            client->setObjectName(QString::fromUtf8("client"));
        client->resize(800, 600);
        menubar = new QMenuBar(client);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        client->setMenuBar(menubar);
        centralwidget = new QWidget(client);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        client->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(client);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        client->setStatusBar(statusbar);

        retranslateUi(client);

        QMetaObject::connectSlotsByName(client);
    } // setupUi

    void retranslateUi(QMainWindow *client)
    {
        client->setWindowTitle(QApplication::translate("client", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class client: public Ui_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
