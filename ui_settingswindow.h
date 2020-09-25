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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QListWidget *LW_SettingsCategories;
    QStackedWidget *SW_SettingsLayer;
    QWidget *page;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
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
    QWidget *page_2;
    QListWidget *LW_SettingsClassesScripts;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *LE_ClassesScriptsPath;
    QPushButton *PB_FindScriptFile;
    QWidget *page_3;
    QLabel *label_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *LE_SQLFileName;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *LE_WorldSQLFolder;
    QPushButton *PB_FindWorldSQLFolder;

    void setupUi(QDialog *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName(QString::fromUtf8("SettingsWindow"));
        SettingsWindow->resize(1051, 770);
        SettingsWindow->setWindowOpacity(1.000000000000000);
        LW_SettingsCategories = new QListWidget(SettingsWindow);
        LW_SettingsCategories->setObjectName(QString::fromUtf8("LW_SettingsCategories"));
        LW_SettingsCategories->setGeometry(QRect(10, 10, 161, 311));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(10);
        LW_SettingsCategories->setFont(font);
        LW_SettingsCategories->setFocusPolicy(Qt::NoFocus);
        LW_SettingsCategories->setLayoutDirection(Qt::LeftToRight);
        LW_SettingsCategories->setStyleSheet(QString::fromUtf8("QListWidget::item:hover {\n"
"   border: 2px solid;\n"
"    color: rgb(0, 0, 0);\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.423729 rgba(180, 190, 200, 60), stop:1 rgba(255, 255, 255, 255));\n"
"    border-color: rgb(180, 190, 200, 230);\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"    border: 2px solid;\n"
"    color: rgb(0, 0, 0);\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.423729 rgba(84, 128, 190, 50), stop:1 rgba(255, 255, 255, 255));\n"
"    border-color: rgb(84, 128, 190);\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"QListWidget\n"
"{\n"
"    background-color: rgb(240, 240, 240);\n"
"}"));
        LW_SettingsCategories->setFrameShape(QFrame::WinPanel);
        LW_SettingsCategories->setFrameShadow(QFrame::Sunken);
        LW_SettingsCategories->setLineWidth(1);
        LW_SettingsCategories->setAutoScroll(false);
        LW_SettingsCategories->setEditTriggers(QAbstractItemView::NoEditTriggers);
        LW_SettingsCategories->setProperty("showDropIndicator", QVariant(false));
        LW_SettingsCategories->setSelectionMode(QAbstractItemView::SingleSelection);
        LW_SettingsCategories->setTextElideMode(Qt::ElideRight);
        SW_SettingsLayer = new QStackedWidget(SettingsWindow);
        SW_SettingsLayer->setObjectName(QString::fromUtf8("SW_SettingsLayer"));
        SW_SettingsLayer->setGeometry(QRect(180, 10, 691, 351));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 211, 311));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 192, 271));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        L_HostName_2 = new QLabel(widget);
        L_HostName_2->setObjectName(QString::fromUtf8("L_HostName_2"));

        verticalLayout_5->addWidget(L_HostName_2);

        LE_HostName = new QLineEdit(widget);
        LE_HostName->setObjectName(QString::fromUtf8("LE_HostName"));

        verticalLayout_5->addWidget(LE_HostName);


        verticalLayout->addLayout(verticalLayout_5);

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


        verticalLayout->addLayout(verticalLayout_8);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        L_UserName_2 = new QLabel(widget);
        L_UserName_2->setObjectName(QString::fromUtf8("L_UserName_2"));

        verticalLayout_6->addWidget(L_UserName_2);

        LE_UserName = new QLineEdit(widget);
        LE_UserName->setObjectName(QString::fromUtf8("LE_UserName"));

        verticalLayout_6->addWidget(LE_UserName);


        verticalLayout->addLayout(verticalLayout_6);

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


        verticalLayout->addLayout(verticalLayout_7);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        L_DatabaseName_2 = new QLabel(widget);
        L_DatabaseName_2->setObjectName(QString::fromUtf8("L_DatabaseName_2"));

        verticalLayout_9->addWidget(L_DatabaseName_2);

        LE_DatabaseName = new QLineEdit(widget);
        LE_DatabaseName->setObjectName(QString::fromUtf8("LE_DatabaseName"));

        verticalLayout_9->addWidget(LE_DatabaseName);


        verticalLayout->addLayout(verticalLayout_9);

        verticalSpacer = new QSpacerItem(184, 83, QSizePolicy::Minimum, QSizePolicy::Expanding);

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

        SW_SettingsLayer->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        LW_SettingsClassesScripts = new QListWidget(page_2);
        LW_SettingsClassesScripts->setObjectName(QString::fromUtf8("LW_SettingsClassesScripts"));
        LW_SettingsClassesScripts->setGeometry(QRect(10, 0, 161, 311));
        LW_SettingsClassesScripts->setFont(font);
        LW_SettingsClassesScripts->setFocusPolicy(Qt::NoFocus);
        LW_SettingsClassesScripts->setLayoutDirection(Qt::LeftToRight);
        LW_SettingsClassesScripts->setStyleSheet(QString::fromUtf8("QListWidget::item:hover {\n"
"   border: 2px solid;\n"
"    color: rgb(0, 0, 0);\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.423729 rgba(180, 190, 200, 60), stop:1 rgba(255, 255, 255, 255));\n"
"    border-color: rgb(180, 190, 200, 230);\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"    border: 2px solid;\n"
"    color: rgb(0, 0, 0);\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.423729 rgba(84, 128, 190, 50), stop:1 rgba(255, 255, 255, 255));\n"
"    border-color: rgb(84, 128, 190);\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QListWidget\n"
"{\n"
"    background-color: rgb(240, 240, 240);\n"
"}"));
        LW_SettingsClassesScripts->setFrameShape(QFrame::WinPanel);
        LW_SettingsClassesScripts->setFrameShadow(QFrame::Sunken);
        LW_SettingsClassesScripts->setLineWidth(1);
        LW_SettingsClassesScripts->setAutoScroll(false);
        LW_SettingsClassesScripts->setEditTriggers(QAbstractItemView::NoEditTriggers);
        LW_SettingsClassesScripts->setProperty("showDropIndicator", QVariant(false));
        LW_SettingsClassesScripts->setSelectionMode(QAbstractItemView::SingleSelection);
        LW_SettingsClassesScripts->setTextElideMode(Qt::ElideRight);
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(180, 10, 401, 61));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 381, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        LE_ClassesScriptsPath = new QLineEdit(layoutWidget);
        LE_ClassesScriptsPath->setObjectName(QString::fromUtf8("LE_ClassesScriptsPath"));
        LE_ClassesScriptsPath->setMouseTracking(true);
        LE_ClassesScriptsPath->setFocusPolicy(Qt::StrongFocus);
        LE_ClassesScriptsPath->setAcceptDrops(true);
        LE_ClassesScriptsPath->setFrame(true);
        LE_ClassesScriptsPath->setReadOnly(false);

        horizontalLayout_2->addWidget(LE_ClassesScriptsPath);

        PB_FindScriptFile = new QPushButton(layoutWidget);
        PB_FindScriptFile->setObjectName(QString::fromUtf8("PB_FindScriptFile"));
        PB_FindScriptFile->setMaximumSize(QSize(25, 20));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        PB_FindScriptFile->setFont(font2);

        horizontalLayout_2->addWidget(PB_FindScriptFile);

        SW_SettingsLayer->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        SW_SettingsLayer->addWidget(page_3);
        label_2 = new QLabel(SettingsWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(481, 532, 0, 0));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(0, 0));
        widget1 = new QWidget(SettingsWindow);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(330, 450, 331, 84));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 15));
        label->setMaximumSize(QSize(16777215, 15));

        verticalLayout_3->addWidget(label);

        LE_SQLFileName = new QLineEdit(widget1);
        LE_SQLFileName->setObjectName(QString::fromUtf8("LE_SQLFileName"));
        LE_SQLFileName->setMinimumSize(QSize(0, 20));
        LE_SQLFileName->setMaximumSize(QSize(150, 20));
        LE_SQLFileName->setMouseTracking(true);
        LE_SQLFileName->setFocusPolicy(Qt::StrongFocus);
        LE_SQLFileName->setAcceptDrops(true);
        LE_SQLFileName->setFrame(true);
        LE_SQLFileName->setReadOnly(false);

        verticalLayout_3->addWidget(LE_SQLFileName);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 15));
        label_3->setMaximumSize(QSize(16777215, 15));

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        LE_WorldSQLFolder = new QLineEdit(widget1);
        LE_WorldSQLFolder->setObjectName(QString::fromUtf8("LE_WorldSQLFolder"));
        LE_WorldSQLFolder->setMinimumSize(QSize(0, 20));
        LE_WorldSQLFolder->setMaximumSize(QSize(16777215, 20));
        LE_WorldSQLFolder->setMouseTracking(true);
        LE_WorldSQLFolder->setFocusPolicy(Qt::StrongFocus);
        LE_WorldSQLFolder->setAcceptDrops(true);
        LE_WorldSQLFolder->setFrame(true);
        LE_WorldSQLFolder->setReadOnly(false);

        horizontalLayout_3->addWidget(LE_WorldSQLFolder);

        PB_FindWorldSQLFolder = new QPushButton(widget1);
        PB_FindWorldSQLFolder->setObjectName(QString::fromUtf8("PB_FindWorldSQLFolder"));
        PB_FindWorldSQLFolder->setMaximumSize(QSize(25, 20));
        PB_FindWorldSQLFolder->setFont(font2);

        horizontalLayout_3->addWidget(PB_FindWorldSQLFolder);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_2);


        retranslateUi(SettingsWindow);

        SW_SettingsLayer->setCurrentIndex(2);


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
        groupBox_2->setTitle(QCoreApplication::translate("SettingsWindow", "Path of Scripts File:", nullptr));
        PB_FindScriptFile->setText(QCoreApplication::translate("SettingsWindow", "...", nullptr));
        label_2->setText(QCoreApplication::translate("SettingsWindow", "World SQL's folder:", nullptr));
        label->setText(QCoreApplication::translate("SettingsWindow", "File Name:", nullptr));
        label_3->setText(QCoreApplication::translate("SettingsWindow", "World SQL's files folder:", nullptr));
        PB_FindWorldSQLFolder->setText(QCoreApplication::translate("SettingsWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
