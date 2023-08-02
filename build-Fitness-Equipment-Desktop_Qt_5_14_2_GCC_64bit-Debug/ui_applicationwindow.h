/********************************************************************************
** Form generated from reading UI file 'applicationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATIONWINDOW_H
#define UI_APPLICATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApplicationWindow
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_8;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *sportPushButton;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_6;
    QPushButton *healthManagerPushButton;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *settingPushButton;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *manualPushbutton;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *returnBefore;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_11;

    void setupUi(QWidget *ApplicationWindow)
    {
        if (ApplicationWindow->objectName().isEmpty())
            ApplicationWindow->setObjectName(QString::fromUtf8("ApplicationWindow"));
        ApplicationWindow->setEnabled(true);
        ApplicationWindow->resize(1280, 800);
        gridLayout_2 = new QGridLayout(ApplicationWindow);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_8 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_8, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        sportPushButton = new QPushButton(ApplicationWindow);
        sportPushButton->setObjectName(QString::fromUtf8("sportPushButton"));
        sportPushButton->setMinimumSize(QSize(100, 100));
        sportPushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/ApplicationWindow/sport.png);\n"
""));

        verticalLayout_2->addWidget(sportPushButton);

        label_4 = new QLabel(ApplicationWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        healthManagerPushButton = new QPushButton(ApplicationWindow);
        healthManagerPushButton->setObjectName(QString::fromUtf8("healthManagerPushButton"));
        healthManagerPushButton->setMinimumSize(QSize(100, 100));
        healthManagerPushButton->setMaximumSize(QSize(100, 100));
        healthManagerPushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/ApplicationWindow/healthManager.png);"));

        verticalLayout_6->addWidget(healthManagerPushButton);

        label_8 = new QLabel(ApplicationWindow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        settingPushButton = new QPushButton(ApplicationWindow);
        settingPushButton->setObjectName(QString::fromUtf8("settingPushButton"));
        settingPushButton->setMinimumSize(QSize(100, 100));
        settingPushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/ApplicationWindow/setting.png);"));

        verticalLayout_3->addWidget(settingPushButton);

        label_2 = new QLabel(ApplicationWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        manualPushbutton = new QPushButton(ApplicationWindow);
        manualPushbutton->setObjectName(QString::fromUtf8("manualPushbutton"));
        manualPushbutton->setMinimumSize(QSize(100, 100));
        manualPushbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/ApplicationWindow/manual.png);"));

        verticalLayout_4->addWidget(manualPushbutton);

        label_3 = new QLabel(ApplicationWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_3);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);


        horizontalLayout->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout, 2, 3, 3, 3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 6, 1, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        returnBefore = new QPushButton(ApplicationWindow);
        returnBefore->setObjectName(QString::fromUtf8("returnBefore"));
        returnBefore->setEnabled(true);
        returnBefore->setMinimumSize(QSize(60, 60));
        returnBefore->setMaximumSize(QSize(60, 60));
        returnBefore->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/ApplicationWindow/return.png);"));
        returnBefore->setIconSize(QSize(20, 20));
        returnBefore->setAutoDefault(false);

        verticalLayout_5->addWidget(returnBefore);

        label = new QLabel(ApplicationWindow);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);


        gridLayout->addLayout(verticalLayout_5, 6, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(ApplicationWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(150, 150));
        label_6->setMaximumSize(QSize(150, 150));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/ApplicationWindow/application.png);"));

        verticalLayout->addWidget(label_6);

        label_5 = new QLabel(ApplicationWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 0));
        label_5->setMaximumSize(QSize(150, 150));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);


        gridLayout->addLayout(verticalLayout, 0, 6, 3, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        label_7 = new QLabel(ApplicationWindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(471, 451));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/ApplicationWindow/health.png);"));

        gridLayout->addWidget(label_7, 2, 0, 3, 3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 3, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 6, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 5, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 3, 6, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_10, 6, 4, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 2, 1);

        horizontalSpacer_6 = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 2, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_11, 3, 1, 1, 1);


        retranslateUi(ApplicationWindow);

        QMetaObject::connectSlotsByName(ApplicationWindow);
    } // setupUi

    void retranslateUi(QWidget *ApplicationWindow)
    {
        ApplicationWindow->setWindowTitle(QCoreApplication::translate("ApplicationWindow", "Form", nullptr));
        sportPushButton->setText(QString());
        label_4->setText(QCoreApplication::translate("ApplicationWindow", "\350\277\220\345\212\250", nullptr));
        healthManagerPushButton->setText(QString());
        label_8->setText(QCoreApplication::translate("ApplicationWindow", "\345\201\245\345\272\267\347\256\241\347\220\206", nullptr));
        settingPushButton->setText(QString());
        label_2->setText(QCoreApplication::translate("ApplicationWindow", "\350\256\276\345\244\207\350\256\276\347\275\256", nullptr));
        manualPushbutton->setText(QString());
        label_3->setText(QCoreApplication::translate("ApplicationWindow", "\344\275\277\347\224\250\350\257\264\346\230\216", nullptr));
        returnBefore->setText(QString());
        label->setText(QCoreApplication::translate("ApplicationWindow", "\350\277\224\345\233\236", nullptr));
        label_6->setText(QString());
        label_5->setText(QCoreApplication::translate("ApplicationWindow", "\345\272\224\347\224\250\347\250\213\345\272\217", nullptr));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ApplicationWindow: public Ui_ApplicationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATIONWINDOW_H
