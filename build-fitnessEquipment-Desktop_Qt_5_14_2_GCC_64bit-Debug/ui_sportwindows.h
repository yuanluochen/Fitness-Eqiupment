/********************************************************************************
** Form generated from reading UI file 'sportwindows.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPORTWINDOWS_H
#define UI_SPORTWINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SportWindows
{
public:

    void setupUi(QWidget *SportWindows)
    {
        if (SportWindows->objectName().isEmpty())
            SportWindows->setObjectName(QString::fromUtf8("SportWindows"));
        SportWindows->resize(400, 300);

        retranslateUi(SportWindows);

        QMetaObject::connectSlotsByName(SportWindows);
    } // setupUi

    void retranslateUi(QWidget *SportWindows)
    {
        SportWindows->setWindowTitle(QCoreApplication::translate("SportWindows", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SportWindows: public Ui_SportWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPORTWINDOWS_H
