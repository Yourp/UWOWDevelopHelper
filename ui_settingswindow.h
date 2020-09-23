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
    QWidget *layoutWidget;
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
    QWidget *page_2;
    QListWidget *LW_SettingsCategories_2;

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
        SW_SettingsLayer->setGeometry(QRect(180, 10, 531, 341));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 211, 311));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 192, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        L_HostName_2 = new QLabel(layoutWidget);
        L_HostName_2->setObjectName(QString::fromUtf8("L_HostName_2"));

        verticalLayout_5->addWidget(L_HostName_2);

        LE_HostName = new QLineEdit(layoutWidget);
        LE_HostName->setObjectName(QString::fromUtf8("LE_HostName"));

        verticalLayout_5->addWidget(LE_HostName);


        verticalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        L_Port_2 = new QLabel(layoutWidget);
        L_Port_2->setObjectName(QString::fromUtf8("L_Port_2"));

        verticalLayout_8->addWidget(L_Port_2);

        LE_Port = new QLineEdit(layoutWidget);
        LE_Port->setObjectName(QString::fromUtf8("LE_Port"));
        LE_Port->setMaximumSize(QSize(40, 16777215));
        LE_Port->setMaxLength(5);

        verticalLayout_8->addWidget(LE_Port);


        verticalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        L_UserName_2 = new QLabel(layoutWidget);
        L_UserName_2->setObjectName(QString::fromUtf8("L_UserName_2"));

        verticalLayout_6->addWidget(L_UserName_2);

        LE_UserName = new QLineEdit(layoutWidget);
        LE_UserName->setObjectName(QString::fromUtf8("LE_UserName"));

        verticalLayout_6->addWidget(LE_UserName);


        verticalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        L_Password_2 = new QLabel(layoutWidget);
        L_Password_2->setObjectName(QString::fromUtf8("L_Password_2"));

        verticalLayout_7->addWidget(L_Password_2);

        LE_Password = new QLineEdit(layoutWidget);
        LE_Password->setObjectName(QString::fromUtf8("LE_Password"));
        LE_Password->setFrame(true);
        LE_Password->setEchoMode(QLineEdit::Password);

        verticalLayout_7->addWidget(LE_Password);


        verticalLayout_3->addLayout(verticalLayout_7);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        L_DatabaseName_2 = new QLabel(layoutWidget);
        L_DatabaseName_2->setObjectName(QString::fromUtf8("L_DatabaseName_2"));

        verticalLayout_9->addWidget(L_DatabaseName_2);

        LE_DatabaseName = new QLineEdit(layoutWidget);
        LE_DatabaseName->setObjectName(QString::fromUtf8("LE_DatabaseName"));

        verticalLayout_9->addWidget(LE_DatabaseName);


        verticalLayout_3->addLayout(verticalLayout_9);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        PB_Connect = new QPushButton(layoutWidget);
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

        PB_Disconnect = new QPushButton(layoutWidget);
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
        SW_SettingsLayer->addWidget(page_2);
        LW_SettingsCategories_2 = new QListWidget(SettingsWindow);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("Icons\\delete.png")));
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(LW_SettingsCategories_2);
        __qlistwidgetitem->setIcon(icon);
        new QListWidgetItem(LW_SettingsCategories_2);
        new QListWidgetItem(LW_SettingsCategories_2);
        new QListWidgetItem(LW_SettingsCategories_2);
        LW_SettingsCategories_2->setObjectName(QString::fromUtf8("LW_SettingsCategories_2"));
        LW_SettingsCategories_2->setGeometry(QRect(460, 410, 161, 311));
        QFont font2;
        font2.setPointSize(22);
        LW_SettingsCategories_2->setFont(font2);
        LW_SettingsCategories_2->setFocusPolicy(Qt::NoFocus);
        LW_SettingsCategories_2->setLayoutDirection(Qt::LeftToRight);
        LW_SettingsCategories_2->setStyleSheet(QString::fromUtf8("QListWidget::item:hover {\n"
"   border: 2px solid;\n"
"    color: rgb(0, 0, 0);\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0.423729 rgba(180, 190, 200, 60), stop:1 rgba(255, 255, 255, 255));\n"
"    border-color: rgb(180, 190, 200, 230);\n"
"    border-radius: 8px;\n"
"	image: url(:/Icons/Icons/check.png);\n"
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
        LW_SettingsCategories_2->setFrameShape(QFrame::WinPanel);
        LW_SettingsCategories_2->setFrameShadow(QFrame::Sunken);
        LW_SettingsCategories_2->setLineWidth(1);
        LW_SettingsCategories_2->setAutoScroll(false);
        LW_SettingsCategories_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        LW_SettingsCategories_2->setProperty("showDropIndicator", QVariant(false));
        LW_SettingsCategories_2->setSelectionMode(QAbstractItemView::SingleSelection);
        LW_SettingsCategories_2->setTextElideMode(Qt::ElideRight);

        retranslateUi(SettingsWindow);

        SW_SettingsLayer->setCurrentIndex(0);


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

        const bool __sortingEnabled = LW_SettingsCategories_2->isSortingEnabled();
        LW_SettingsCategories_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = LW_SettingsCategories_2->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("SettingsWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = LW_SettingsCategories_2->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("SettingsWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = LW_SettingsCategories_2->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("SettingsWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = LW_SettingsCategories_2->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("SettingsWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        LW_SettingsCategories_2->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
