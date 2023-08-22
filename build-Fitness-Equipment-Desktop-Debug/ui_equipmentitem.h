/********************************************************************************
** Form generated from reading UI file 'equipmentitem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUIPMENTITEM_H
#define UI_EQUIPMENTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EquipmentItem
{
public:
    QWidget *widget;
    QLabel *EquiPmentItemIcon;
    QLabel *EquipmentItemName;

    void setupUi(QWidget *EquipmentItem)
    {
        if (EquipmentItem->objectName().isEmpty())
            EquipmentItem->setObjectName(QString::fromUtf8("EquipmentItem"));
        EquipmentItem->resize(261, 91);
        EquipmentItem->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        widget = new QWidget(EquipmentItem);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 261, 91));
        EquiPmentItemIcon = new QLabel(widget);
        EquiPmentItemIcon->setObjectName(QString::fromUtf8("EquiPmentItemIcon"));
        EquiPmentItemIcon->setGeometry(QRect(1, 1, 89, 89));
        EquiPmentItemIcon->setMinimumSize(QSize(89, 89));
        EquiPmentItemIcon->setMaximumSize(QSize(89, 89));
        EquiPmentItemIcon->setStyleSheet(QString::fromUtf8(""));
        EquiPmentItemIcon->setAlignment(Qt::AlignCenter);
        EquipmentItemName = new QLabel(widget);
        EquipmentItemName->setObjectName(QString::fromUtf8("EquipmentItemName"));
        EquipmentItemName->setGeometry(QRect(90, 0, 171, 89));
        EquipmentItemName->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        EquipmentItemName->setFont(font);
        EquipmentItemName->setStyleSheet(QString::fromUtf8("border-radius:15px;"));
        EquipmentItemName->setAlignment(Qt::AlignCenter);

        retranslateUi(EquipmentItem);

        QMetaObject::connectSlotsByName(EquipmentItem);
    } // setupUi

    void retranslateUi(QWidget *EquipmentItem)
    {
        EquipmentItem->setWindowTitle(QCoreApplication::translate("EquipmentItem", "Form", nullptr));
        EquiPmentItemIcon->setText(QString());
        EquipmentItemName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EquipmentItem: public Ui_EquipmentItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPMENTITEM_H
