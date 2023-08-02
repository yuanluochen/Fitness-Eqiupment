/********************************************************************************
** Form generated from reading UI file 'equipmentsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUIPMENTSETTING_H
#define UI_EQUIPMENTSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EquipmentSetting
{
public:

    void setupUi(QWidget *EquipmentSetting)
    {
        if (EquipmentSetting->objectName().isEmpty())
            EquipmentSetting->setObjectName(QString::fromUtf8("EquipmentSetting"));
        EquipmentSetting->resize(400, 300);

        retranslateUi(EquipmentSetting);

        QMetaObject::connectSlotsByName(EquipmentSetting);
    } // setupUi

    void retranslateUi(QWidget *EquipmentSetting)
    {
        EquipmentSetting->setWindowTitle(QCoreApplication::translate("EquipmentSetting", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EquipmentSetting: public Ui_EquipmentSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPMENTSETTING_H
