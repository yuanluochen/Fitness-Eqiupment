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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SportWindow
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_7;
    QLabel *dataTypelabel_5;
    QLabel *setUnitLabel_5;
    QLabel *SetData_5;
    QPushButton *ReducePushButton_5;
    QPushButton *PromotrPushButton_5;
    QSpacerItem *verticalSpacer_7;
    QWidget *widget_6;
    QLabel *dataTypelabel_4;
    QLabel *setUnitLabel_4;
    QLabel *SetData_4;
    QPushButton *ReducePushButton_4;
    QPushButton *PromotrPushButton_4;
    QSpacerItem *verticalSpacer_6;
    QWidget *widget_5;
    QLabel *dataTypelabel;
    QLabel *setUnitLabel;
    QLabel *SetData;
    QPushButton *ReducePushButton;
    QPushButton *PromotrPushButton;
    QSpacerItem *verticalSpacer_5;
    QPushButton *startSportPushButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *stopSportPushButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget1;
    QLabel *heartRateDataLabel;
    QLabel *DataTypeLabel;
    QLabel *UnitLabel;
    QWidget *widget_2;
    QLabel *bloodOxygenDataLabel;
    QLabel *DataTypeLabel_2;
    QLabel *UnitLabel_2;
    QListWidget *EquipmentListWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *equipmentStatusLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *searchPushButton;
    QPushButton *returnBefore;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *SportWindow)
    {
        if (SportWindow->objectName().isEmpty())
            SportWindow->setObjectName(QString::fromUtf8("SportWindow"));
        SportWindow->resize(1600, 900);
        SportWindow->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(14);
        SportWindow->setFont(font);
        SportWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"border-radius:15px;"));
        gridLayout_2 = new QGridLayout(SportWindow);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 420, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 0, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_7 = new QWidget(SportWindow);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        dataTypelabel_5 = new QLabel(widget_7);
        dataTypelabel_5->setObjectName(QString::fromUtf8("dataTypelabel_5"));
        dataTypelabel_5->setGeometry(QRect(0, 0, 251, 21));
        QFont font1;
        font1.setPointSize(10);
        dataTypelabel_5->setFont(font1);
        dataTypelabel_5->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        dataTypelabel_5->setAlignment(Qt::AlignCenter);
        setUnitLabel_5 = new QLabel(widget_7);
        setUnitLabel_5->setObjectName(QString::fromUtf8("setUnitLabel_5"));
        setUnitLabel_5->setGeometry(QRect(6, 50, 241, 21));
        QFont font2;
        font2.setPointSize(8);
        setUnitLabel_5->setFont(font2);
        setUnitLabel_5->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        setUnitLabel_5->setAlignment(Qt::AlignCenter);
        SetData_5 = new QLabel(widget_7);
        SetData_5->setObjectName(QString::fromUtf8("SetData_5"));
        SetData_5->setGeometry(QRect(0, 0, 251, 71));
        SetData_5->setMinimumSize(QSize(251, 71));
        SetData_5->setMaximumSize(QSize(251, 71));
        SetData_5->setFont(font);
        SetData_5->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        SetData_5->setAlignment(Qt::AlignCenter);
        ReducePushButton_5 = new QPushButton(widget_7);
        ReducePushButton_5->setObjectName(QString::fromUtf8("ReducePushButton_5"));
        ReducePushButton_5->setGeometry(QRect(0, 10, 50, 50));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        ReducePushButton_5->setFont(font3);
        ReducePushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
"color: rgb(255,255,255);  \n"
"border-radius: 25px;  border: none;\n"
"border-style: outset;\n"
""));
        PromotrPushButton_5 = new QPushButton(widget_7);
        PromotrPushButton_5->setObjectName(QString::fromUtf8("PromotrPushButton_5"));
        PromotrPushButton_5->setGeometry(QRect(200, 10, 50, 50));
        PromotrPushButton_5->setFont(font3);
        PromotrPushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
"color: rgb(255,255,255);  \n"
"border-radius: 25px;  border: none;\n"
"border-style: outset;\n"
""));

        verticalLayout_3->addWidget(widget_7);

        verticalSpacer_7 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_7);

        widget_6 = new QWidget(SportWindow);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        dataTypelabel_4 = new QLabel(widget_6);
        dataTypelabel_4->setObjectName(QString::fromUtf8("dataTypelabel_4"));
        dataTypelabel_4->setGeometry(QRect(0, 0, 251, 21));
        dataTypelabel_4->setFont(font1);
        dataTypelabel_4->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        dataTypelabel_4->setAlignment(Qt::AlignCenter);
        setUnitLabel_4 = new QLabel(widget_6);
        setUnitLabel_4->setObjectName(QString::fromUtf8("setUnitLabel_4"));
        setUnitLabel_4->setGeometry(QRect(6, 50, 241, 21));
        setUnitLabel_4->setFont(font2);
        setUnitLabel_4->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        setUnitLabel_4->setAlignment(Qt::AlignCenter);
        SetData_4 = new QLabel(widget_6);
        SetData_4->setObjectName(QString::fromUtf8("SetData_4"));
        SetData_4->setGeometry(QRect(0, 0, 251, 71));
        SetData_4->setMinimumSize(QSize(251, 71));
        SetData_4->setMaximumSize(QSize(251, 71));
        SetData_4->setFont(font);
        SetData_4->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        SetData_4->setAlignment(Qt::AlignCenter);
        ReducePushButton_4 = new QPushButton(widget_6);
        ReducePushButton_4->setObjectName(QString::fromUtf8("ReducePushButton_4"));
        ReducePushButton_4->setGeometry(QRect(0, 10, 50, 50));
        ReducePushButton_4->setFont(font3);
        ReducePushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
"color: rgb(255,255,255);  \n"
"border-radius: 25px;  border: none;\n"
"border-style: outset;\n"
""));
        PromotrPushButton_4 = new QPushButton(widget_6);
        PromotrPushButton_4->setObjectName(QString::fromUtf8("PromotrPushButton_4"));
        PromotrPushButton_4->setGeometry(QRect(200, 10, 50, 50));
        PromotrPushButton_4->setFont(font3);
        PromotrPushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
"color: rgb(255,255,255);  \n"
"border-radius: 25px;  border: none;\n"
"border-style: outset;\n"
""));

        verticalLayout_3->addWidget(widget_6);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);

        widget_5 = new QWidget(SportWindow);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        dataTypelabel = new QLabel(widget_5);
        dataTypelabel->setObjectName(QString::fromUtf8("dataTypelabel"));
        dataTypelabel->setGeometry(QRect(0, 0, 251, 21));
        dataTypelabel->setFont(font1);
        dataTypelabel->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        dataTypelabel->setAlignment(Qt::AlignCenter);
        setUnitLabel = new QLabel(widget_5);
        setUnitLabel->setObjectName(QString::fromUtf8("setUnitLabel"));
        setUnitLabel->setGeometry(QRect(6, 50, 241, 21));
        setUnitLabel->setFont(font2);
        setUnitLabel->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        setUnitLabel->setAlignment(Qt::AlignCenter);
        SetData = new QLabel(widget_5);
        SetData->setObjectName(QString::fromUtf8("SetData"));
        SetData->setGeometry(QRect(0, 0, 251, 71));
        SetData->setMinimumSize(QSize(251, 71));
        SetData->setMaximumSize(QSize(251, 71));
        SetData->setFont(font);
        SetData->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        SetData->setAlignment(Qt::AlignCenter);
        ReducePushButton = new QPushButton(widget_5);
        ReducePushButton->setObjectName(QString::fromUtf8("ReducePushButton"));
        ReducePushButton->setGeometry(QRect(0, 10, 50, 50));
        ReducePushButton->setFont(font3);
        ReducePushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
"color: rgb(255,255,255);  \n"
"border-radius: 25px;  border: none;\n"
"border-style: outset;\n"
"\n"
""));
        PromotrPushButton = new QPushButton(widget_5);
        PromotrPushButton->setObjectName(QString::fromUtf8("PromotrPushButton"));
        PromotrPushButton->setGeometry(QRect(200, 10, 50, 50));
        PromotrPushButton->setFont(font3);
        PromotrPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
"color: rgb(255,255,255);  \n"
"border-radius: 25px;  border: none;\n"
"border-style: outset;\n"
""));

        verticalLayout_3->addWidget(widget_5);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        startSportPushButton = new QPushButton(SportWindow);
        startSportPushButton->setObjectName(QString::fromUtf8("startSportPushButton"));
        startSportPushButton->setMinimumSize(QSize(251, 61));
        startSportPushButton->setMaximumSize(QSize(251, 61));
        startSportPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
"QPushButton {\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        verticalLayout_3->addWidget(startSportPushButton);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        stopSportPushButton = new QPushButton(SportWindow);
        stopSportPushButton->setObjectName(QString::fromUtf8("stopSportPushButton"));
        stopSportPushButton->setMinimumSize(QSize(251, 61));
        stopSportPushButton->setMaximumSize(QSize(251, 61));
        stopSportPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
"QPushButton {\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        verticalLayout_3->addWidget(stopSportPushButton);


        gridLayout_2->addLayout(verticalLayout_3, 1, 2, 2, 1);

        verticalSpacer_3 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 3, 2, 1, 1);

        widget_3 = new QWidget(SportWindow);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(1181, 900));
        widget_3->setMaximumSize(QSize(1181, 900));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 243, 255);"));
        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 331, 891));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setMinimumSize(QSize(261, 141));
        widget1->setMaximumSize(QSize(261, 141));
        heartRateDataLabel = new QLabel(widget1);
        heartRateDataLabel->setObjectName(QString::fromUtf8("heartRateDataLabel"));
        heartRateDataLabel->setGeometry(QRect(0, 0, 261, 141));
        QFont font4;
        font4.setPointSize(30);
        heartRateDataLabel->setFont(font4);
        heartRateDataLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);"));
        DataTypeLabel = new QLabel(widget1);
        DataTypeLabel->setObjectName(QString::fromUtf8("DataTypeLabel"));
        DataTypeLabel->setGeometry(QRect(20, 100, 91, 31));
        QFont font5;
        font5.setPointSize(13);
        font5.setBold(true);
        font5.setWeight(75);
        DataTypeLabel->setFont(font5);
        DataTypeLabel->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        UnitLabel = new QLabel(widget1);
        UnitLabel->setObjectName(QString::fromUtf8("UnitLabel"));
        UnitLabel->setGeometry(QRect(180, 110, 71, 18));
        QFont font6;
        font6.setPointSize(9);
        UnitLabel->setFont(font6);
        UnitLabel->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        UnitLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(widget1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(261, 141));
        widget_2->setMaximumSize(QSize(261, 141));
        bloodOxygenDataLabel = new QLabel(widget_2);
        bloodOxygenDataLabel->setObjectName(QString::fromUtf8("bloodOxygenDataLabel"));
        bloodOxygenDataLabel->setGeometry(QRect(0, 0, 261, 141));
        bloodOxygenDataLabel->setFont(font4);
        bloodOxygenDataLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);"));
        DataTypeLabel_2 = new QLabel(widget_2);
        DataTypeLabel_2->setObjectName(QString::fromUtf8("DataTypeLabel_2"));
        DataTypeLabel_2->setGeometry(QRect(20, 100, 91, 31));
        DataTypeLabel_2->setFont(font5);
        DataTypeLabel_2->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        UnitLabel_2 = new QLabel(widget_2);
        UnitLabel_2->setObjectName(QString::fromUtf8("UnitLabel_2"));
        UnitLabel_2->setGeometry(QRect(180, 110, 71, 18));
        UnitLabel_2->setFont(font6);
        UnitLabel_2->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        UnitLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(widget_2);

        EquipmentListWidget = new QListWidget(widget);
        EquipmentListWidget->setObjectName(QString::fromUtf8("EquipmentListWidget"));
        EquipmentListWidget->setMinimumSize(QSize(0, 450));
        EquipmentListWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 226, 255);"));

        verticalLayout_2->addWidget(EquipmentListWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        equipmentStatusLabel = new QLabel(widget);
        equipmentStatusLabel->setObjectName(QString::fromUtf8("equipmentStatusLabel"));
        equipmentStatusLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(equipmentStatusLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        searchPushButton = new QPushButton(widget);
        searchPushButton->setObjectName(QString::fromUtf8("searchPushButton"));
        searchPushButton->setMinimumSize(QSize(25, 25));
        searchPushButton->setMaximumSize(QSize(25, 25));
        searchPushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border-radius:15px;;border-image: url(:/icon/SportWindow/search.png);;}\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton:hover{border-radius:15px;background-color: rgb(202, 226, 255);border:none;border-image: url(:/icon/SportWindow/search.png);}\n"
""));

        horizontalLayout->addWidget(searchPushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        returnBefore = new QPushButton(widget);
        returnBefore->setObjectName(QString::fromUtf8("returnBefore"));
        returnBefore->setEnabled(true);
        returnBefore->setMinimumSize(QSize(60, 60));
        QFont font7;
        font7.setFamily(QString::fromUtf8("AR PL UMing CN"));
        font7.setPointSize(14);
        font7.setBold(true);
        font7.setWeight(75);
        returnBefore->setFont(font7);
        returnBefore->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:15px;;background-color: rgb(221, 236, 255);border-image: url(:/icon/SportWindow/return.png);}\n"
"\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(153, 193, 241);border:none;border-image: url(:/icon/SportWindow/return.png);}\n"
""));
        returnBefore->setIconSize(QSize(20, 20));
        returnBefore->setAutoDefault(false);

        gridLayout->addWidget(returnBefore, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);


        gridLayout_2->addWidget(widget_3, 0, 0, 4, 1);

        horizontalSpacer_4 = new QSpacerItem(68, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 1, 1, 1);


        retranslateUi(SportWindow);

        QMetaObject::connectSlotsByName(SportWindow);
    } // setupUi

    void retranslateUi(QWidget *SportWindow)
    {
        SportWindow->setWindowTitle(QCoreApplication::translate("SportWindow", "Form", nullptr));
        dataTypelabel_5->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#62a0ea;\">dataType</span></p></body></html>", nullptr));
        setUnitLabel_5->setText(QCoreApplication::translate("SportWindow", "unit", nullptr));
        SetData_5->setText(QCoreApplication::translate("SportWindow", "SET_DATA", nullptr));
        ReducePushButton_5->setText(QCoreApplication::translate("SportWindow", "-", nullptr));
        PromotrPushButton_5->setText(QCoreApplication::translate("SportWindow", "+", nullptr));
        dataTypelabel_4->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#62a0ea;\">dataType</span></p></body></html>", nullptr));
        setUnitLabel_4->setText(QCoreApplication::translate("SportWindow", "unit", nullptr));
        SetData_4->setText(QCoreApplication::translate("SportWindow", "SET_DATA", nullptr));
        ReducePushButton_4->setText(QCoreApplication::translate("SportWindow", "-", nullptr));
        PromotrPushButton_4->setText(QCoreApplication::translate("SportWindow", "+", nullptr));
        dataTypelabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#62a0ea;\">dataType</span></p></body></html>", nullptr));
        setUnitLabel->setText(QCoreApplication::translate("SportWindow", "unit", nullptr));
        SetData->setText(QCoreApplication::translate("SportWindow", "SET_DATA", nullptr));
        ReducePushButton->setText(QCoreApplication::translate("SportWindow", "-", nullptr));
        PromotrPushButton->setText(QCoreApplication::translate("SportWindow", "+", nullptr));
        startSportPushButton->setText(QString());
        stopSportPushButton->setText(QString());
        heartRateDataLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\"> &nbsp;DATA</span></p></body></html>", nullptr));
        DataTypeLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">\345\277\203\347\216\207</span></p></body></html>", nullptr));
        UnitLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#deddda;\">bpm</span></p></body></html>", nullptr));
        bloodOxygenDataLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\"> &nbsp;DATA</span></p></body></html>", nullptr));
        DataTypeLabel_2->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">\350\241\200\346\260\247</span></p></body></html>", nullptr));
        UnitLabel_2->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:large; font-weight:600; color:#deddda;\">%</span></h3></body></html>", nullptr));
        equipmentStatusLabel->setText(QString());
        searchPushButton->setText(QString());
        returnBefore->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SportWindow: public Ui_SportWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPORTWINDOW_H
