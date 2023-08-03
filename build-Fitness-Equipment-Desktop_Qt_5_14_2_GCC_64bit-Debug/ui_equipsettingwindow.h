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
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EquipSettingWindow
{
public:
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QListView *fitnessEquipmentList;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QListView *monitoringEquipmentList;
    QVBoxLayout *verticalLayout_5;
    QPushButton *returnBefore;
    QLabel *label;

    void setupUi(QWidget *EquipSettingWindow)
    {
        if (EquipSettingWindow->objectName().isEmpty())
            EquipSettingWindow->setObjectName(QString::fromUtf8("EquipSettingWindow"));
        EquipSettingWindow->resize(1600, 900);
        EquipSettingWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:15px;"));
        gridLayout_5 = new QGridLayout(EquipSettingWindow);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalSpacer_4 = new QSpacerItem(20, 435, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_4, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(EquipSettingWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(170, 170));
        label_2->setMaximumSize(QSize(170, 170));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon/EquipmentSettingWindow/setting.png);"));

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(EquipSettingWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("border:2px solid rgb(20,196,188);border-radius:15px;"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        groupBox = new QGroupBox(EquipSettingWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 0));

        horizontalLayout_3->addWidget(label_3);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(50, 50));
        pushButton->setMaximumSize(QSize(50, 50));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border:2px solid rgb(20,196,188);border-radius:15px;border-image: url(:/icon/EquipmentSettingWindow/search.png);\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{background-color: rgb(246, 245, 244);border:none;border-image: url(:/icon/EquipmentSettingWindow/search.png);\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);


        gridLayout_5->addLayout(verticalLayout_2, 0, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 0, 0, 1, 1);

        tabWidget = new QTabWidget(EquipSettingWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fitnessEquipmentList = new QListView(tab);
        fitnessEquipmentList->setObjectName(QString::fromUtf8("fitnessEquipmentList"));
        fitnessEquipmentList->setStyleSheet(QString::fromUtf8("border:2px solid rgb(20,196,188);"));

        horizontalLayout->addWidget(fitnessEquipmentList);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/EquipmentSettingWindow/monitoringEquipment.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        monitoringEquipmentList = new QListView(tab_2);
        monitoringEquipmentList->setObjectName(QString::fromUtf8("monitoringEquipmentList"));
        monitoringEquipmentList->setStyleSheet(QString::fromUtf8("border:2px solid rgb(20,196,188);"));

        horizontalLayout_2->addWidget(monitoringEquipmentList);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/EquipmentSettingWindow/fitnessEquipment.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon1, QString());

        gridLayout_4->addWidget(tabWidget, 0, 1, 2, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
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

        verticalLayout_5->addWidget(returnBefore);

        label = new QLabel(EquipSettingWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 23));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("border:2px solid rgb(20,196,188);border-radius:15px;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);


        gridLayout_4->addLayout(verticalLayout_5, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 2, 1);


        retranslateUi(EquipSettingWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(EquipSettingWindow);
    } // setupUi

    void retranslateUi(QWidget *EquipSettingWindow)
    {
        EquipSettingWindow->setWindowTitle(QCoreApplication::translate("EquipSettingWindow", "Form", nullptr));
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("EquipSettingWindow", "\350\256\276\345\244\207\347\256\241\347\220\206", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("EquipSettingWindow", "\346\220\234\347\264\242\350\256\276\345\244\207", nullptr));
        pushButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("EquipSettingWindow", "\345\201\245\345\272\267\347\233\221\346\265\213\350\256\276\345\244\207", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("EquipSettingWindow", "\350\277\220\345\212\250\345\201\245\350\272\253\350\256\276\345\244\207", nullptr));
        returnBefore->setText(QString());
        label->setText(QCoreApplication::translate("EquipSettingWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EquipSettingWindow: public Ui_EquipSettingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPSETTINGWINDOW_H
