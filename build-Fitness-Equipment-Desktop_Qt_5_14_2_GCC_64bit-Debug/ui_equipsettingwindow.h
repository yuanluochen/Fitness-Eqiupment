/********************************************************************************
** Form generated from reading UI file 'equipsettingwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUIPSETTINGWINDOW_H
#define UI_EQUIPSETTINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EquipSettingWindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QPushButton *returnBefore;
    QLabel *label;

    void setupUi(QWidget *EquipSettingWindow)
    {
        if (EquipSettingWindow->objectName().isEmpty())
            EquipSettingWindow->setObjectName(QString::fromUtf8("EquipSettingWindow"));
        EquipSettingWindow->resize(1280, 800);
        layoutWidget = new QWidget(EquipSettingWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 700, 62, 91));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        returnBefore = new QPushButton(layoutWidget);
        returnBefore->setObjectName(QString::fromUtf8("returnBefore"));
        returnBefore->setEnabled(true);
        returnBefore->setMinimumSize(QSize(60, 60));
        returnBefore->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/EquipmentSettingWindow/return.png);"));
        returnBefore->setIconSize(QSize(20, 20));
        returnBefore->setAutoDefault(false);

        verticalLayout_5->addWidget(returnBefore);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);


        retranslateUi(EquipSettingWindow);

        QMetaObject::connectSlotsByName(EquipSettingWindow);
    } // setupUi

    void retranslateUi(QWidget *EquipSettingWindow)
    {
        EquipSettingWindow->setWindowTitle(QCoreApplication::translate("EquipSettingWindow", "Form", nullptr));
        returnBefore->setText(QString());
        label->setText(QCoreApplication::translate("EquipSettingWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EquipSettingWindow: public Ui_EquipSettingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPSETTINGWINDOW_H
