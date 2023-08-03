/********************************************************************************
** Form generated from reading UI file 'manualwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUALWINDOW_H
#define UI_MANUALWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManualWindow
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_4;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_5;
    QPushButton *returnBefore;
    QLabel *label;

    void setupUi(QWidget *ManualWindow)
    {
        if (ManualWindow->objectName().isEmpty())
            ManualWindow->setObjectName(QString::fromUtf8("ManualWindow"));
        ManualWindow->resize(1600, 900);
        ManualWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border:2px solid rgb(20,196,188);border-radius:15px;"));
        widget = new QWidget(ManualWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(170, 170));
        label_2->setMaximumSize(QSize(170, 170));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/ManualWindow/manual.png);"));

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        widget1 = new QWidget(ManualWindow);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        verticalLayout_5 = new QVBoxLayout(widget1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        returnBefore = new QPushButton(widget1);
        returnBefore->setObjectName(QString::fromUtf8("returnBefore"));
        returnBefore->setEnabled(true);
        returnBefore->setMinimumSize(QSize(60, 60));
        returnBefore->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/ManualWindow/return.png);"));
        returnBefore->setIconSize(QSize(20, 20));
        returnBefore->setAutoDefault(false);

        verticalLayout_5->addWidget(returnBefore);

        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);


        retranslateUi(ManualWindow);

        QMetaObject::connectSlotsByName(ManualWindow);
    } // setupUi

    void retranslateUi(QWidget *ManualWindow)
    {
        ManualWindow->setWindowTitle(QCoreApplication::translate("ManualWindow", "Form", nullptr));
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("ManualWindow", "\344\275\277\347\224\250\350\257\264\346\230\216", nullptr));
        returnBefore->setText(QString());
        label->setText(QCoreApplication::translate("ManualWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManualWindow: public Ui_ManualWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUALWINDOW_H
