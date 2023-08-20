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
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget_7;
    QLabel *dataTypelabel_5;
    QLabel *setUnitLabel_5;
    QLabel *SetData_5;
    QPushButton *ReducePushButton_5;
    QPushButton *PromotePushButton_5;
    QSpacerItem *verticalSpacer_7;
    QWidget *widget_6;
    QLabel *dataTypelabel_4;
    QLabel *setUnitLabel_4;
    QLabel *sportTargetLabel;
    QPushButton *sportTargetReducePushButton;
    QPushButton *sportTargetPromotePushButton;
    QSpacerItem *verticalSpacer_6;
    QWidget *widget_5;
    QLabel *dataTypelabel;
    QLabel *setUnitLabel;
    QLabel *sportStrengthLabel;
    QPushButton *sportStrengthReducePushButton;
    QPushButton *sportStrengthPromotePushButton;
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
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_3;
    QLabel *sportDisplay;
    QWidget *widget1;
    QLabel *heartRateDataLabel;
    QLabel *DataTypeLabel;
    QLabel *UnitLabel;
    QWidget *widget_2;
    QLabel *bloodOxygenDataLabel;
    QLabel *DataTypeLabel_2;
    QLabel *UnitLabel_2;
    QPushButton *returnBefore;
    QWidget *widget1_9;
    QLabel *XAccelLabel;
    QLabel *DataTypeLabel_11;
    QLabel *UnitLabel_11;
    QWidget *widget1_6;
    QLabel *YAWAngleVelocityLabel;
    QLabel *DataTypeLabel_8;
    QLabel *UnitLabel_8;
    QWidget *widget1_2;
    QLabel *YAccelLabel;
    QLabel *DataTypeLabel_4;
    QLabel *UnitLabel_4;
    QWidget *widget1_4;
    QLabel *PITCHAngleVelocityLabel;
    QLabel *DataTypeLabel_6;
    QLabel *UnitLabel_6;
    QWidget *widget1_3;
    QLabel *ZAccelLabel;
    QLabel *DataTypeLabel_5;
    QLabel *UnitLabel_5;
    QWidget *widget1_5;
    QLabel *ROLLAngleVelocityLabel;
    QLabel *DataTypeLabel_7;
    QLabel *UnitLabel_7;

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
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_8, 1, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 1, 1, 1);

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
        PromotePushButton_5 = new QPushButton(widget_7);
        PromotePushButton_5->setObjectName(QString::fromUtf8("PromotePushButton_5"));
        PromotePushButton_5->setGeometry(QRect(200, 10, 50, 50));
        PromotePushButton_5->setFont(font3);
        PromotePushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
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
        sportTargetLabel = new QLabel(widget_6);
        sportTargetLabel->setObjectName(QString::fromUtf8("sportTargetLabel"));
        sportTargetLabel->setGeometry(QRect(0, 0, 251, 71));
        sportTargetLabel->setMinimumSize(QSize(251, 71));
        sportTargetLabel->setMaximumSize(QSize(251, 71));
        sportTargetLabel->setFont(font);
        sportTargetLabel->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        sportTargetLabel->setAlignment(Qt::AlignCenter);
        sportTargetReducePushButton = new QPushButton(widget_6);
        sportTargetReducePushButton->setObjectName(QString::fromUtf8("sportTargetReducePushButton"));
        sportTargetReducePushButton->setGeometry(QRect(0, 10, 50, 50));
        sportTargetReducePushButton->setFont(font3);
        sportTargetReducePushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
"color: rgb(255,255,255);  \n"
"border-radius: 25px;  border: none;\n"
"border-style: outset;\n"
""));
        sportTargetPromotePushButton = new QPushButton(widget_6);
        sportTargetPromotePushButton->setObjectName(QString::fromUtf8("sportTargetPromotePushButton"));
        sportTargetPromotePushButton->setGeometry(QRect(200, 10, 50, 50));
        sportTargetPromotePushButton->setFont(font3);
        sportTargetPromotePushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
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
        sportStrengthLabel = new QLabel(widget_5);
        sportStrengthLabel->setObjectName(QString::fromUtf8("sportStrengthLabel"));
        sportStrengthLabel->setGeometry(QRect(0, 0, 251, 71));
        sportStrengthLabel->setMinimumSize(QSize(251, 71));
        sportStrengthLabel->setMaximumSize(QSize(251, 71));
        sportStrengthLabel->setFont(font);
        sportStrengthLabel->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        sportStrengthLabel->setAlignment(Qt::AlignCenter);
        sportStrengthReducePushButton = new QPushButton(widget_5);
        sportStrengthReducePushButton->setObjectName(QString::fromUtf8("sportStrengthReducePushButton"));
        sportStrengthReducePushButton->setGeometry(QRect(0, 10, 50, 50));
        sportStrengthReducePushButton->setFont(font3);
        sportStrengthReducePushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
"color: rgb(255,255,255);  \n"
"border-radius: 25px;  border: none;\n"
"border-style: outset;\n"
"\n"
""));
        sportStrengthPromotePushButton = new QPushButton(widget_5);
        sportStrengthPromotePushButton->setObjectName(QString::fromUtf8("sportStrengthPromotePushButton"));
        sportStrengthPromotePushButton->setGeometry(QRect(200, 10, 50, 50));
        sportStrengthPromotePushButton->setFont(font3);
        sportStrengthPromotePushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
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

        verticalSpacer_3 = new QSpacerItem(20, 145, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 145, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(68, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 3, 4, 1, 1);

        widget_3 = new QWidget(SportWindow);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(1181, 900));
        widget_3->setMaximumSize(QSize(1181, 900));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 243, 255);"));
        sportDisplay = new QLabel(widget_3);
        sportDisplay->setObjectName(QString::fromUtf8("sportDisplay"));
        sportDisplay->setGeometry(QRect(160, 20, 981, 391));
        QFont font5;
        font5.setPointSize(15);
        font5.setBold(true);
        font5.setWeight(75);
        sportDisplay->setFont(font5);
        sportDisplay->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 245);"));
        sportDisplay->setAlignment(Qt::AlignCenter);
        widget1 = new QWidget(widget_3);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(60, 450, 261, 141));
        widget1->setMinimumSize(QSize(261, 141));
        widget1->setMaximumSize(QSize(261, 141));
        heartRateDataLabel = new QLabel(widget1);
        heartRateDataLabel->setObjectName(QString::fromUtf8("heartRateDataLabel"));
        heartRateDataLabel->setGeometry(QRect(0, 0, 261, 141));
        QFont font6;
        font6.setPointSize(30);
        heartRateDataLabel->setFont(font6);
        heartRateDataLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);"));
        DataTypeLabel = new QLabel(widget1);
        DataTypeLabel->setObjectName(QString::fromUtf8("DataTypeLabel"));
        DataTypeLabel->setGeometry(QRect(20, 100, 91, 31));
        QFont font7;
        font7.setPointSize(13);
        font7.setBold(true);
        font7.setWeight(75);
        DataTypeLabel->setFont(font7);
        DataTypeLabel->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        UnitLabel = new QLabel(widget1);
        UnitLabel->setObjectName(QString::fromUtf8("UnitLabel"));
        UnitLabel->setGeometry(QRect(180, 110, 71, 18));
        QFont font8;
        font8.setPointSize(9);
        UnitLabel->setFont(font8);
        UnitLabel->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        UnitLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(60, 650, 261, 141));
        widget_2->setMinimumSize(QSize(261, 141));
        widget_2->setMaximumSize(QSize(261, 141));
        bloodOxygenDataLabel = new QLabel(widget_2);
        bloodOxygenDataLabel->setObjectName(QString::fromUtf8("bloodOxygenDataLabel"));
        bloodOxygenDataLabel->setGeometry(QRect(0, 0, 261, 141));
        bloodOxygenDataLabel->setFont(font6);
        bloodOxygenDataLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);"));
        DataTypeLabel_2 = new QLabel(widget_2);
        DataTypeLabel_2->setObjectName(QString::fromUtf8("DataTypeLabel_2"));
        DataTypeLabel_2->setGeometry(QRect(20, 100, 91, 31));
        DataTypeLabel_2->setFont(font7);
        DataTypeLabel_2->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        UnitLabel_2 = new QLabel(widget_2);
        UnitLabel_2->setObjectName(QString::fromUtf8("UnitLabel_2"));
        UnitLabel_2->setGeometry(QRect(180, 110, 71, 18));
        UnitLabel_2->setFont(font8);
        UnitLabel_2->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        UnitLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        returnBefore = new QPushButton(widget_3);
        returnBefore->setObjectName(QString::fromUtf8("returnBefore"));
        returnBefore->setEnabled(true);
        returnBefore->setGeometry(QRect(3, 840, 60, 60));
        returnBefore->setMinimumSize(QSize(60, 60));
        QFont font9;
        font9.setFamily(QString::fromUtf8("AR PL UMing CN"));
        font9.setPointSize(14);
        font9.setBold(true);
        font9.setWeight(75);
        returnBefore->setFont(font9);
        returnBefore->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:15px;;background-color: rgb(221, 236, 255);border-image: url(:/icon/SportWindow/return.png);}\n"
"\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(153, 193, 241);border:none;border-image: url(:/icon/SportWindow/return.png);}\n"
""));
        returnBefore->setIconSize(QSize(20, 20));
        returnBefore->setAutoDefault(false);
        widget1_9 = new QWidget(widget_3);
        widget1_9->setObjectName(QString::fromUtf8("widget1_9"));
        widget1_9->setGeometry(QRect(411, 451, 261, 141));
        widget1_9->setMinimumSize(QSize(261, 141));
        widget1_9->setMaximumSize(QSize(261, 141));
        XAccelLabel = new QLabel(widget1_9);
        XAccelLabel->setObjectName(QString::fromUtf8("XAccelLabel"));
        XAccelLabel->setGeometry(QRect(0, 0, 261, 141));
        XAccelLabel->setFont(font6);
        XAccelLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);"));
        DataTypeLabel_11 = new QLabel(widget1_9);
        DataTypeLabel_11->setObjectName(QString::fromUtf8("DataTypeLabel_11"));
        DataTypeLabel_11->setGeometry(QRect(20, 100, 91, 31));
        DataTypeLabel_11->setFont(font7);
        DataTypeLabel_11->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        UnitLabel_11 = new QLabel(widget1_9);
        UnitLabel_11->setObjectName(QString::fromUtf8("UnitLabel_11"));
        UnitLabel_11->setGeometry(QRect(180, 110, 71, 18));
        UnitLabel_11->setFont(font8);
        UnitLabel_11->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        UnitLabel_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget1_6 = new QWidget(widget_3);
        widget1_6->setObjectName(QString::fromUtf8("widget1_6"));
        widget1_6->setGeometry(QRect(678, 451, 261, 141));
        widget1_6->setMinimumSize(QSize(261, 141));
        widget1_6->setMaximumSize(QSize(261, 141));
        YAWAngleVelocityLabel = new QLabel(widget1_6);
        YAWAngleVelocityLabel->setObjectName(QString::fromUtf8("YAWAngleVelocityLabel"));
        YAWAngleVelocityLabel->setGeometry(QRect(0, 0, 261, 141));
        YAWAngleVelocityLabel->setFont(font6);
        YAWAngleVelocityLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);"));
        DataTypeLabel_8 = new QLabel(widget1_6);
        DataTypeLabel_8->setObjectName(QString::fromUtf8("DataTypeLabel_8"));
        DataTypeLabel_8->setGeometry(QRect(20, 100, 121, 31));
        DataTypeLabel_8->setFont(font7);
        DataTypeLabel_8->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        UnitLabel_8 = new QLabel(widget1_6);
        UnitLabel_8->setObjectName(QString::fromUtf8("UnitLabel_8"));
        UnitLabel_8->setGeometry(QRect(180, 110, 71, 18));
        UnitLabel_8->setFont(font8);
        UnitLabel_8->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        UnitLabel_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget1_2 = new QWidget(widget_3);
        widget1_2->setObjectName(QString::fromUtf8("widget1_2"));
        widget1_2->setGeometry(QRect(411, 598, 261, 141));
        widget1_2->setMinimumSize(QSize(261, 141));
        widget1_2->setMaximumSize(QSize(261, 141));
        YAccelLabel = new QLabel(widget1_2);
        YAccelLabel->setObjectName(QString::fromUtf8("YAccelLabel"));
        YAccelLabel->setGeometry(QRect(0, 0, 261, 141));
        YAccelLabel->setFont(font6);
        YAccelLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);"));
        DataTypeLabel_4 = new QLabel(widget1_2);
        DataTypeLabel_4->setObjectName(QString::fromUtf8("DataTypeLabel_4"));
        DataTypeLabel_4->setGeometry(QRect(20, 100, 91, 31));
        DataTypeLabel_4->setFont(font7);
        DataTypeLabel_4->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        UnitLabel_4 = new QLabel(widget1_2);
        UnitLabel_4->setObjectName(QString::fromUtf8("UnitLabel_4"));
        UnitLabel_4->setGeometry(QRect(180, 110, 71, 18));
        UnitLabel_4->setFont(font8);
        UnitLabel_4->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        UnitLabel_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget1_4 = new QWidget(widget_3);
        widget1_4->setObjectName(QString::fromUtf8("widget1_4"));
        widget1_4->setGeometry(QRect(678, 598, 261, 141));
        widget1_4->setMinimumSize(QSize(261, 141));
        widget1_4->setMaximumSize(QSize(261, 141));
        PITCHAngleVelocityLabel = new QLabel(widget1_4);
        PITCHAngleVelocityLabel->setObjectName(QString::fromUtf8("PITCHAngleVelocityLabel"));
        PITCHAngleVelocityLabel->setGeometry(QRect(0, 0, 261, 141));
        PITCHAngleVelocityLabel->setFont(font6);
        PITCHAngleVelocityLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);"));
        DataTypeLabel_6 = new QLabel(widget1_4);
        DataTypeLabel_6->setObjectName(QString::fromUtf8("DataTypeLabel_6"));
        DataTypeLabel_6->setGeometry(QRect(20, 100, 131, 31));
        DataTypeLabel_6->setFont(font7);
        DataTypeLabel_6->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        UnitLabel_6 = new QLabel(widget1_4);
        UnitLabel_6->setObjectName(QString::fromUtf8("UnitLabel_6"));
        UnitLabel_6->setGeometry(QRect(180, 110, 71, 18));
        UnitLabel_6->setFont(font8);
        UnitLabel_6->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        UnitLabel_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget1_3 = new QWidget(widget_3);
        widget1_3->setObjectName(QString::fromUtf8("widget1_3"));
        widget1_3->setGeometry(QRect(411, 745, 261, 141));
        widget1_3->setMinimumSize(QSize(261, 141));
        widget1_3->setMaximumSize(QSize(261, 141));
        ZAccelLabel = new QLabel(widget1_3);
        ZAccelLabel->setObjectName(QString::fromUtf8("ZAccelLabel"));
        ZAccelLabel->setGeometry(QRect(0, 0, 261, 141));
        ZAccelLabel->setFont(font6);
        ZAccelLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);"));
        DataTypeLabel_5 = new QLabel(widget1_3);
        DataTypeLabel_5->setObjectName(QString::fromUtf8("DataTypeLabel_5"));
        DataTypeLabel_5->setGeometry(QRect(20, 100, 91, 31));
        DataTypeLabel_5->setFont(font7);
        DataTypeLabel_5->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        UnitLabel_5 = new QLabel(widget1_3);
        UnitLabel_5->setObjectName(QString::fromUtf8("UnitLabel_5"));
        UnitLabel_5->setGeometry(QRect(180, 110, 71, 18));
        UnitLabel_5->setFont(font8);
        UnitLabel_5->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        UnitLabel_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ZAccelLabel->raise();
        UnitLabel_5->raise();
        DataTypeLabel_5->raise();
        widget1_5 = new QWidget(widget_3);
        widget1_5->setObjectName(QString::fromUtf8("widget1_5"));
        widget1_5->setGeometry(QRect(678, 745, 261, 141));
        widget1_5->setMinimumSize(QSize(261, 141));
        widget1_5->setMaximumSize(QSize(261, 141));
        ROLLAngleVelocityLabel = new QLabel(widget1_5);
        ROLLAngleVelocityLabel->setObjectName(QString::fromUtf8("ROLLAngleVelocityLabel"));
        ROLLAngleVelocityLabel->setGeometry(QRect(0, 0, 261, 141));
        ROLLAngleVelocityLabel->setFont(font6);
        ROLLAngleVelocityLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);"));
        DataTypeLabel_7 = new QLabel(widget1_5);
        DataTypeLabel_7->setObjectName(QString::fromUtf8("DataTypeLabel_7"));
        DataTypeLabel_7->setGeometry(QRect(20, 100, 121, 31));
        DataTypeLabel_7->setFont(font7);
        DataTypeLabel_7->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        UnitLabel_7 = new QLabel(widget1_5);
        UnitLabel_7->setObjectName(QString::fromUtf8("UnitLabel_7"));
        UnitLabel_7->setGeometry(QRect(180, 110, 71, 18));
        UnitLabel_7->setFont(font8);
        UnitLabel_7->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        UnitLabel_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

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
        PromotePushButton_5->setText(QCoreApplication::translate("SportWindow", "+", nullptr));
        dataTypelabel_4->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#62a0ea;\">\345\201\245\350\272\253\347\233\256\346\240\207</span></p></body></html>", nullptr));
        setUnitLabel_4->setText(QCoreApplication::translate("SportWindow", "unit", nullptr));
        sportTargetLabel->setText(QCoreApplication::translate("SportWindow", "SET_DATA", nullptr));
        sportTargetReducePushButton->setText(QCoreApplication::translate("SportWindow", "-", nullptr));
        sportTargetPromotePushButton->setText(QCoreApplication::translate("SportWindow", "+", nullptr));
        dataTypelabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#62a0ea;\">\345\201\245\350\272\253\345\274\272\345\272\246</span></p></body></html>", nullptr));
        setUnitLabel->setText(QCoreApplication::translate("SportWindow", "unit", nullptr));
        sportStrengthLabel->setText(QCoreApplication::translate("SportWindow", "SET_DATA", nullptr));
        sportStrengthReducePushButton->setText(QCoreApplication::translate("SportWindow", "-", nullptr));
        sportStrengthPromotePushButton->setText(QCoreApplication::translate("SportWindow", "+", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">\345\201\245\350\272\253\345\274\200\345\247\213</span></p></body></html>", nullptr));
        startSportPushButton->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">\345\201\245\350\272\253\345\201\234\346\255\242</span></p></body></html>", nullptr));
        stopSportPushButton->setText(QString());
        sportDisplay->setText(QString());
        heartRateDataLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\"> &nbsp;DATA</span></p></body></html>", nullptr));
        DataTypeLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">\345\277\203\347\216\207</span></p></body></html>", nullptr));
        UnitLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#deddda;\">bpm</span></p></body></html>", nullptr));
        bloodOxygenDataLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\"> &nbsp;DATA</span></p></body></html>", nullptr));
        DataTypeLabel_2->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">\350\241\200\346\260\247</span></p></body></html>", nullptr));
        UnitLabel_2->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><h3 style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:large; font-weight:600; color:#deddda;\">%</span></h3></body></html>", nullptr));
        returnBefore->setText(QString());
        XAccelLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\"> &nbsp;DATA</span></p></body></html>", nullptr));
        DataTypeLabel_11->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">X\350\275\264\345\212\240\351\200\237\345\272\246</span></p></body></html>", nullptr));
        UnitLabel_11->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#deddda;\">bpm</span></p></body></html>", nullptr));
        YAWAngleVelocityLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\"> &nbsp;DATA</span></p></body></html>", nullptr));
        DataTypeLabel_8->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">YAW\350\275\264\350\247\222\351\200\237\345\272\246</span></p></body></html>", nullptr));
        UnitLabel_8->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#deddda;\">bpm</span></p></body></html>", nullptr));
        YAccelLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\"> &nbsp;DATA</span></p></body></html>", nullptr));
        DataTypeLabel_4->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Y\350\275\264\345\212\240\351\200\237\345\272\246</span></p></body></html>", nullptr));
        UnitLabel_4->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#deddda;\">bpm</span></p></body></html>", nullptr));
        PITCHAngleVelocityLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\"> &nbsp;DATA</span></p></body></html>", nullptr));
        DataTypeLabel_6->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">PITCH\350\275\264\350\247\222\351\200\237\345\272\246</span></p></body></html>", nullptr));
        UnitLabel_6->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#deddda;\">bpm</span></p></body></html>", nullptr));
        ZAccelLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\"> &nbsp;DATA</span></p></body></html>", nullptr));
        DataTypeLabel_5->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Z\350\275\264\345\212\240\351\200\237\345\272\246</span></p></body></html>", nullptr));
        UnitLabel_5->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#deddda;\">bpm</span></p></body></html>", nullptr));
        ROLLAngleVelocityLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\"> &nbsp;DATA</span></p></body></html>", nullptr));
        DataTypeLabel_7->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">ROLL\350\275\264\350\247\222\351\200\237\345\272\246</span></p></body></html>", nullptr));
        UnitLabel_7->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#deddda;\">bpm</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SportWindow: public Ui_SportWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPORTWINDOW_H
