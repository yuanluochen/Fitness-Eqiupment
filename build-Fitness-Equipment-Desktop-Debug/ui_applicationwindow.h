/********************************************************************************
** Form generated from reading UI file 'applicationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QLabel *labelPicture;
    QLabel *labelTiltle;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_10;
    QLabel *labelPicture2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *sportPushButton;
    QLabel *labelSport;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_6;
    QPushButton *healthManagerPushButton;
    QLabel *labelHealthManager;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *manualPushbutton;
    QLabel *labelManual;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QPushButton *returnBefore;
    QLabel *labelReturn;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_5;
    QPushButton *equipmentConnectPushButton;

    void setupUi(QWidget *ApplicationWindow)
    {
        if (ApplicationWindow->objectName().isEmpty())
            ApplicationWindow->setObjectName(QString::fromUtf8("ApplicationWindow"));
        ApplicationWindow->setEnabled(true);
        ApplicationWindow->resize(1600, 900);
        ApplicationWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border:2px ;border-radius:15px;"));
        gridLayout = new QGridLayout(ApplicationWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 0, 5, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 8, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelPicture = new QLabel(ApplicationWindow);
        labelPicture->setObjectName(QString::fromUtf8("labelPicture"));
        labelPicture->setMinimumSize(QSize(150, 150));
        labelPicture->setMaximumSize(QSize(150, 150));
        labelPicture->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/ApplicationWindow/application.png);"));

        verticalLayout->addWidget(labelPicture);

        labelTiltle = new QLabel(ApplicationWindow);
        labelTiltle->setObjectName(QString::fromUtf8("labelTiltle"));
        labelTiltle->setMinimumSize(QSize(0, 0));
        labelTiltle->setMaximumSize(QSize(150, 150));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        labelTiltle->setFont(font);
        labelTiltle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelTiltle);


        gridLayout->addLayout(verticalLayout, 0, 9, 2, 1);

        verticalSpacer_8 = new QSpacerItem(20, 185, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 1, 4, 2, 3);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 2, 8, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_10, 3, 0, 1, 1);

        labelPicture2 = new QLabel(ApplicationWindow);
        labelPicture2->setObjectName(QString::fromUtf8("labelPicture2"));
        labelPicture2->setMinimumSize(QSize(471, 451));
        labelPicture2->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/ApplicationWindow/health.png);"));

        gridLayout->addWidget(labelPicture2, 3, 4, 2, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        sportPushButton = new QPushButton(ApplicationWindow);
        sportPushButton->setObjectName(QString::fromUtf8("sportPushButton"));
        sportPushButton->setMinimumSize(QSize(100, 100));
        sportPushButton->setStyleSheet(QString::fromUtf8("QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;;border-image: url(:/icon/ApplicationWindow/sport.png);}\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;border-image: url(:/icon/ApplicationWindow/sport.png);}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));

        verticalLayout_2->addWidget(sportPushButton);

        labelSport = new QLabel(ApplicationWindow);
        labelSport->setObjectName(QString::fromUtf8("labelSport"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelSport->setFont(font1);
        labelSport->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelSport);

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
        healthManagerPushButton->setStyleSheet(QString::fromUtf8("QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;;border-image: url(:/icon/ApplicationWindow/healthManager.png);}\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;border-image: url(:/icon/ApplicationWindow/healthManager.png);}\n"
""));

        verticalLayout_6->addWidget(healthManagerPushButton);

        labelHealthManager = new QLabel(ApplicationWindow);
        labelHealthManager->setObjectName(QString::fromUtf8("labelHealthManager"));
        labelHealthManager->setFont(font1);
        labelHealthManager->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(labelHealthManager);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        manualPushbutton = new QPushButton(ApplicationWindow);
        manualPushbutton->setObjectName(QString::fromUtf8("manualPushbutton"));
        manualPushbutton->setMinimumSize(QSize(100, 100));
        manualPushbutton->setStyleSheet(QString::fromUtf8("QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;;border-image: url(:/icon/ApplicationWindow/manual.png);}\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;border-image: url(:/icon/ApplicationWindow/manual.png);}"));

        verticalLayout_4->addWidget(manualPushbutton);

        labelManual = new QLabel(ApplicationWindow);
        labelManual->setObjectName(QString::fromUtf8("labelManual"));
        labelManual->setFont(font1);
        labelManual->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(labelManual);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);


        horizontalLayout->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout, 3, 6, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 422, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 3, 7, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 3, 9, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(149, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 4, 9, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        returnBefore = new QPushButton(ApplicationWindow);
        returnBefore->setObjectName(QString::fromUtf8("returnBefore"));
        returnBefore->setEnabled(true);
        returnBefore->setMinimumSize(QSize(60, 60));
        returnBefore->setMaximumSize(QSize(60, 60));
        returnBefore->setStyleSheet(QString::fromUtf8("QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;;border-image: url(:/icon/ApplicationWindow/return.png);}\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;border-image: url(:/icon/ApplicationWindow/return.png);}"));
        returnBefore->setIconSize(QSize(20, 20));
        returnBefore->setAutoDefault(false);

        verticalLayout_5->addWidget(returnBefore);

        labelReturn = new QLabel(ApplicationWindow);
        labelReturn->setObjectName(QString::fromUtf8("labelReturn"));
        labelReturn->setMaximumSize(QSize(60, 23));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        labelReturn->setFont(font2);
        labelReturn->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(labelReturn);


        gridLayout->addLayout(verticalLayout_5, 6, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 6, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 6, 2, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 6, 3, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 108, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_11, 6, 4, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 2, 9, 1, 1);

        equipmentConnectPushButton = new QPushButton(ApplicationWindow);
        equipmentConnectPushButton->setObjectName(QString::fromUtf8("equipmentConnectPushButton"));
        equipmentConnectPushButton->setMinimumSize(QSize(0, 100));
        QFont font3;
        font3.setPointSize(17);
        font3.setBold(true);
        font3.setWeight(75);
        equipmentConnectPushButton->setFont(font3);
        equipmentConnectPushButton->setStyleSheet(QString::fromUtf8("QPushButton{border:2px}\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;}"));

        gridLayout->addWidget(equipmentConnectPushButton, 6, 9, 1, 1);


        retranslateUi(ApplicationWindow);

        QMetaObject::connectSlotsByName(ApplicationWindow);
    } // setupUi

    void retranslateUi(QWidget *ApplicationWindow)
    {
        ApplicationWindow->setWindowTitle(QCoreApplication::translate("ApplicationWindow", "Form", nullptr));
        labelPicture->setText(QString());
        labelTiltle->setText(QCoreApplication::translate("ApplicationWindow", "\345\272\224\347\224\250\347\250\213\345\272\217", nullptr));
        labelPicture2->setText(QString());
        sportPushButton->setText(QString());
        labelSport->setText(QCoreApplication::translate("ApplicationWindow", "\350\277\220\345\212\250", nullptr));
        healthManagerPushButton->setText(QString());
        labelHealthManager->setText(QCoreApplication::translate("ApplicationWindow", "\344\275\223\350\264\250\346\217\220\345\215\207", nullptr));
        manualPushbutton->setText(QString());
        labelManual->setText(QCoreApplication::translate("ApplicationWindow", "\344\275\277\347\224\250\350\257\264\346\230\216", nullptr));
        returnBefore->setText(QString());
        labelReturn->setText(QCoreApplication::translate("ApplicationWindow", "\350\277\224\345\233\236", nullptr));
        equipmentConnectPushButton->setText(QCoreApplication::translate("ApplicationWindow", "\350\256\276\345\244\207\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ApplicationWindow: public Ui_ApplicationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATIONWINDOW_H
