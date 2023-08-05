/********************************************************************************
** Form generated from reading UI file 'equipmentitem.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUIPMENTITEM_H
#define UI_EQUIPMENTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EquipmentItem
{
public:
    QWidget *widget;
    QPushButton *pushButton;
    QLabel *EquiPmentItemIcon;
    QLabel *EquipmentItemName;

    void setupUi(QWidget *EquipmentItem)
    {
        if (EquipmentItem->objectName().isEmpty())
            EquipmentItem->setObjectName(QString::fromUtf8("EquipmentItem"));
        EquipmentItem->resize(251, 91);
        EquipmentItem->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        widget = new QWidget(EquipmentItem);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 251, 91));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 0, 25, 25));
        pushButton->setMinimumSize(QSize(25, 25));
        pushButton->setMaximumSize(QSize(25, 25));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;border-image: url(:/icon/EquipmentItem/close_item.png);}\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;border-image: url(:/icon/EquipmentItem/close_item.png);}\n"
""));
        EquiPmentItemIcon = new QLabel(widget);
        EquiPmentItemIcon->setObjectName(QString::fromUtf8("EquiPmentItemIcon"));
        EquiPmentItemIcon->setGeometry(QRect(1, 1, 89, 89));
        EquiPmentItemIcon->setMinimumSize(QSize(89, 89));
        EquiPmentItemIcon->setMaximumSize(QSize(89, 89));
        EquiPmentItemIcon->setAlignment(Qt::AlignCenter);
        EquipmentItemName = new QLabel(widget);
        EquipmentItemName->setObjectName(QString::fromUtf8("EquipmentItemName"));
        EquipmentItemName->setGeometry(QRect(96, 1, 154, 89));
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
        pushButton->setText(QString());
        EquiPmentItemIcon->setText(QString());
        EquipmentItemName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EquipmentItem: public Ui_EquipmentItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPMENTITEM_H
