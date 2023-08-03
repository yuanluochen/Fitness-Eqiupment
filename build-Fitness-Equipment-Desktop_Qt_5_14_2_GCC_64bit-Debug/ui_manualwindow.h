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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManualWindow
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
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
        gridLayout_2 = new QGridLayout(ManualWindow);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser = new QTextBrowser(ManualWindow);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(ManualWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(170, 170));
        label_2->setMaximumSize(QSize(170, 170));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/ManualWindow/manual.png);"));

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(ManualWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        returnBefore = new QPushButton(ManualWindow);
        returnBefore->setObjectName(QString::fromUtf8("returnBefore"));
        returnBefore->setEnabled(true);
        returnBefore->setMinimumSize(QSize(60, 60));
        returnBefore->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;border-image: url(:/icon/ManualWindow/return.png);}\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;border-image: url(:/icon/ManualWindow/return.png);}"));
        returnBefore->setIconSize(QSize(20, 20));
        returnBefore->setAutoDefault(false);

        verticalLayout_5->addWidget(returnBefore);

        label = new QLabel(ManualWindow);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);


        verticalLayout_3->addLayout(verticalLayout_5);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


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
