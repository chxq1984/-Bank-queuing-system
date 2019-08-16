/********************************************************************************
** Form generated from reading UI file 'vs.ui'
**
** Created: Sun Jul 14 02:28:17 2019
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VS_H
#define UI_VS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_VS
{
public:

    void setupUi(QDialog *VS)
    {
        if (VS->objectName().isEmpty())
            VS->setObjectName(QString::fromUtf8("VS"));
        VS->resize(845, 507);

        retranslateUi(VS);

        QMetaObject::connectSlotsByName(VS);
    } // setupUi

    void retranslateUi(QDialog *VS)
    {
        VS->setWindowTitle(QApplication::translate("VS", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VS: public Ui_VS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VS_H
