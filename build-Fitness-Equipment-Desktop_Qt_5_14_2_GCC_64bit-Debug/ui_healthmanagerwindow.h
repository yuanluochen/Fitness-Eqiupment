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
    QVBoxLayout *verticalLayout_5;
    QPushButton *returnBefore;
    QLabel *label;

    void setupUi(QWidget *HealthManagerWindow)
    {
        if (HealthManagerWindow->objectName().isEmpty())
            HealthManagerWindow->setObjectName(QString::fromUtf8("HealthManagerWindow"));
        HealthManagerWindow->resize(1600, 900);
        layoutWidget = new QWidget(HealthManagerWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 680, 62, 91));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        returnBefore = new QPushButton(layoutWidget);
        returnBefore->setObjectName(QString::fromUtf8("returnBefore"));
        returnBefore->setEnabled(true);
        returnBefore->setMinimumSize(QSize(60, 60));
        returnBefore->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/HealthManagerWindow/return.png);"));
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


        retranslateUi(HealthManagerWindow);

        QMetaObject::connectSlotsByName(HealthManagerWindow);
    } // setupUi

    void retranslateUi(QWidget *HealthManagerWindow)
    {
        HealthManagerWindow->setWindowTitle(QCoreApplication::translate("HealthManagerWindow", "Form", nullptr));
        returnBefore->setText(QString());
        label->setText(QCoreApplication::translate("HealthManagerWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HealthManagerWindow: public Ui_HealthManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEALTHMANAGERWINDOW_H
