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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EquipmentItem
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QLabel *EquiPmentItemIcon;
    QPushButton *pushButton;
    QLabel *EquipmentItemName;

    void setupUi(QWidget *EquipmentItem)
    {
        if (EquipmentItem->objectName().isEmpty())
            EquipmentItem->setObjectName(QString::fromUtf8("EquipmentItem"));
        EquipmentItem->resize(327, 443);
        EquipmentItem->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        gridLayout = new QGridLayout(EquipmentItem);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(EquipmentItem);
        widget->setObjectName(QString::fromUtf8("widget"));
        EquiPmentItemIcon = new QLabel(widget);
        EquiPmentItemIcon->setObjectName(QString::fromUtf8("EquiPmentItemIcon"));
        EquiPmentItemIcon->setGeometry(QRect(0, 0, 309, 389));
        EquiPmentItemIcon->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 0, 25, 25));
        pushButton->setMinimumSize(QSize(25, 25));
        pushButton->setMaximumSize(QSize(25, 25));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;border-image: url(:/icon/EquipmentItem/close_item.png);}\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;border-image: url(:/icon/EquipmentItem/close_item.png);}\n"
""));

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        EquipmentItemName = new QLabel(EquipmentItem);
        EquipmentItemName->setObjectName(QString::fromUtf8("EquipmentItemName"));
        EquipmentItemName->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        EquipmentItemName->setFont(font);
        EquipmentItemName->setStyleSheet(QString::fromUtf8("border-radius:15px;"));
        EquipmentItemName->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(EquipmentItemName, 1, 0, 1, 1);


        retranslateUi(EquipmentItem);

        QMetaObject::connectSlotsByName(EquipmentItem);
    } // setupUi

    void retranslateUi(QWidget *EquipmentItem)
    {
        EquipmentItem->setWindowTitle(QCoreApplication::translate("EquipmentItem", "Form", nullptr));
        EquiPmentItemIcon->setText(QString());
        pushButton->setText(QString());
        EquipmentItemName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EquipmentItem: public Ui_EquipmentItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPMENTITEM_H
