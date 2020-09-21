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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QListWidget *LW_SettingsCategories;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *L_HostName;
    QLineEdit *LE_HostName;
    QLabel *L_UserName;
    QLineEdit *LE_UserName;
    QLabel *L_Password;
    QLineEdit *LE_Password;
    QLabel *L_Port;
    QLineEdit *LE_Port;
    QLabel *L_DatabaseName;
    QLineEdit *LE_DatabaseName;

    void setupUi(QDialog *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName(QString::fromUtf8("SettingsWindow"));
        SettingsWindow->resize(1074, 770);
        SettingsWindow->setWindowOpacity(1.000000000000000);
        LW_SettingsCategories = new QListWidget(SettingsWindow);
        LW_SettingsCategories->setObjectName(QString::fromUtf8("LW_SettingsCategories"));
        LW_SettingsCategories->setGeometry(QRect(10, 10, 161, 161));
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
        widget->setGeometry(QRect(220, 20, 271, 141));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        L_HostName = new QLabel(widget);
        L_HostName->setObjectName(QString::fromUtf8("L_HostName"));

        gridLayout->addWidget(L_HostName, 0, 0, 1, 2);

        LE_HostName = new QLineEdit(widget);
        LE_HostName->setObjectName(QString::fromUtf8("LE_HostName"));

        gridLayout->addWidget(LE_HostName, 0, 2, 1, 2);

        L_UserName = new QLabel(widget);
        L_UserName->setObjectName(QString::fromUtf8("L_UserName"));

        gridLayout->addWidget(L_UserName, 1, 0, 1, 2);

        LE_UserName = new QLineEdit(widget);
        LE_UserName->setObjectName(QString::fromUtf8("LE_UserName"));

        gridLayout->addWidget(LE_UserName, 1, 2, 1, 2);

        L_Password = new QLabel(widget);
        L_Password->setObjectName(QString::fromUtf8("L_Password"));

        gridLayout->addWidget(L_Password, 2, 0, 1, 1);

        LE_Password = new QLineEdit(widget);
        LE_Password->setObjectName(QString::fromUtf8("LE_Password"));

        gridLayout->addWidget(LE_Password, 2, 1, 1, 3);

        L_Port = new QLabel(widget);
        L_Port->setObjectName(QString::fromUtf8("L_Port"));

        gridLayout->addWidget(L_Port, 3, 0, 1, 1);

        LE_Port = new QLineEdit(widget);
        LE_Port->setObjectName(QString::fromUtf8("LE_Port"));

        gridLayout->addWidget(LE_Port, 3, 1, 1, 3);

        L_DatabaseName = new QLabel(widget);
        L_DatabaseName->setObjectName(QString::fromUtf8("L_DatabaseName"));

        gridLayout->addWidget(L_DatabaseName, 4, 0, 1, 3);

        LE_DatabaseName = new QLineEdit(widget);
        LE_DatabaseName->setObjectName(QString::fromUtf8("LE_DatabaseName"));

        gridLayout->addWidget(LE_DatabaseName, 4, 3, 1, 1);


        retranslateUi(SettingsWindow);

        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QDialog *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QCoreApplication::translate("SettingsWindow", "SettingsWindow", nullptr));
        L_HostName->setText(QCoreApplication::translate("SettingsWindow", "Host Name: ", nullptr));
        L_UserName->setText(QCoreApplication::translate("SettingsWindow", "User Name: ", nullptr));
        L_Password->setText(QCoreApplication::translate("SettingsWindow", "Password: ", nullptr));
        L_Port->setText(QCoreApplication::translate("SettingsWindow", "Port: ", nullptr));
        L_DatabaseName->setText(QCoreApplication::translate("SettingsWindow", "Database Name: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
