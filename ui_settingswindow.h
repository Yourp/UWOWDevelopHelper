/********************************************************************************
** Form generated from reading UI file 'settingswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWINDOW_H
#define UI_SETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QListWidget *LW_SettingsCategories;
    QWidget *W_DatabaseLayer;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *L_HostName_2;
    QLineEdit *LE_HostName;
    QVBoxLayout *verticalLayout_8;
    QLabel *L_Port_2;
    QLineEdit *LE_Port;
    QVBoxLayout *verticalLayout_6;
    QLabel *L_UserName_2;
    QLineEdit *LE_UserName;
    QVBoxLayout *verticalLayout_7;
    QLabel *L_Password_2;
    QLineEdit *LE_Password;
    QVBoxLayout *verticalLayout_9;
    QLabel *L_DatabaseName_2;
    QLineEdit *LE_DatabaseName;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *PB_Connect;
    QPushButton *PB_Disconnect;

    void setupUi(QDialog *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName(QString::fromUtf8("SettingsWindow"));
        SettingsWindow->resize(1074, 770);
        SettingsWindow->setWindowOpacity(1.000000000000000);
        LW_SettingsCategories = new QListWidget(SettingsWindow);
        LW_SettingsCategories->setObjectName(QString::fromUtf8("LW_SettingsCategories"));
        LW_SettingsCategories->setGeometry(QRect(10, 10, 161, 311));
        QFont font;
        font.setPointSize(9);
        LW_SettingsCategories->setFont(font);
        LW_SettingsCategories->setLayoutDirection(Qt::LeftToRight);
        LW_SettingsCategories->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        LW_SettingsCategories->setFrameShape(QFrame::WinPanel);
        LW_SettingsCategories->setFrameShadow(QFrame::Sunken);
        LW_SettingsCategories->setLineWidth(1);
        LW_SettingsCategories->setMidLineWidth(0);
        LW_SettingsCategories->setAutoScroll(false);
        LW_SettingsCategories->setTextElideMode(Qt::ElideRight);
        LW_SettingsCategories->setViewMode(QListView::ListMode);
        W_DatabaseLayer = new QWidget(SettingsWindow);
        W_DatabaseLayer->setObjectName(QString::fromUtf8("W_DatabaseLayer"));
        W_DatabaseLayer->setEnabled(true);
        W_DatabaseLayer->setGeometry(QRect(180, 10, 451, 361));
        W_DatabaseLayer->setTabletTracking(false);
        W_DatabaseLayer->setFocusPolicy(Qt::TabFocus);
        W_DatabaseLayer->setAutoFillBackground(false);
        groupBox = new QGroupBox(W_DatabaseLayer);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 211, 311));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 192, 271));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        L_HostName_2 = new QLabel(widget);
        L_HostName_2->setObjectName(QString::fromUtf8("L_HostName_2"));

        verticalLayout_5->addWidget(L_HostName_2);

        LE_HostName = new QLineEdit(widget);
        LE_HostName->setObjectName(QString::fromUtf8("LE_HostName"));

        verticalLayout_5->addWidget(LE_HostName);


        verticalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        L_Port_2 = new QLabel(widget);
        L_Port_2->setObjectName(QString::fromUtf8("L_Port_2"));

        verticalLayout_8->addWidget(L_Port_2);

        LE_Port = new QLineEdit(widget);
        LE_Port->setObjectName(QString::fromUtf8("LE_Port"));
        LE_Port->setMaximumSize(QSize(40, 16777215));
        LE_Port->setMaxLength(5);

        verticalLayout_8->addWidget(LE_Port);


        verticalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        L_UserName_2 = new QLabel(widget);
        L_UserName_2->setObjectName(QString::fromUtf8("L_UserName_2"));

        verticalLayout_6->addWidget(L_UserName_2);

        LE_UserName = new QLineEdit(widget);
        LE_UserName->setObjectName(QString::fromUtf8("LE_UserName"));

        verticalLayout_6->addWidget(LE_UserName);


        verticalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        L_Password_2 = new QLabel(widget);
        L_Password_2->setObjectName(QString::fromUtf8("L_Password_2"));

        verticalLayout_7->addWidget(L_Password_2);

        LE_Password = new QLineEdit(widget);
        LE_Password->setObjectName(QString::fromUtf8("LE_Password"));
        LE_Password->setFrame(true);
        LE_Password->setEchoMode(QLineEdit::Password);

        verticalLayout_7->addWidget(LE_Password);


        verticalLayout_3->addLayout(verticalLayout_7);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        L_DatabaseName_2 = new QLabel(widget);
        L_DatabaseName_2->setObjectName(QString::fromUtf8("L_DatabaseName_2"));

        verticalLayout_9->addWidget(L_DatabaseName_2);

        LE_DatabaseName = new QLineEdit(widget);
        LE_DatabaseName->setObjectName(QString::fromUtf8("LE_DatabaseName"));

        verticalLayout_9->addWidget(LE_DatabaseName);


        verticalLayout_3->addLayout(verticalLayout_9);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        PB_Connect = new QPushButton(widget);
        PB_Connect->setObjectName(QString::fromUtf8("PB_Connect"));
        PB_Connect->setEnabled(true);
        PB_Connect->setMinimumSize(QSize(91, 31));
        PB_Connect->setMaximumSize(QSize(91, 31));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        PB_Connect->setFont(font1);
        PB_Connect->setCheckable(false);
        PB_Connect->setChecked(false);
        PB_Connect->setAutoRepeatDelay(10000);
        PB_Connect->setAutoRepeatInterval(10000);

        horizontalLayout->addWidget(PB_Connect);

        PB_Disconnect = new QPushButton(widget);
        PB_Disconnect->setObjectName(QString::fromUtf8("PB_Disconnect"));
        PB_Disconnect->setEnabled(false);
        PB_Disconnect->setMinimumSize(QSize(91, 31));
        PB_Disconnect->setMaximumSize(QSize(91, 31));
        PB_Disconnect->setFont(font1);
        PB_Disconnect->setAutoDefault(false);

        horizontalLayout->addWidget(PB_Disconnect);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SettingsWindow);

        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QDialog *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QCoreApplication::translate("SettingsWindow", "Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SettingsWindow", "Database Connection", nullptr));
        L_HostName_2->setText(QCoreApplication::translate("SettingsWindow", "Host Name: ", nullptr));
        L_Port_2->setText(QCoreApplication::translate("SettingsWindow", "Port: ", nullptr));
        L_UserName_2->setText(QCoreApplication::translate("SettingsWindow", "User Name: ", nullptr));
        L_Password_2->setText(QCoreApplication::translate("SettingsWindow", "Password: ", nullptr));
        L_DatabaseName_2->setText(QCoreApplication::translate("SettingsWindow", "Database Name: ", nullptr));
        PB_Connect->setText(QCoreApplication::translate("SettingsWindow", "Connect", nullptr));
        PB_Disconnect->setText(QCoreApplication::translate("SettingsWindow", "Disconnected", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H