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
    QLabel *label_7;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_5;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *sportPushButton;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QPushButton *settingPushButton;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *manualPushbutton;
    QLabel *label_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QPushButton *returnBefore;
    QLabel *label;

    void setupUi(QWidget *ApplicationWindow)
    {
        if (ApplicationWindow->objectName().isEmpty())
            ApplicationWindow->setObjectName(QString::fromUtf8("ApplicationWindow"));
        ApplicationWindow->setEnabled(true);
        ApplicationWindow->resize(1280, 800);
        label_7 = new QLabel(ApplicationWindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 220, 471, 451));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/ApplicationWindow/health.png);"));
        layoutWidget1 = new QWidget(ApplicationWindow);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(1110, 20, 152, 188));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(150, 150));
        label_6->setMaximumSize(QSize(150, 150));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/ApplicationWindow/application.png);"));

        verticalLayout->addWidget(label_6);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 0));
        label_5->setMaximumSize(QSize(150, 150));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        layoutWidget2 = new QWidget(ApplicationWindow);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(550, 230, 416, 133));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        sportPushButton = new QPushButton(layoutWidget2);
        sportPushButton->setObjectName(QString::fromUtf8("sportPushButton"));
        sportPushButton->setMinimumSize(QSize(100, 100));
        sportPushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/ApplicationWindow/sport.png);\n"
""));

        verticalLayout_2->addWidget(sportPushButton);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        settingPushButton = new QPushButton(layoutWidget2);
        settingPushButton->setObjectName(QString::fromUtf8("settingPushButton"));
        settingPushButton->setMinimumSize(QSize(100, 100));
        settingPushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/ApplicationWindow/setting.png);"));

        verticalLayout_3->addWidget(settingPushButton);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        manualPushbutton = new QPushButton(layoutWidget2);
        manualPushbutton->setObjectName(QString::fromUtf8("manualPushbutton"));
        manualPushbutton->setMinimumSize(QSize(100, 100));
        manualPushbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/ApplicationWindow/manual.png);"));

        verticalLayout_4->addWidget(manualPushbutton);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_4);

        layoutWidget = new QWidget(ApplicationWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 700, 62, 91));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        returnBefore = new QPushButton(layoutWidget);
        returnBefore->setObjectName(QString::fromUtf8("returnBefore"));
        returnBefore->setEnabled(true);
        returnBefore->setMinimumSize(QSize(60, 60));
        returnBefore->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/ApplicationWindow/return.png);"));
        returnBefore->setIconSize(QSize(20, 20));
        returnBefore->setAutoDefault(false);

        verticalLayout_5->addWidget(returnBefore);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);


        retranslateUi(ApplicationWindow);

        QMetaObject::connectSlotsByName(ApplicationWindow);
    } // setupUi

    void retranslateUi(QWidget *ApplicationWindow)
    {
        ApplicationWindow->setWindowTitle(QCoreApplication::translate("ApplicationWindow", "Form", nullptr));
        label_7->setText(QString());
        label_6->setText(QString());
        label_5->setText(QCoreApplication::translate("ApplicationWindow", "\345\272\224\347\224\250\347\250\213\345\272\217", nullptr));
        sportPushButton->setText(QString());
        label_4->setText(QCoreApplication::translate("ApplicationWindow", "\350\277\220\345\212\250", nullptr));
        settingPushButton->setText(QString());
        label_2->setText(QCoreApplication::translate("ApplicationWindow", "\350\256\276\345\244\207\350\256\276\347\275\256", nullptr));
        manualPushbutton->setText(QString());
        label_3->setText(QCoreApplication::translate("ApplicationWindow", "\344\275\277\347\224\250\350\257\264\346\230\216", nullptr));
        returnBefore->setText(QString());
        label->setText(QCoreApplication::translate("ApplicationWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ApplicationWindow: public Ui_ApplicationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATIONWINDOW_H
