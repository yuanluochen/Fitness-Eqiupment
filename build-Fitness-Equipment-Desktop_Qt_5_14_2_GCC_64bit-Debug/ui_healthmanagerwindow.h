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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HealthManagerWindow
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *returnBefore;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_9;
    QSpacerItem *verticalSpacer_10;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_21;
    QLabel *label;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *verticalSpacer_9;
    QWidget *tab_2;
    QGridLayout *gridLayout_10;
    QSpacerItem *horizontalSpacer_24;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_25;
    QListWidget *listWidget_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_14;
    QLabel *fitnessdetectionDisplayLabel;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_15;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_10;
    QSpinBox *spinBox_3;
    QGroupBox *groupBox_9;
    QSpinBox *spinBox;
    QGroupBox *groupBox_7;
    QGroupBox *groupBox_8;
    QSpinBox *spinBox_2;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *FitnessDetectionPushButton;
    QSpacerItem *horizontalSpacer_17;
    QWidget *tab_4;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *heartRateDisplayLabel;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *heartRateDetectionPushbutton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_5;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *saO2DisplayLabel;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *saO2DetectionPushButton;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *HealthManagerWindow)
    {
        if (HealthManagerWindow->objectName().isEmpty())
            HealthManagerWindow->setObjectName(QString::fromUtf8("HealthManagerWindow"));
        HealthManagerWindow->resize(1600, 900);
        HealthManagerWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border:2px ;border-radius:15px;"));
        gridLayout = new QGridLayout(HealthManagerWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        returnBefore = new QPushButton(HealthManagerWindow);
        returnBefore->setObjectName(QString::fromUtf8("returnBefore"));
        returnBefore->setEnabled(true);
        returnBefore->setMinimumSize(QSize(60, 60));
        returnBefore->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;border-image: url(:/icon/HealthManagerWindow/return.png);}\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;border-image: url(:/icon/HealthManagerWindow/return.png);}"));
        returnBefore->setIconSize(QSize(20, 20));
        returnBefore->setAutoDefault(false);

        verticalLayout->addWidget(returnBefore);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(HealthManagerWindow);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem->setFont(font);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem1->setFont(font);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem2->setFont(font);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem3->setFont(font);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem4->setFont(font);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMaximumSize(QSize(120, 16777215));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget::item\n"
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
"	background-color: transparent;\n"
"    border-radius:15px;\n"
"	border:none;\n"
"	color:black;\n"
"}\n"
"QListWidget::item:hover\n"
"{\n"
"	background-color: rgb(246, 245, 244);;\n"
"    border-radius:15px;\n"
"	border:none;\n"
"}"));
        listWidget->setFrameShape(QFrame::NoFrame);
        listWidget->setProperty("showDropIndicator", QVariant(false));

        horizontalLayout->addWidget(listWidget);

        tabWidget = new QTabWidget(HealthManagerWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget\n"
"{\n"
"	border:none\n"
"}\n"
"\n"
"QTabBar::tab\n"
"{\n"
"	width:0px;\n"
"	height:0px;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_9 = new QGridLayout(tab);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        verticalSpacer_10 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_9->addItem(verticalSpacer_10, 0, 1, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_21);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(451, 101));
        label->setMaximumSize(QSize(451, 101));
        QFont font1;
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_22);


        gridLayout_6->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_8, 1, 0, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8(""));

        gridLayout_6->addWidget(label_3, 2, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_7, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_19);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(201, 61));
        pushButton->setMaximumSize(QSize(201, 61));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:2px;\n"
"	border-radius:15px;\n"
"	background-color: rgb(246, 245, 244);\n"
"	color: black;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(236, 235, 234);\n"
"	border:none;\n"
"}"));

        horizontalLayout_5->addWidget(pushButton);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_20);


        gridLayout_6->addLayout(horizontalLayout_5, 4, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_6, 1, 1, 2, 1);

        horizontalSpacer_23 = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_23, 1, 2, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_18, 2, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_9->addItem(verticalSpacer_9, 3, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_10 = new QGridLayout(tab_2);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        horizontalSpacer_24 = new QSpacerItem(579, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_24, 0, 0, 1, 1);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(578, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_25, 0, 2, 1, 1);

        listWidget_2 = new QListWidget(tab_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));

        gridLayout_10->addWidget(listWidget_2, 1, 0, 1, 3);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_8 = new QGridLayout(tab_3);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalSpacer_14 = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_14, 0, 0, 1, 1);

        fitnessdetectionDisplayLabel = new QLabel(tab_3);
        fitnessdetectionDisplayLabel->setObjectName(QString::fromUtf8("fitnessdetectionDisplayLabel"));
        fitnessdetectionDisplayLabel->setMinimumSize(QSize(1150, 500));
        fitnessdetectionDisplayLabel->setMaximumSize(QSize(1150, 500));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setWeight(75);
        fitnessdetectionDisplayLabel->setFont(font3);
        fitnessdetectionDisplayLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);\n"
"border:2px;border-radius:15px;"));
        fitnessdetectionDisplayLabel->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(fitnessdetectionDisplayLabel, 0, 1, 2, 3);

        horizontalSpacer_12 = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_12, 1, 0, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_13, 1, 4, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 39, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_6, 2, 3, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(351, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_16, 3, 1, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(351, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_15, 3, 2, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox_5 = new QGroupBox(tab_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(210, 120));
        groupBox_5->setMaximumSize(QSize(210, 120));
        groupBox_5->setFont(font2);
        groupBox_5->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);\n"
"border:2px;border-radius:15px;\n"
"color:white;"));
        groupBox_5->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(groupBox_5);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 40, 116, 56));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_2->addWidget(radioButton_2);


        gridLayout_5->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox_10 = new QGroupBox(tab_3);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setMinimumSize(QSize(210, 120));
        groupBox_10->setMaximumSize(QSize(210, 120));
        groupBox_10->setFont(font2);
        groupBox_10->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);\n"
"border:2px;border-radius:15px;\n"
"color:white;"));
        groupBox_10->setAlignment(Qt::AlignCenter);
        spinBox_3 = new QSpinBox(groupBox_10);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setGeometry(QRect(30, 50, 151, 41));

        gridLayout_5->addWidget(groupBox_10, 0, 1, 1, 1);

        groupBox_9 = new QGroupBox(tab_3);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setMinimumSize(QSize(210, 120));
        groupBox_9->setMaximumSize(QSize(210, 120));
        groupBox_9->setFont(font2);
        groupBox_9->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);\n"
"border:2px;border-radius:15px;\n"
"color:white"));
        groupBox_9->setAlignment(Qt::AlignCenter);
        spinBox = new QSpinBox(groupBox_9);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(30, 50, 151, 41));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(false);
        font4.setWeight(50);
        spinBox->setFont(font4);

        gridLayout_5->addWidget(groupBox_9, 1, 0, 1, 1);

        groupBox_7 = new QGroupBox(tab_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setMinimumSize(QSize(210, 120));
        groupBox_7->setMaximumSize(QSize(210, 120));
        groupBox_7->setFont(font2);
        groupBox_7->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);\n"
"border:2px;border-radius:15px;\n"
"color:white;"));
        groupBox_7->setAlignment(Qt::AlignCenter);
        groupBox_8 = new QGroupBox(groupBox_7);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(-450, -40, 210, 231));
        groupBox_8->setMinimumSize(QSize(210, 0));
        groupBox_8->setMaximumSize(QSize(210, 16777215));
        spinBox_2 = new QSpinBox(groupBox_7);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(30, 50, 151, 41));

        gridLayout_5->addWidget(groupBox_7, 1, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 0, 0, 1, 2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_11, 1, 0, 1, 1);

        FitnessDetectionPushButton = new QPushButton(tab_3);
        FitnessDetectionPushButton->setObjectName(QString::fromUtf8("FitnessDetectionPushButton"));
        FitnessDetectionPushButton->setMinimumSize(QSize(300, 50));
        FitnessDetectionPushButton->setMaximumSize(QSize(300, 50));
        FitnessDetectionPushButton->setFont(font2);
        FitnessDetectionPushButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton{\n"
"	border:2px;\n"
"	border-radius:15px;\n"
"	background-color: rgb(26, 95, 180);\n"
"	color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(16, 85, 170);\n"
"	border:none;\n"
"}"));
        FitnessDetectionPushButton->setCheckable(false);

        gridLayout_7->addWidget(FitnessDetectionPushButton, 1, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 3, 3, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_17, 3, 4, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_2 = new QGridLayout(tab_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        heartRateDisplayLabel = new QLabel(tab_4);
        heartRateDisplayLabel->setObjectName(QString::fromUtf8("heartRateDisplayLabel"));
        heartRateDisplayLabel->setMinimumSize(QSize(1150, 500));
        heartRateDisplayLabel->setMaximumSize(QSize(1150, 500));
        QFont font5;
        font5.setPointSize(23);
        font5.setBold(true);
        font5.setWeight(75);
        heartRateDisplayLabel->setFont(font5);
        heartRateDisplayLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);\n"
"border:2px;border-radius:15px;"));
        heartRateDisplayLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(heartRateDisplayLabel, 0, 1, 2, 2);

        horizontalSpacer_4 = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 193, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        heartRateDetectionPushbutton = new QPushButton(tab_4);
        heartRateDetectionPushbutton->setObjectName(QString::fromUtf8("heartRateDetectionPushbutton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(211);
        sizePolicy.setVerticalStretch(71);
        sizePolicy.setHeightForWidth(heartRateDetectionPushbutton->sizePolicy().hasHeightForWidth());
        heartRateDetectionPushbutton->setSizePolicy(sizePolicy);
        heartRateDetectionPushbutton->setMinimumSize(QSize(211, 71));
        heartRateDetectionPushbutton->setMaximumSize(QSize(211, 71));
        heartRateDetectionPushbutton->setSizeIncrement(QSize(211, 71));
        QFont font6;
        font6.setPointSize(16);
        font6.setBold(true);
        font6.setWeight(75);
        heartRateDetectionPushbutton->setFont(font6);
        heartRateDetectionPushbutton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border:2px  ;border-radius:15px;}\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;}"));

        horizontalLayout_3->addWidget(heartRateDetectionPushbutton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 1, 1, 2);

        verticalSpacer_3 = new QSpacerItem(18, 70, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 4, 1, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_3 = new QGridLayout(tab_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 0, 3, 2, 1);

        horizontalSpacer_9 = new QSpacerItem(99, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_5, 2, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        saO2DisplayLabel = new QLabel(tab_5);
        saO2DisplayLabel->setObjectName(QString::fromUtf8("saO2DisplayLabel"));
        saO2DisplayLabel->setMinimumSize(QSize(1150, 500));
        saO2DisplayLabel->setMaximumSize(QSize(1150, 500));
        saO2DisplayLabel->setFont(font5);
        saO2DisplayLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);\n"
"border:2px ;border-radius:15px;"));
        saO2DisplayLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(saO2DisplayLabel);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        saO2DetectionPushButton = new QPushButton(tab_5);
        saO2DetectionPushButton->setObjectName(QString::fromUtf8("saO2DetectionPushButton"));
        sizePolicy.setHeightForWidth(saO2DetectionPushButton->sizePolicy().hasHeightForWidth());
        saO2DetectionPushButton->setSizePolicy(sizePolicy);
        saO2DetectionPushButton->setMinimumSize(QSize(211, 71));
        saO2DetectionPushButton->setMaximumSize(QSize(211, 71));
        saO2DetectionPushButton->setSizeIncrement(QSize(211, 71));
        saO2DetectionPushButton->setFont(font6);
        saO2DetectionPushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border:2px  ;border-radius:15px;}\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;}"));

        horizontalLayout_4->addWidget(saO2DetectionPushButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_4);


        gridLayout_3->addLayout(verticalLayout_3, 0, 1, 2, 2);

        tabWidget->addTab(tab_5, QString());

        horizontalLayout->addWidget(tabWidget);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(HealthManagerWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(HealthManagerWindow);
    } // setupUi

    void retranslateUi(QWidget *HealthManagerWindow)
    {
        HealthManagerWindow->setWindowTitle(QCoreApplication::translate("HealthManagerWindow", "Form", nullptr));
        returnBefore->setText(QString());

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("HealthManagerWindow", "\344\275\223\350\203\275\346\217\220\345\215\207\350\256\241\345\210\222", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("HealthManagerWindow", "\345\201\245\350\272\253\350\256\260\345\275\225", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("HealthManagerWindow", "\344\275\223\350\203\275\346\243\200\346\265\213", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("HealthManagerWindow", "\345\277\203\347\216\207\346\243\200\346\265\213", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("HealthManagerWindow", "\350\241\200\346\260\247\346\243\200\346\265\213", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("HealthManagerWindow", "\351\235\222\345\260\221\345\271\264\344\275\223\350\203\275\346\217\220\345\215\207\350\256\241\345\210\222", nullptr));
        label_3->setText(QCoreApplication::translate("HealthManagerWindow", "<html><head/><body><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Helvetica Neue','PingFang SC','Microsoft YaHei','Source Han Sans SC','Noto Sans CJK SC','WenQuanYi Micro Hei','sans-serif'; font-size:12pt; font-weight:600; color:#121212; background-color:#ffffff;\">\345\217\227\345\272\224\350\257\225\346\225\231\350\202\262\345\275\261\345\223\215\357\274\214\351\203\250\345\210\206\345\256\266\351\225\277\345\255\230\345\234\250\351\207\215\346\231\272\350\275\273\344\275\223\347\216\260\350\261\241\357\274\214\345\277\275\350\247\206\345\257\271\345\271\274\345\260\221\345\204\277\350\272\253\344\275\223\347\264\240\350\264\250\347\232\204\345\237\271\345\205\273\357\274\214\345\271\274\345\204\277\350\272\253\344\275\223\347\264\240\350\264\250\345\221\210\344\270\213\351\231\215\350\266\213\345\212\277\343\200\202\350\265\204\346\226\231\346\230\276\347\244\272\357\274\214</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Helvetica Neue','PingFang SC','Micr"
                        "osoft YaHei','Source Han Sans SC','Noto Sans CJK SC','WenQuanYi Micro Hei','sans-serif'; font-size:12pt; font-weight:600; color:#121212; background-color:#ffffff;\">\346\210\221\345\233\2755\345\262\201\344\273\245\344\270\213\345\204\277\347\253\245\350\264\253\350\241\200\347\216\207\344\270\27212.6%\357\274\21418\345\262\201\344\273\245\344\270\213\345\204\277\347\253\245\350\266\205\351\207\215\347\232\204\345\217\221\347\224\237\347\216\207\350\276\27617.6%\343\200\202\347\244\276\344\274\232\347\232\204\345\217\221\345\261\225\343\200\201\347\247\221\346\212\200\347\232\204\350\277\233\346\255\245\345\257\271\344\272\272\346\211\215\346\217\220\345\207\272\344\272\206\346\233\264\346\226\260\343\200\201</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Helvetica Neue','PingFang SC','Microsoft YaHei','Source Han Sans SC','Noto Sans CJK SC','WenQuanYi Micro Hei','sans-serif'; font-size:12pt; font-weight:600; color:#121212; background-color:#ffffff;\">\346\233\264\351\253\230\347"
                        "\232\204\350\246\201\346\261\202\357\274\214\350\211\257\345\245\275\347\232\204\350\272\253\344\275\223\347\264\240\350\264\250\344\276\277\346\230\257\345\205\266\344\270\255\344\271\213\344\270\200\343\200\202</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Helvetica Neue','PingFang SC','Microsoft YaHei','Source Han Sans SC','Noto Sans CJK SC','WenQuanYi Micro Hei','sans-serif'; font-size:12pt; font-weight:600; color:#121212; background-color:#ffffff;\">\347\224\237\345\221\275\345\234\250\344\272\216\350\277\220\345\212\250\343\200\202\347\247\221\345\255\246\347\240\224\347\251\266\345\222\214\345\256\236\350\267\265\350\257\201\346\230\216\357\274\214\345\217\202\345\212\240\344\275\223\350\203\275\350\256\255\347\273\203\357\274\214\345\257\271\345\255\251\345\255\220\347\232\204\346\200\247\346\240\274\343\200\201\350\272\253\344\275\223\343\200\201\346\231\272\345\212\233\343\200\201\350\207\252\345\260\212\345\277\203\343\200\201\350\207\252\344\277\241\345\277\203\343\200"
                        "\201\347\244\276\344\272\244\350\203\275\345\212\233\347\255\211\347\232\204</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Helvetica Neue','PingFang SC','Microsoft YaHei','Source Han Sans SC','Noto Sans CJK SC','WenQuanYi Micro Hei','sans-serif'; font-size:12pt; font-weight:600; color:#121212; background-color:#ffffff;\">\345\217\221\345\261\225\345\222\214\345\205\273\346\210\220\351\203\275\351\235\236\345\270\270\346\234\211\345\270\256\345\212\251\357\274\214\344\270\224\345\217\227\347\233\212\347\273\210\350\272\253\343\200\202</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("HealthManagerWindow", "\345\274\200\345\220\257\344\275\223\350\203\275\346\217\220\345\215\207\344\271\213\346\227\205", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("HealthManagerWindow", "Tab 1", nullptr));
        label_2->setText(QCoreApplication::translate("HealthManagerWindow", "\345\201\245\350\272\253\350\256\260\345\275\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("HealthManagerWindow", "Tab 2", nullptr));
        fitnessdetectionDisplayLabel->setText(QString());
        groupBox_5->setTitle(QCoreApplication::translate("HealthManagerWindow", "\350\257\267\351\200\211\346\213\251\346\202\250\347\232\204\346\200\247\345\210\253", nullptr));
        radioButton->setText(QCoreApplication::translate("HealthManagerWindow", "\347\224\267", nullptr));
        radioButton_2->setText(QCoreApplication::translate("HealthManagerWindow", "\345\245\263", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("HealthManagerWindow", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\344\275\223\351\207\215(kg)", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("HealthManagerWindow", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\271\264\351\276\204", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("HealthManagerWindow", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\350\272\253\351\253\230(cm)", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("HealthManagerWindow", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\271\264\351\276\204?", nullptr));
        FitnessDetectionPushButton->setText(QCoreApplication::translate("HealthManagerWindow", "\346\214\211\344\270\213\346\214\211\351\224\256\345\274\200\345\247\213\344\275\223\350\203\275\346\265\213\350\257\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("HealthManagerWindow", "Page", nullptr));
        heartRateDisplayLabel->setText(QString());
        heartRateDetectionPushbutton->setText(QCoreApplication::translate("HealthManagerWindow", "\345\277\203\347\216\207\346\243\200\346\265\213\345\274\200\345\247\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("HealthManagerWindow", "Page", nullptr));
        saO2DisplayLabel->setText(QString());
        saO2DetectionPushButton->setText(QCoreApplication::translate("HealthManagerWindow", "\350\241\200\346\260\247\346\243\200\346\265\213\345\274\200\345\247\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("HealthManagerWindow", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HealthManagerWindow: public Ui_HealthManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEALTHMANAGERWINDOW_H
