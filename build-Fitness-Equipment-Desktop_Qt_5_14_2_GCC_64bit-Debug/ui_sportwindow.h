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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SportWindow
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget_3;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *sportDisplay;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_9;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_10;
    QGridLayout *gridLayout;
    QWidget *widget1;
    QLabel *heartRateDataLabel;
    QLabel *DataTypeLabel;
    QLabel *UnitLabel;
    QWidget *widget1_4;
    QLabel *GSRLabel;
    QLabel *DataTypeLabel_6;
    QLabel *UnitLabel_6;
    QWidget *widget1_3;
    QLabel *momentlLabel;
    QLabel *DataTypeLabel_5;
    QLabel *UnitLabel_5;
    QWidget *widget1_5;
    QLabel *sportCountLabel;
    QLabel *DataTypeLabel_7;
    QLabel *UnitLabel_7;
    QSpacerItem *verticalSpacer_4;
    QPushButton *returnBefore;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_4;
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
    QWidget *widget_4;
    QLabel *label;
    QLabel *label_2;
    QPushButton *startSportPushButton;
    QWidget *widget_8;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *stopSportPushButton;
    QSpacerItem *verticalSpacer;

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
        widget_3 = new QWidget(SportWindow);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(1181, 890));
        widget_3->setMaximumSize(QSize(16777215, 16777215));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 243, 255);"));
        gridLayout_4 = new QGridLayout(widget_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(107, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        sportDisplay = new QLabel(widget_3);
        sportDisplay->setObjectName(QString::fromUtf8("sportDisplay"));
        sportDisplay->setMinimumSize(QSize(981, 391));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        sportDisplay->setFont(font1);
        sportDisplay->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 245);"));
        sportDisplay->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(sportDisplay);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 2);

        verticalSpacer_9 = new QSpacerItem(20, 414, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_9, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 1, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_10, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget1 = new QWidget(widget_3);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setMinimumSize(QSize(261, 141));
        widget1->setMaximumSize(QSize(261, 141));
        heartRateDataLabel = new QLabel(widget1);
        heartRateDataLabel->setObjectName(QString::fromUtf8("heartRateDataLabel"));
        heartRateDataLabel->setGeometry(QRect(0, 0, 261, 141));
        QFont font2;
        font2.setPointSize(30);
        heartRateDataLabel->setFont(font2);
        heartRateDataLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);"));
        DataTypeLabel = new QLabel(widget1);
        DataTypeLabel->setObjectName(QString::fromUtf8("DataTypeLabel"));
        DataTypeLabel->setGeometry(QRect(20, 100, 91, 31));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        DataTypeLabel->setFont(font3);
        DataTypeLabel->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        UnitLabel = new QLabel(widget1);
        UnitLabel->setObjectName(QString::fromUtf8("UnitLabel"));
        UnitLabel->setGeometry(QRect(180, 110, 71, 18));
        QFont font4;
        font4.setPointSize(9);
        UnitLabel->setFont(font4);
        UnitLabel->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        UnitLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(widget1, 0, 0, 1, 1);

        widget1_4 = new QWidget(widget_3);
        widget1_4->setObjectName(QString::fromUtf8("widget1_4"));
        widget1_4->setMinimumSize(QSize(261, 141));
        widget1_4->setMaximumSize(QSize(261, 141));
        GSRLabel = new QLabel(widget1_4);
        GSRLabel->setObjectName(QString::fromUtf8("GSRLabel"));
        GSRLabel->setGeometry(QRect(0, 0, 261, 141));
        GSRLabel->setFont(font2);
        GSRLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);"));
        DataTypeLabel_6 = new QLabel(widget1_4);
        DataTypeLabel_6->setObjectName(QString::fromUtf8("DataTypeLabel_6"));
        DataTypeLabel_6->setGeometry(QRect(20, 100, 131, 31));
        DataTypeLabel_6->setFont(font3);
        DataTypeLabel_6->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        UnitLabel_6 = new QLabel(widget1_4);
        UnitLabel_6->setObjectName(QString::fromUtf8("UnitLabel_6"));
        UnitLabel_6->setGeometry(QRect(180, 110, 71, 18));
        UnitLabel_6->setFont(font4);
        UnitLabel_6->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        UnitLabel_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(widget1_4, 0, 1, 1, 1);

        widget1_3 = new QWidget(widget_3);
        widget1_3->setObjectName(QString::fromUtf8("widget1_3"));
        widget1_3->setMinimumSize(QSize(261, 141));
        widget1_3->setMaximumSize(QSize(261, 141));
        momentlLabel = new QLabel(widget1_3);
        momentlLabel->setObjectName(QString::fromUtf8("momentlLabel"));
        momentlLabel->setGeometry(QRect(0, 0, 261, 141));
        momentlLabel->setFont(font2);
        momentlLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);"));
        DataTypeLabel_5 = new QLabel(widget1_3);
        DataTypeLabel_5->setObjectName(QString::fromUtf8("DataTypeLabel_5"));
        DataTypeLabel_5->setGeometry(QRect(20, 100, 91, 31));
        DataTypeLabel_5->setFont(font3);
        DataTypeLabel_5->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        UnitLabel_5 = new QLabel(widget1_3);
        UnitLabel_5->setObjectName(QString::fromUtf8("UnitLabel_5"));
        UnitLabel_5->setGeometry(QRect(180, 110, 71, 18));
        UnitLabel_5->setFont(font4);
        UnitLabel_5->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        UnitLabel_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        momentlLabel->raise();
        UnitLabel_5->raise();
        DataTypeLabel_5->raise();

        gridLayout->addWidget(widget1_3, 1, 0, 1, 1);

        widget1_5 = new QWidget(widget_3);
        widget1_5->setObjectName(QString::fromUtf8("widget1_5"));
        widget1_5->setMinimumSize(QSize(261, 141));
        widget1_5->setMaximumSize(QSize(261, 141));
        sportCountLabel = new QLabel(widget1_5);
        sportCountLabel->setObjectName(QString::fromUtf8("sportCountLabel"));
        sportCountLabel->setGeometry(QRect(0, 0, 261, 141));
        sportCountLabel->setFont(font2);
        sportCountLabel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);"));
        DataTypeLabel_7 = new QLabel(widget1_5);
        DataTypeLabel_7->setObjectName(QString::fromUtf8("DataTypeLabel_7"));
        DataTypeLabel_7->setGeometry(QRect(20, 100, 121, 31));
        DataTypeLabel_7->setFont(font3);
        DataTypeLabel_7->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        UnitLabel_7 = new QLabel(widget1_5);
        UnitLabel_7->setObjectName(QString::fromUtf8("UnitLabel_7"));
        UnitLabel_7->setGeometry(QRect(180, 110, 71, 18));
        UnitLabel_7->setFont(font4);
        UnitLabel_7->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        UnitLabel_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(widget1_5, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 1, 1, 2);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_4, 2, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 1, 1, 1);

        returnBefore = new QPushButton(widget_3);
        returnBefore->setObjectName(QString::fromUtf8("returnBefore"));
        returnBefore->setEnabled(true);
        returnBefore->setMinimumSize(QSize(60, 60));
        QFont font5;
        font5.setFamily(QString::fromUtf8("AR PL UMing CN"));
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setWeight(75);
        returnBefore->setFont(font5);
        returnBefore->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:15px;;background-color: rgb(221, 236, 255);border-image: url(:/icon/SportWindow/return.png);}\n"
"\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(153, 193, 241);border:none;border-image: url(:/icon/SportWindow/return.png);}\n"
""));
        returnBefore->setIconSize(QSize(20, 20));
        returnBefore->setAutoDefault(false);

        gridLayout_4->addWidget(returnBefore, 2, 0, 1, 1);


        gridLayout_2->addWidget(widget_3, 0, 0, 4, 1);

        verticalSpacer_3 = new QSpacerItem(20, 145, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_8, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(68, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_7 = new QWidget(SportWindow);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setMinimumSize(QSize(251, 71));
        widget_7->setMaximumSize(QSize(251, 71));
        dataTypelabel_5 = new QLabel(widget_7);
        dataTypelabel_5->setObjectName(QString::fromUtf8("dataTypelabel_5"));
        dataTypelabel_5->setGeometry(QRect(0, 0, 251, 21));
        QFont font6;
        font6.setPointSize(10);
        dataTypelabel_5->setFont(font6);
        dataTypelabel_5->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        dataTypelabel_5->setAlignment(Qt::AlignCenter);
        setUnitLabel_5 = new QLabel(widget_7);
        setUnitLabel_5->setObjectName(QString::fromUtf8("setUnitLabel_5"));
        setUnitLabel_5->setGeometry(QRect(6, 50, 241, 21));
        QFont font7;
        font7.setPointSize(8);
        setUnitLabel_5->setFont(font7);
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
        QFont font8;
        font8.setPointSize(20);
        font8.setBold(true);
        font8.setWeight(75);
        ReducePushButton_5->setFont(font8);
        ReducePushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
"color: rgb(255,255,255);  \n"
"border-radius: 25px;  border: none;\n"
"border-style: outset;\n"
""));
        PromotePushButton_5 = new QPushButton(widget_7);
        PromotePushButton_5->setObjectName(QString::fromUtf8("PromotePushButton_5"));
        PromotePushButton_5->setGeometry(QRect(200, 10, 50, 50));
        PromotePushButton_5->setFont(font8);
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
        dataTypelabel_4->setFont(font6);
        dataTypelabel_4->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        dataTypelabel_4->setAlignment(Qt::AlignCenter);
        setUnitLabel_4 = new QLabel(widget_6);
        setUnitLabel_4->setObjectName(QString::fromUtf8("setUnitLabel_4"));
        setUnitLabel_4->setGeometry(QRect(6, 50, 241, 21));
        setUnitLabel_4->setFont(font7);
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
        sportTargetReducePushButton->setFont(font8);
        sportTargetReducePushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
"color: rgb(255,255,255);  \n"
"border-radius: 25px;  border: none;\n"
"border-style: outset;\n"
""));
        sportTargetPromotePushButton = new QPushButton(widget_6);
        sportTargetPromotePushButton->setObjectName(QString::fromUtf8("sportTargetPromotePushButton"));
        sportTargetPromotePushButton->setGeometry(QRect(200, 10, 50, 50));
        sportTargetPromotePushButton->setFont(font8);
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
        dataTypelabel->setFont(font6);
        dataTypelabel->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        dataTypelabel->setAlignment(Qt::AlignCenter);
        setUnitLabel = new QLabel(widget_5);
        setUnitLabel->setObjectName(QString::fromUtf8("setUnitLabel"));
        setUnitLabel->setGeometry(QRect(6, 50, 241, 21));
        setUnitLabel->setFont(font7);
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
        sportStrengthReducePushButton->setFont(font8);
        sportStrengthReducePushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
"color: rgb(255,255,255);  \n"
"border-radius: 25px;  border: none;\n"
"border-style: outset;\n"
"\n"
""));
        sportStrengthPromotePushButton = new QPushButton(widget_5);
        sportStrengthPromotePushButton->setObjectName(QString::fromUtf8("sportStrengthPromotePushButton"));
        sportStrengthPromotePushButton->setGeometry(QRect(200, 10, 50, 50));
        sportStrengthPromotePushButton->setFont(font8);
        sportStrengthPromotePushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 231, 231);\n"
"color: rgb(255,255,255);  \n"
"border-radius: 25px;  border: none;\n"
"border-style: outset;\n"
""));

        verticalLayout->addWidget(widget_5);

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
        QFont font9;
        font9.setPointSize(17);
        font9.setBold(true);
        font9.setWeight(75);
        label_2->setFont(font9);
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
        label_4->setFont(font9);
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


        gridLayout_2->addLayout(verticalLayout, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 155, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 2, 1, 1);


        retranslateUi(SportWindow);

        QMetaObject::connectSlotsByName(SportWindow);
    } // setupUi

    void retranslateUi(QWidget *SportWindow)
    {
        SportWindow->setWindowTitle(QCoreApplication::translate("SportWindow", "Form", nullptr));
        sportDisplay->setText(QString());
        heartRateDataLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\"> &nbsp;DATA</span></p></body></html>", nullptr));
        DataTypeLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">\345\277\203\347\216\207</span></p></body></html>", nullptr));
        UnitLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#deddda;\">bpm</span></p></body></html>", nullptr));
        GSRLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\"> &nbsp;DATA</span></p></body></html>", nullptr));
        DataTypeLabel_6->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">GSR</span></p></body></html>", nullptr));
        UnitLabel_6->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#deddda;\">bpm</span></p></body></html>", nullptr));
        momentlLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\"> &nbsp;DATA</span></p></body></html>", nullptr));
        DataTypeLabel_5->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">\345\212\233\347\237\251</span></p></body></html>", nullptr));
        UnitLabel_5->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#deddda;\">bpm</span></p></body></html>", nullptr));
        sportCountLabel->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\"> &nbsp;DATA</span></p></body></html>", nullptr));
        DataTypeLabel_7->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">\350\277\220\345\212\250\346\254\241\346\225\260</span></p></body></html>", nullptr));
        UnitLabel_7->setText(QCoreApplication::translate("SportWindow", "<html><head/><body><p><span style=\" color:#deddda;\">bpm</span></p></body></html>", nullptr));
        returnBefore->setText(QString());
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
    } // retranslateUi

};

namespace Ui {
    class SportWindow: public Ui_SportWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPORTWINDOW_H
