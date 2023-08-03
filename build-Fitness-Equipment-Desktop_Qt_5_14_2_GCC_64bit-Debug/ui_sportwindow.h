/********************************************************************************
** Form generated from reading UI file 'sportwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPORTWINDOW_H
#define UI_SPORTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SportWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    QPushButton *returnBefore;
    QLabel *label;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *SportWindow)
    {
        if (SportWindow->objectName().isEmpty())
            SportWindow->setObjectName(QString::fromUtf8("SportWindow"));
        SportWindow->resize(1600, 900);
        QFont font;
        font.setPointSize(14);
        SportWindow->setFont(font);
        SportWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border:2px solid rgb(20,196,188);border-radius:15px;"));
        gridLayout = new QGridLayout(SportWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 782, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(1333, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(SportWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(170, 170));
        label_2->setMaximumSize(QSize(170, 170));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/SportWindow/sport.png);"));

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(SportWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);


        gridLayout->addLayout(verticalLayout, 0, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 569, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 2, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        returnBefore = new QPushButton(SportWindow);
        returnBefore->setObjectName(QString::fromUtf8("returnBefore"));
        returnBefore->setEnabled(true);
        returnBefore->setMinimumSize(QSize(60, 60));
        returnBefore->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/SportWindow/return.png);"));
        returnBefore->setIconSize(QSize(20, 20));
        returnBefore->setAutoDefault(false);

        verticalLayout_5->addWidget(returnBefore);

        label = new QLabel(SportWindow);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);


        gridLayout->addLayout(verticalLayout_5, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(1511, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 2);


        retranslateUi(SportWindow);

        QMetaObject::connectSlotsByName(SportWindow);
    } // setupUi

    void retranslateUi(QWidget *SportWindow)
    {
        SportWindow->setWindowTitle(QCoreApplication::translate("SportWindow", "Form", nullptr));
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("SportWindow", "\350\277\220\345\212\250", nullptr));
        returnBefore->setText(QString());
        label->setText(QCoreApplication::translate("SportWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SportWindow: public Ui_SportWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPORTWINDOW_H
