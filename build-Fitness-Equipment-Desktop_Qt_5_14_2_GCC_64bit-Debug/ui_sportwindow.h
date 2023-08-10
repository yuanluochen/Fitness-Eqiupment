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
    QVBoxLayout *verticalLayout;
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
    QWidget *widget_4;
    QLabel *label;
    QLabel *label_2;
    QPushButton *startSportPushButton;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_8;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *stopSportPushButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget1;
    QLabel *heartRateDataLabel;
    QLabel *DataTypeLabel;
    QLabel *UnitLabel;
    QWidget *widget_2;
    QLabel *bloodOxygenDataLabel;
    QLabel *DataTypeLabel_2;
    QLabel *UnitLabel_2;
    QWidget *widget_9;
    QListWidget *EquipmentListWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *equipmentStatusLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *searchPushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *returnBefore;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *SportWindow)
    {
        if (SportWindow->objectName().isEmpty())
            SportWindow->setObjectName(QString::fromUtf8("SportWindow"));
        SportWindow->resize(1600, 918);
        SportWindow->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(14);
        SportWindow->setFont(font);
        SportWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
"border-radius:15px;"));
        gridLayout_2 = new QGridLayout(SportWindow);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_7 = new QWidget(SportWindow);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setMinimumSize(QSize(251, 71));
        widget_7->setMaximumSize(QSize(251, 71));
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

        verticalLayout->addWidget(widget_7);

        verticalSpacer_7 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_7);

        widget_6 = new QWidget(SportWindow);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setMinimumSize(QSize(251, 71));
        widget_6->setMaximumSize(QSize(251, 71));
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

        verticalLayout->addWidget(widget_6);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        widget_5 = new QWidget(SportWindow);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMinimumSize(QSize(251, 71));
        widget_5->setMaximumSize(QSize(251, 71));
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

        verticalLayout->addWidget(widget_5);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        widget_4 = new QWidget(SportWindow);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(251, 61));
        widget_4->setMaximumSize(QSize(251, 61));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
"QPushButton {\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
""));
        label = new QLabel(widget_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 41, 41));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/SportWindow/start.png);\n"
"background-color: transparent;"));
        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 0, 190, 61));
        QFont font4;
        font4.setPointSize(17);
        font4.setBold(true);
        font4.setWeight(75);
        label_2->setFont(font4);
        label_2->setAlignment(Qt::AlignCenter);
        startSportPushButton = new QPushButton(widget_4);
        startSportPushButton->setObjectName(QString::fromUtf8("startSportPushButton"));
        startSportPushButton->setGeometry(QRect(0, 0, 251, 61));
        startSportPushButton->setMinimumSize(QSize(251, 61));
        startSportPushButton->setMaximumSize(QSize(251, 61));
        startSportPushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"QPushButton {\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        verticalLayout->addWidget(widget_4);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        widget_8 = new QWidget(SportWindow);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setMinimumSize(QSize(251, 61));
        widget_8->setMaximumSize(QSize(251, 61));
        widget_8->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
"QPushButton {\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
""));
        label_3 = new QLabel(widget_8);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 41, 41));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/SportWindow/stop.png);\n"
"background-color: transparent;"));
        label_4 = new QLabel(widget_8);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 0, 190, 61));
        label_4->setFont(font4);
        label_4->setAlignment(Qt::AlignCenter);
        stopSportPushButton = new QPushButton(widget_8);
        stopSportPushButton->setObjectName(QString::fromUtf8("stopSportPushButton"));
        stopSportPushButton->setGeometry(QRect(0, 0, 251, 61));
        stopSportPushButton->setMinimumSize(QSize(251, 61));
        stopSportPushButton->setMaximumSize(QSize(251, 61));
        stopSportPushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"QPushButton {\n"
"    color: white;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        verticalLayout->addWidget(widget_8);


        gridLayout_2->addLayout(verticalLayout, 2, 2, 2, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 145, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(68, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 3, 4, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_8, 1, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 145, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 3, 1, 1);

        widget_3 = new QWidget(SportWindow);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(1181, 900));
        widget_3->setMaximumSize(QSize(1181, 900));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 243, 255);"));
        layoutWidget = new QWidget(widget_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1, 11, 293, 891));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget1 = new QWidget(layoutWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setMinimumSize(QSize(261, 141));
        widget1->setMaximumSize(QSize(261, 141));
        heartRateDataLabel = new QLabel(widget1);
        heartRateDataLabel->setObjectName(QString::fromUtf8("heartRateDataLabel"));
        heartRateDataLabel->setGeometry(QRect(0, 0, 261, 141));
        QFont font5;
        font5.setPointSize(30);
        heartRateDataLabel->setFont(font5);
        heartRateDataLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);"));
        DataTypeLabel = new QLabel(widget1);
        DataTypeLabel->setObjectName(QString::fromUtf8("DataTypeLabel"));
        DataTypeLabel->setGeometry(QRect(20, 100, 91, 31));
        QFont font6;
        font6.setPointSize(13);
        font6.setBold(true);
        font6.setWeight(75);
        DataTypeLabel->setFont(font6);
        DataTypeLabel->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        UnitLabel = new QLabel(widget1);
        UnitLabel->setObjectName(QString::fromUtf8("UnitLabel"));
        UnitLabel->setGeometry(QRect(180, 110, 71, 18));
        QFont font7;
        font7.setPointSize(9);
        UnitLabel->setFont(font7);
        UnitLabel->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        UnitLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(widget1);

        widget_2 = new QWidget(layoutWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(261, 141));
        widget_2->setMaximumSize(QSize(261, 141));
        bloodOxygenDataLabel = new QLabel(widget_2);
        bloodOxygenDataLabel->setObjectName(QString::fromUtf8("bloodOxygenDataLabel"));
        bloodOxygenDataLabel->setGeometry(QRect(0, 0, 261, 141));
        bloodOxygenDataLabel->setFont(font5);
        bloodOxygenDataLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);"));
        DataTypeLabel_2 = new QLabel(widget_2);
        DataTypeLabel_2->setObjectName(QString::fromUtf8("DataTypeLabel_2"));
        DataTypeLabel_2->setGeometry(QRect(20, 100, 91, 31));
        DataTypeLabel_2->setFont(font6);
        DataTypeLabel_2->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        UnitLabel_2 = new QLabel(widget_2);
        UnitLabel_2->setObjectName(QString::fromUtf8("UnitLabel_2"));
        UnitLabel_2->setGeometry(QRect(180, 110, 71, 18));
        UnitLabel_2->setFont(font7);
        UnitLabel_2->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        UnitLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(widget_2);

        widget_9 = new QWidget(layoutWidget);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setMinimumSize(QSize(0, 470));
        widget_9->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 193, 241);"));
        EquipmentListWidget = new QListWidget(widget_9);
        EquipmentListWidget->setObjectName(QString::fromUtf8("EquipmentListWidget"));
        EquipmentListWidget->setGeometry(QRect(0, 0, 261, 471));
        EquipmentListWidget->setMinimumSize(QSize(0, 450));
        EquipmentListWidget->setFocusPolicy(Qt::NoFocus);
        EquipmentListWidget->setStyleSheet(QString::fromUtf8("QListWidget::item\n"
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

        verticalLayout_2->addWidget(widget_9);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        equipmentStatusLabel = new QLabel(layoutWidget);
        equipmentStatusLabel->setObjectName(QString::fromUtf8("equipmentStatusLabel"));
        equipmentStatusLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(equipmentStatusLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        searchPushButton = new QPushButton(layoutWidget);
        searchPushButton->setObjectName(QString::fromUtf8("searchPushButton"));
        searchPushButton->setMinimumSize(QSize(25, 25));
        searchPushButton->setMaximumSize(QSize(25, 25));
        searchPushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"	border-radius:5px;\n"
"	border-image: url(:/icon/SportWindow/search.png);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-radius:5px;\n"
"	background-color: rgb(202, 226, 255);\n"
"	border:none;\n"
"	border-image: url(:/icon/SportWindow/search.png);\n"
"}\n"
""));

        horizontalLayout->addWidget(searchPushButton);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        returnBefore = new QPushButton(layoutWidget);
        returnBefore->setObjectName(QString::fromUtf8("returnBefore"));
        returnBefore->setEnabled(true);
        returnBefore->setMinimumSize(QSize(60, 60));
        QFont font8;
        font8.setFamily(QString::fromUtf8("AR PL UMing CN"));
        font8.setPointSize(14);
        font8.setBold(true);
        font8.setWeight(75);
        returnBefore->setFont(font8);
        returnBefore->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:15px;;background-color: rgb(221, 236, 255);border-image: url(:/icon/SportWindow/return.png);}\n"
"\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(153, 193, 241);border:none;border-image: url(:/icon/SportWindow/return.png);}\n"
""));
        returnBefore->setIconSize(QSize(20, 20));
        returnBefore->setAutoDefault(false);

        horizontalLayout_2->addWidget(returnBefore);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);


        gridLayout_2->addWidget(widget_3, 0, 0, 5, 1);


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
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">\345\201\245\350\272\253\345\274\200\345\247\213</span></p></body></html>", nullptr));
        startSportPushButton->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">\345\201\245\350\272\253\345\201\234\346\255\242</span></p></body></html>", nullptr));
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
