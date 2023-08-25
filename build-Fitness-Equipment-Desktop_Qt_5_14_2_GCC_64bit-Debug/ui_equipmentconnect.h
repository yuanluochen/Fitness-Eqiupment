/********************************************************************************
** Form generated from reading UI file 'equipmentconnect.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUIPMENTCONNECT_H
#define UI_EQUIPMENTCONNECT_H

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

class Ui_EquipmentConnect
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_9;
    QListWidget *equipmentListWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *equipmentStatusLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *searchPushButton;

    void setupUi(QWidget *EquipmentConnect)
    {
        if (EquipmentConnect->objectName().isEmpty())
            EquipmentConnect->setObjectName(QString::fromUtf8("EquipmentConnect"));
        EquipmentConnect->resize(284, 500);
        EquipmentConnect->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border:2px;border-radius:15px;"));
        gridLayout = new QGridLayout(EquipmentConnect);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(EquipmentConnect);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_9 = new QWidget(EquipmentConnect);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setMinimumSize(QSize(0, 400));
        widget_9->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 193, 241);"));
        equipmentListWidget = new QListWidget(widget_9);
        equipmentListWidget->setObjectName(QString::fromUtf8("equipmentListWidget"));
        equipmentListWidget->setGeometry(QRect(0, 0, 261, 401));
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
        equipmentListWidget->setFrameShape(QFrame::NoFrame);

        verticalLayout_3->addWidget(widget_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        equipmentStatusLabel = new QLabel(EquipmentConnect);
        equipmentStatusLabel->setObjectName(QString::fromUtf8("equipmentStatusLabel"));
        equipmentStatusLabel->setMinimumSize(QSize(0, 25));
        equipmentStatusLabel->setMaximumSize(QSize(16777215, 20));
        equipmentStatusLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(equipmentStatusLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        searchPushButton = new QPushButton(EquipmentConnect);
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


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);


        retranslateUi(EquipmentConnect);

        QMetaObject::connectSlotsByName(EquipmentConnect);
    } // setupUi

    void retranslateUi(QWidget *EquipmentConnect)
    {
        EquipmentConnect->setWindowTitle(QCoreApplication::translate("EquipmentConnect", "Form", nullptr));
        label->setText(QCoreApplication::translate("EquipmentConnect", "\350\256\276\345\244\207\350\277\236\346\216\245", nullptr));
        equipmentStatusLabel->setText(QString());
        searchPushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EquipmentConnect: public Ui_EquipmentConnect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPMENTCONNECT_H
