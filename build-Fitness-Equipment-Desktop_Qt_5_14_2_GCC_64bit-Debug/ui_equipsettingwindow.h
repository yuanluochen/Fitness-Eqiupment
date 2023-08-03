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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EquipSettingWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QPushButton *returnBefore;
    QLabel *label;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *EquipSettingWindow)
    {
        if (EquipSettingWindow->objectName().isEmpty())
            EquipSettingWindow->setObjectName(QString::fromUtf8("EquipSettingWindow"));
        EquipSettingWindow->resize(1280, 800);
        EquipSettingWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border:2px solid rgb(20,196,188);border-radius:15px;"));
        gridLayout = new QGridLayout(EquipSettingWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 682, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        returnBefore = new QPushButton(EquipSettingWindow);
        returnBefore->setObjectName(QString::fromUtf8("returnBefore"));
        returnBefore->setEnabled(true);
        returnBefore->setMinimumSize(QSize(60, 60));
        returnBefore->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/EquipmentSettingWindow/return.png);"));
        returnBefore->setIconSize(QSize(20, 20));
        returnBefore->setAutoDefault(false);

        verticalLayout_5->addWidget(returnBefore);

        label = new QLabel(EquipSettingWindow);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);


        gridLayout->addLayout(verticalLayout_5, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(1191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);


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
