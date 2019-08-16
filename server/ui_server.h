/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created: Sun Jul 14 21:11:00 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_server
{
public:
    QWidget *centralWidget;
    QTextEdit *text_inf;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *server)
    {
        if (server->objectName().isEmpty())
            server->setObjectName(QString::fromUtf8("server"));
        server->resize(500, 360);
        centralWidget = new QWidget(server);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        text_inf = new QTextEdit(centralWidget);
        text_inf->setObjectName(QString::fromUtf8("text_inf"));
        text_inf->setGeometry(QRect(20, 20, 451, 301));
        text_inf->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 22pt \"Bitstream Charter\";"));
        server->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(server);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 23));
        server->setMenuBar(menuBar);
        mainToolBar = new QToolBar(server);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        server->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(server);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        server->setStatusBar(statusBar);

        retranslateUi(server);

        QMetaObject::connectSlotsByName(server);
    } // setupUi

    void retranslateUi(QMainWindow *server)
    {
        server->setWindowTitle(QApplication::translate("server", "server", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class server: public Ui_server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
