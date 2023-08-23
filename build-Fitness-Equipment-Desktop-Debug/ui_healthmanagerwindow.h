/********************************************************************************
** Form generated from reading UI file 'healthmanagerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
    QLabel *label;
    QWidget *tab_2;
    QLabel *label_2;
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
    QWidget *widget;
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
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *saO2DisplayLabel;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *saO2DetectionPushButton;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_9;

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
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 170, 71, 18));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 230, 71, 18));
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
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        fitnessdetectionDisplayLabel->setFont(font1);
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
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        groupBox_5->setFont(font2);
        groupBox_5->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(26, 95, 180);\n"
"border:2px;border-radius:15px;\n"
"color:white;"));
        groupBox_5->setAlignment(Qt::AlignCenter);
        widget = new QWidget(groupBox_5);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 40, 116, 56));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
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
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        spinBox->setFont(font3);

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
        QFont font4;
        font4.setPointSize(23);
        font4.setBold(true);
        font4.setWeight(75);
        heartRateDisplayLabel->setFont(font4);
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
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(true);
        font5.setWeight(75);
        heartRateDetectionPushbutton->setFont(font5);
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
        gridLayout_4 = new QGridLayout(tab_5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        saO2DisplayLabel = new QLabel(tab_5);
        saO2DisplayLabel->setObjectName(QString::fromUtf8("saO2DisplayLabel"));
        saO2DisplayLabel->setMinimumSize(QSize(1150, 500));
        saO2DisplayLabel->setMaximumSize(QSize(1150, 500));
        saO2DisplayLabel->setFont(font4);
        saO2DisplayLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);\n"
"border:2px ;border-radius:15px;"));
        saO2DisplayLabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(saO2DisplayLabel, 0, 1, 2, 2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 1, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_4, 2, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        horizontalSpacer_10 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        saO2DetectionPushButton = new QPushButton(tab_5);
        saO2DetectionPushButton->setObjectName(QString::fromUtf8("saO2DetectionPushButton"));
        sizePolicy.setHeightForWidth(saO2DetectionPushButton->sizePolicy().hasHeightForWidth());
        saO2DetectionPushButton->setSizePolicy(sizePolicy);
        saO2DetectionPushButton->setMinimumSize(QSize(211, 71));
        saO2DetectionPushButton->setMaximumSize(QSize(211, 71));
        saO2DetectionPushButton->setSizeIncrement(QSize(211, 71));
        saO2DetectionPushButton->setFont(font5);
        saO2DetectionPushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border:2px  ;border-radius:15px;}\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;}"));

        horizontalLayout_4->addWidget(saO2DetectionPushButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        gridLayout_3->addLayout(horizontalLayout_4, 3, 0, 1, 3);

        verticalSpacer_5 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_5, 4, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_9, 4, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());

        horizontalLayout->addWidget(tabWidget);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(HealthManagerWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(HealthManagerWindow);
    } // setupUi

    void retranslateUi(QWidget *HealthManagerWindow)
    {
        HealthManagerWindow->setWindowTitle(QCoreApplication::translate("HealthManagerWindow", "Form", nullptr));
        returnBefore->setText(QString());

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("HealthManagerWindow", "\344\275\223\350\264\250\346\217\220\345\215\207\350\256\241\345\210\222", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("HealthManagerWindow", "\345\201\245\350\272\253\350\256\260\345\275\225", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("HealthManagerWindow", "\344\275\223\350\264\250\346\243\200\346\265\213", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("HealthManagerWindow", "\345\277\203\347\216\207\346\243\200\346\265\213", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("HealthManagerWindow", "\350\241\200\346\260\247\346\243\200\346\265\213", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("HealthManagerWindow", "1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("HealthManagerWindow", "Tab 1", nullptr));
        label_2->setText(QCoreApplication::translate("HealthManagerWindow", "2", nullptr));
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
