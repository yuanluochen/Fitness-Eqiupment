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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QLabel *displayLabel;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_9;
    QListWidget *equipmentListWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *equipmentStatusLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *searchPushButton;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *BMICalcPushButton;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    QPushButton *SaO2DetectionPushButton;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_6;
    QPushButton *heartRateDetectionPushbutton;
    QLabel *label_5;

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
        displayLabel = new QLabel(HealthManagerWindow);
        displayLabel->setObjectName(QString::fromUtf8("displayLabel"));
        displayLabel->setGeometry(QRect(590, 120, 781, 391));
        QFont font1;
        font1.setPointSize(15);
        displayLabel->setFont(font1);
        displayLabel->setAlignment(Qt::AlignCenter);
        widget = new QWidget(HealthManagerWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget1 = new QWidget(HealthManagerWindow);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 300, 281, 361));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_9 = new QWidget(widget1);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setMinimumSize(QSize(0, 300));
        widget_9->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 193, 241);"));
        equipmentListWidget = new QListWidget(widget_9);
        equipmentListWidget->setObjectName(QString::fromUtf8("equipmentListWidget"));
        equipmentListWidget->setGeometry(QRect(0, 0, 281, 301));
        equipmentListWidget->setMinimumSize(QSize(0, 300));
        equipmentListWidget->setFocusPolicy(Qt::NoFocus);
        equipmentListWidget->setStyleSheet(QString::fromUtf8("QListWidget::item\n"
"{\n"
"	height:90px;\n"
"}\n"
"QListWidget\n"
"{\n"
"	background-color:transparent;\n"
"    border:none;\n"
"	border-radius:15px;\n"
"\n"
"}\n"
"QListWidget::item:selected\n"
"{\n"
"	background-color:transparent;\n"
"	border-radius:15px;\n"
"	border:none;\n"
"}\n"
"QListWidget::item:hover\n"
"{\n"
"	background-color:rgb(133, 173, 221);\n"
"    border-radius:15px;\n"
"	border:none;\n"
"}\n"
"\n"
""));

        verticalLayout_3->addWidget(widget_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        equipmentStatusLabel = new QLabel(widget1);
        equipmentStatusLabel->setObjectName(QString::fromUtf8("equipmentStatusLabel"));
        equipmentStatusLabel->setMinimumSize(QSize(0, 25));
        equipmentStatusLabel->setMaximumSize(QSize(16777215, 20));
        equipmentStatusLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(equipmentStatusLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        searchPushButton = new QPushButton(widget1);
        searchPushButton->setObjectName(QString::fromUtf8("searchPushButton"));
        searchPushButton->setMinimumSize(QSize(25, 25));
        searchPushButton->setMaximumSize(QSize(25, 25));
        searchPushButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;border-image: url(:/icon/SportWindow/search.png);}\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;	border-image: url(:/icon/SportWindow/search.png);}"));

        horizontalLayout->addWidget(searchPushButton);


        verticalLayout_3->addLayout(horizontalLayout);

        widget2 = new QWidget(HealthManagerWindow);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(720, 590, 472, 153));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        BMICalcPushButton = new QPushButton(widget2);
        BMICalcPushButton->setObjectName(QString::fromUtf8("BMICalcPushButton"));
        BMICalcPushButton->setMinimumSize(QSize(120, 120));
        BMICalcPushButton->setMaximumSize(QSize(120, 120));
        BMICalcPushButton->setStyleSheet(QString::fromUtf8("QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;border-image: url(:/icon/HealthManagerWindow/BMI.png);}\n"
"\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;border-image: url(:/icon/HealthManagerWindow/BMI.png);}"));

        verticalLayout_4->addWidget(BMICalcPushButton);

        label = new QLabel(widget2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        SaO2DetectionPushButton = new QPushButton(widget2);
        SaO2DetectionPushButton->setObjectName(QString::fromUtf8("SaO2DetectionPushButton"));
        SaO2DetectionPushButton->setMinimumSize(QSize(120, 120));
        SaO2DetectionPushButton->setMaximumSize(QSize(120, 120));
        SaO2DetectionPushButton->setStyleSheet(QString::fromUtf8("QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;border-image: url(:/icon/HealthManagerWindow/SaO2.png);}\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;border-image: url(:/icon/HealthManagerWindow/SaO2.png);}"));

        verticalLayout_5->addWidget(SaO2DetectionPushButton);

        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        heartRateDetectionPushbutton = new QPushButton(widget2);
        heartRateDetectionPushbutton->setObjectName(QString::fromUtf8("heartRateDetectionPushbutton"));
        heartRateDetectionPushbutton->setMinimumSize(QSize(120, 120));
        heartRateDetectionPushbutton->setMaximumSize(QSize(120, 120));
        heartRateDetectionPushbutton->setStyleSheet(QString::fromUtf8("QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;border-image: url(:/icon/HealthManagerWindow/heartRate.png);}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;border-image: url(:/icon/HealthManagerWindow/heartRate.png);}"));

        verticalLayout_6->addWidget(heartRateDetectionPushbutton);

        label_5 = new QLabel(widget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout_6);


        retranslateUi(HealthManagerWindow);

        QMetaObject::connectSlotsByName(HealthManagerWindow);
    } // setupUi

    void retranslateUi(QWidget *HealthManagerWindow)
    {
        HealthManagerWindow->setWindowTitle(QCoreApplication::translate("HealthManagerWindow", "Form", nullptr));
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("HealthManagerWindow", "\345\201\245\345\272\267\347\256\241\347\220\206", nullptr));
        returnBefore->setText(QString());
        displayLabel->setText(QString());
        equipmentStatusLabel->setText(QString());
        searchPushButton->setText(QString());
        BMICalcPushButton->setText(QString());
        label->setText(QCoreApplication::translate("HealthManagerWindow", "BMI\350\256\241\347\256\227", nullptr));
        SaO2DetectionPushButton->setText(QString());
        label_3->setText(QCoreApplication::translate("HealthManagerWindow", "\350\241\200\346\260\247\346\243\200\346\265\213", nullptr));
        heartRateDetectionPushbutton->setText(QString());
        label_5->setText(QCoreApplication::translate("HealthManagerWindow", "\345\277\203\347\216\207\346\243\200\346\265\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HealthManagerWindow: public Ui_HealthManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEALTHMANAGERWINDOW_H
