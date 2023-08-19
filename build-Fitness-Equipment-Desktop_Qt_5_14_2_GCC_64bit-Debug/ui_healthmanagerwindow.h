/********************************************************************************
** Form generated from reading UI file 'healthmanagerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEALTHMANAGERWINDOW_H
#define UI_HEALTHMANAGERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HealthManagerWindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *returnBefore;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *HealthManagerWindow)
    {
        if (HealthManagerWindow->objectName().isEmpty())
            HealthManagerWindow->setObjectName(QString::fromUtf8("HealthManagerWindow"));
        HealthManagerWindow->resize(1600, 900);
        HealthManagerWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border:2px ;border-radius:15px;"));
        layoutWidget = new QWidget(HealthManagerWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1420, 0, 172, 207));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(170, 170));
        label_2->setMaximumSize(QSize(170, 170));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/HealthManagerWindow/healthManager.png);"));

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        returnBefore = new QPushButton(HealthManagerWindow);
        returnBefore->setObjectName(QString::fromUtf8("returnBefore"));
        returnBefore->setEnabled(true);
        returnBefore->setGeometry(QRect(10, 840, 60, 60));
        returnBefore->setMinimumSize(QSize(60, 60));
        returnBefore->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;border-image: url(:/icon/HealthManagerWindow/return.png);}\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;border-image: url(:/icon/HealthManagerWindow/return.png);}"));
        returnBefore->setIconSize(QSize(20, 20));
        returnBefore->setAutoDefault(false);
        layoutWidget1 = new QWidget(HealthManagerWindow);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);

        retranslateUi(HealthManagerWindow);

        QMetaObject::connectSlotsByName(HealthManagerWindow);
    } // setupUi

    void retranslateUi(QWidget *HealthManagerWindow)
    {
        HealthManagerWindow->setWindowTitle(QCoreApplication::translate("HealthManagerWindow", "Form", nullptr));
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("HealthManagerWindow", "\344\275\223\350\264\250\346\217\220\345\215\207", nullptr));
        returnBefore->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HealthManagerWindow: public Ui_HealthManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEALTHMANAGERWINDOW_H
