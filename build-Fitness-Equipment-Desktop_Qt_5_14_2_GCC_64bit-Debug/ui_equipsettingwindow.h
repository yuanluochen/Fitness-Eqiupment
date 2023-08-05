/********************************************************************************
** Form generated from reading UI file 'equipsettingwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUIPSETTINGWINDOW_H
#define UI_EQUIPSETTINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EquipSettingWindow
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QListWidget *FitnessEquipmentListWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QListWidget *monitoringEqipmentListWidget_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *searchPushButton;
    QLabel *equipmentStatus;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *returnBefore;
    QLabel *label;
    QSpacerItem *verticalSpacer_9;

    void setupUi(QWidget *EquipSettingWindow)
    {
        if (EquipSettingWindow->objectName().isEmpty())
            EquipSettingWindow->setObjectName(QString::fromUtf8("EquipSettingWindow"));
        EquipSettingWindow->resize(1600, 900);
        EquipSettingWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:15px;"));
        gridLayout_2 = new QGridLayout(EquipSettingWindow);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 3, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_8, 0, 2, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_7 = new QLabel(EquipSettingWindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(EquipSettingWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_5);

        FitnessEquipmentListWidget = new QListWidget(EquipSettingWindow);
        FitnessEquipmentListWidget->setObjectName(QString::fromUtf8("FitnessEquipmentListWidget"));
        FitnessEquipmentListWidget->setStyleSheet(QString::fromUtf8("border:2px solid rgb(20,196,188);border-radius:15px;\n"
"QListWidget::item{height:339px;width:100px};"));

        horizontalLayout->addWidget(FitnessEquipmentListWidget);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(EquipSettingWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_6);

        monitoringEqipmentListWidget_2 = new QListWidget(EquipSettingWindow);
        monitoringEqipmentListWidget_2->setObjectName(QString::fromUtf8("monitoringEqipmentListWidget_2"));
        monitoringEqipmentListWidget_2->setStyleSheet(QString::fromUtf8("border:2px solid rgb(20,196,188);border-radius:15px;\n"
""));

        horizontalLayout_2->addWidget(monitoringEqipmentListWidget_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_3);


        gridLayout_2->addLayout(verticalLayout_5, 2, 2, 2, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        label_2 = new QLabel(EquipSettingWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(170, 170));
        label_2->setMaximumSize(QSize(170, 170));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/EquipmentSettingWindow/setting.png);"));

        verticalLayout_2->addWidget(label_2);

        label_4 = new QLabel(EquipSettingWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("border:2px solid rgb(20,196,188);border-radius:15px;"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        groupBox = new QGroupBox(EquipSettingWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 0));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        searchPushButton = new QPushButton(groupBox);
        searchPushButton->setObjectName(QString::fromUtf8("searchPushButton"));
        searchPushButton->setMinimumSize(QSize(50, 50));
        searchPushButton->setMaximumSize(QSize(50, 50));
        searchPushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;border-image: url(:/icon/EquipmentSettingWindow/search.png);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;border-image: url(:/icon/EquipmentSettingWindow/search.png);\n"
"}\n"
""));

        horizontalLayout_3->addWidget(searchPushButton);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        equipmentStatus = new QLabel(groupBox);
        equipmentStatus->setObjectName(QString::fromUtf8("equipmentStatus"));

        gridLayout->addWidget(equipmentStatus, 3, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);


        gridLayout_2->addLayout(verticalLayout_2, 2, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 435, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 3, 4, 2, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 3, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        returnBefore = new QPushButton(EquipSettingWindow);
        returnBefore->setObjectName(QString::fromUtf8("returnBefore"));
        returnBefore->setEnabled(true);
        returnBefore->setMinimumSize(QSize(60, 60));
        returnBefore->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;;border-image: url(:/icon/EquipmentSettingWindow/return.png);}\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;border-image: url(:/icon/EquipmentSettingWindow/return.png);}\n"
""));
        returnBefore->setIconSize(QSize(20, 20));
        returnBefore->setAutoDefault(false);

        verticalLayout_4->addWidget(returnBefore);

        label = new QLabel(EquipSettingWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 23));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("border:2px solid rgb(20,196,188);border-radius:15px;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);


        gridLayout_2->addLayout(verticalLayout_4, 4, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_9, 1, 2, 1, 1);


        retranslateUi(EquipSettingWindow);

        QMetaObject::connectSlotsByName(EquipSettingWindow);
    } // setupUi

    void retranslateUi(QWidget *EquipSettingWindow)
    {
        EquipSettingWindow->setWindowTitle(QCoreApplication::translate("EquipSettingWindow", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("EquipSettingWindow", "\350\256\276\345\244\207\345\210\227\350\241\250", nullptr));
        label_5->setText(QCoreApplication::translate("EquipSettingWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">\350\277\220</span></p><p><span style=\" font-size:16pt; font-weight:600;\">\345\212\250</span></p><p><span style=\" font-size:16pt; font-weight:600;\">\345\201\245</span></p><p><span style=\" font-size:16pt; font-weight:600;\">\350\272\253</span></p><p><span style=\" font-size:16pt; font-weight:600;\">\350\256\276</span></p><p><span style=\" font-size:16pt; font-weight:600;\">\345\244\207</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("EquipSettingWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\345\201\245</span></p><p><span style=\" font-size:14pt; font-weight:600;\">\345\272\267</span></p><p><span style=\" font-size:14pt; font-weight:600;\">\347\233\221</span></p><p><span style=\" font-size:14pt; font-weight:600;\">\346\265\213</span></p><p><span style=\" font-size:14pt; font-weight:600;\">\350\256\276</span></p><p><span style=\" font-size:14pt; font-weight:600;\">\345\244\207</span></p></body></html>", nullptr));
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("EquipSettingWindow", "\350\256\276\345\244\207\347\256\241\347\220\206", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("EquipSettingWindow", "\346\220\234\347\264\242\350\256\276\345\244\207", nullptr));
        searchPushButton->setText(QString());
        equipmentStatus->setText(QString());
        returnBefore->setText(QString());
        label->setText(QCoreApplication::translate("EquipSettingWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EquipSettingWindow: public Ui_EquipSettingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPSETTINGWINDOW_H
