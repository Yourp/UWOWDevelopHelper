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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QListWidget *LW_SettingsCategories;
    QWidget *widget;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *L_HostName_2;
    QLineEdit *LE_HostName;
    QVBoxLayout *verticalLayout_6;
    QLabel *L_UserName_2;
    QLineEdit *LE_UserName;
    QVBoxLayout *verticalLayout_7;
    QLabel *L_Password_2;
    QLineEdit *LE_Password;
    QVBoxLayout *verticalLayout_8;
    QLabel *L_Port_2;
    QLineEdit *LE_Port;
    QVBoxLayout *verticalLayout_9;
    QLabel *L_DatabaseName_2;
    QLineEdit *LE_DatabaseName;

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
        widget = new QWidget(SettingsWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 20, 191, 221));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 0, 181, 206));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        L_HostName_2 = new QLabel(widget1);
        L_HostName_2->setObjectName(QString::fromUtf8("L_HostName_2"));

        verticalLayout_5->addWidget(L_HostName_2);

        LE_HostName = new QLineEdit(widget1);
        LE_HostName->setObjectName(QString::fromUtf8("LE_HostName"));

        verticalLayout_5->addWidget(LE_HostName);


        verticalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        L_UserName_2 = new QLabel(widget1);
        L_UserName_2->setObjectName(QString::fromUtf8("L_UserName_2"));

        verticalLayout_6->addWidget(L_UserName_2);

        LE_UserName = new QLineEdit(widget1);
        LE_UserName->setObjectName(QString::fromUtf8("LE_UserName"));

        verticalLayout_6->addWidget(LE_UserName);


        verticalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        L_Password_2 = new QLabel(widget1);
        L_Password_2->setObjectName(QString::fromUtf8("L_Password_2"));

        verticalLayout_7->addWidget(L_Password_2);

        LE_Password = new QLineEdit(widget1);
        LE_Password->setObjectName(QString::fromUtf8("LE_Password"));

        verticalLayout_7->addWidget(LE_Password);


        verticalLayout_3->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        L_Port_2 = new QLabel(widget1);
        L_Port_2->setObjectName(QString::fromUtf8("L_Port_2"));

        verticalLayout_8->addWidget(L_Port_2);

        LE_Port = new QLineEdit(widget1);
        LE_Port->setObjectName(QString::fromUtf8("LE_Port"));

        verticalLayout_8->addWidget(LE_Port);


        verticalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        L_DatabaseName_2 = new QLabel(widget1);
        L_DatabaseName_2->setObjectName(QString::fromUtf8("L_DatabaseName_2"));

        verticalLayout_9->addWidget(L_DatabaseName_2);

        LE_DatabaseName = new QLineEdit(widget1);
        LE_DatabaseName->setObjectName(QString::fromUtf8("LE_DatabaseName"));

        verticalLayout_9->addWidget(LE_DatabaseName);


        verticalLayout_3->addLayout(verticalLayout_9);


        retranslateUi(SettingsWindow);

        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QDialog *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QCoreApplication::translate("SettingsWindow", "Settings", nullptr));
        L_HostName_2->setText(QCoreApplication::translate("SettingsWindow", "Host Name: ", nullptr));
        L_UserName_2->setText(QCoreApplication::translate("SettingsWindow", "User Name: ", nullptr));
        L_Password_2->setText(QCoreApplication::translate("SettingsWindow", "Password: ", nullptr));
        L_Port_2->setText(QCoreApplication::translate("SettingsWindow", "Port: ", nullptr));
        L_DatabaseName_2->setText(QCoreApplication::translate("SettingsWindow", "Database Name: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
