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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
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
    QWidget *layoutWidget2;
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
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *displayLabel;
    QWidget *tab_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

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
        layoutWidget2 = new QWidget(HealthManagerWindow);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(720, 590, 472, 153));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        BMICalcPushButton = new QPushButton(layoutWidget2);
        BMICalcPushButton->setObjectName(QString::fromUtf8("BMICalcPushButton"));
        BMICalcPushButton->setMinimumSize(QSize(120, 120));
        BMICalcPushButton->setMaximumSize(QSize(120, 120));
        BMICalcPushButton->setStyleSheet(QString::fromUtf8("QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;border-image: url(:/icon/HealthManagerWindow/BMI.png);}\n"
"\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;border-image: url(:/icon/HealthManagerWindow/BMI.png);}"));

        verticalLayout_4->addWidget(BMICalcPushButton);

        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        SaO2DetectionPushButton = new QPushButton(layoutWidget2);
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

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        heartRateDetectionPushbutton = new QPushButton(layoutWidget2);
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

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout_6);

        tabWidget = new QTabWidget(HealthManagerWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(630, 110, 751, 431));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        displayLabel = new QLabel(tab);
        displayLabel->setObjectName(QString::fromUtf8("displayLabel"));
        displayLabel->setGeometry(QRect(0, 0, 751, 391));
        QFont font1;
        font1.setPointSize(19);
        displayLabel->setFont(font1);
        displayLabel->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 90, 431, 21));
        lineEdit_2 = new QLineEdit(tab_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 150, 431, 21));
        lineEdit_3 = new QLineEdit(tab_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(60, 220, 431, 21));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 280, 431, 31));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(HealthManagerWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(HealthManagerWindow);
    } // setupUi

    void retranslateUi(QWidget *HealthManagerWindow)
    {
        HealthManagerWindow->setWindowTitle(QCoreApplication::translate("HealthManagerWindow", "Form", nullptr));
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("HealthManagerWindow", "\345\201\245\345\272\267\346\243\200\346\265\213", nullptr));
        returnBefore->setText(QString());
        BMICalcPushButton->setText(QString());
        label->setText(QCoreApplication::translate("HealthManagerWindow", "BMI\350\256\241\347\256\227", nullptr));
        SaO2DetectionPushButton->setText(QString());
        label_3->setText(QCoreApplication::translate("HealthManagerWindow", "\350\241\200\346\260\247\346\243\200\346\265\213", nullptr));
        heartRateDetectionPushbutton->setText(QString());
        label_5->setText(QCoreApplication::translate("HealthManagerWindow", "\345\277\203\347\216\207\346\243\200\346\265\213", nullptr));
        displayLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("HealthManagerWindow", "Tab 1", nullptr));
        pushButton->setText(QCoreApplication::translate("HealthManagerWindow", "\345\274\200\345\247\213\350\256\241\347\256\227", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("HealthManagerWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HealthManagerWindow: public Ui_HealthManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEALTHMANAGERWINDOW_H
