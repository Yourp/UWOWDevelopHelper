/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *Settings;
    QAction *A_UpdateDatabase;
    QWidget *Tabs;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *LE_FunctionName;
    QListWidget *LW_StaticRegisters;
    QPushButton *PB_AddRegister;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *LE_ScriptName;
    QLabel *label_2;
    QLineEdit *LE_SpellID;
    QHBoxLayout *horizontalLayout;
    QComboBox *CB_Classes;
    QComboBox *CB_Scripts;
    QSpacerItem *verticalSpacer_2;
    QPushButton *PB_GenerateCode;
    QSpacerItem *verticalSpacer;
    QTableWidget *TW_AddedRegisters;
    QPushButton *PB_RemoveRegister;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(691, 709);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Icons/databasespeeddataserver-115837_115792.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        MainWindow->setAnimated(true);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        Settings = new QAction(MainWindow);
        Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->setCheckable(false);
        Settings->setChecked(false);
        Settings->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("Icons/cog_transfer_icon_135749.png"), QSize(), QIcon::Normal, QIcon::Off);
        Settings->setIcon(icon1);
        Settings->setAutoRepeat(true);
        Settings->setVisible(true);
        A_UpdateDatabase = new QAction(MainWindow);
        A_UpdateDatabase->setObjectName(QString::fromUtf8("A_UpdateDatabase"));
        A_UpdateDatabase->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("Icons/database_import_icon_135719.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8("Icons/servicemanager_serviceconfig_gerentedeservicio_6020.png"), QSize(), QIcon::Disabled, QIcon::Off);
        icon2.addFile(QString::fromUtf8("Icons/servicemanager_serviceconfig_gerentedeservicio_6020.png"), QSize(), QIcon::Disabled, QIcon::On);
        A_UpdateDatabase->setIcon(icon2);
        Tabs = new QWidget(MainWindow);
        Tabs->setObjectName(QString::fromUtf8("Tabs"));
        widget = new QWidget(Tabs);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 258, 591));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 15));
        label_3->setMaximumSize(QSize(16777215, 15));

        horizontalLayout_2->addWidget(label_3);

        LE_FunctionName = new QLineEdit(widget);
        LE_FunctionName->setObjectName(QString::fromUtf8("LE_FunctionName"));
        LE_FunctionName->setMinimumSize(QSize(0, 20));

        horizontalLayout_2->addWidget(LE_FunctionName);


        verticalLayout->addLayout(horizontalLayout_2);

        LW_StaticRegisters = new QListWidget(widget);
        LW_StaticRegisters->setObjectName(QString::fromUtf8("LW_StaticRegisters"));
        LW_StaticRegisters->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(10);
        LW_StaticRegisters->setFont(font);
        LW_StaticRegisters->setFocusPolicy(Qt::StrongFocus);
        LW_StaticRegisters->setAutoScroll(false);
        LW_StaticRegisters->setEditTriggers(QAbstractItemView::NoEditTriggers);
        LW_StaticRegisters->setProperty("showDropIndicator", QVariant(true));
        LW_StaticRegisters->setSelectionMode(QAbstractItemView::SingleSelection);
        LW_StaticRegisters->setSelectionBehavior(QAbstractItemView::SelectRows);
        LW_StaticRegisters->setTextElideMode(Qt::ElideRight);
        LW_StaticRegisters->setMovement(QListView::Static);
        LW_StaticRegisters->setProperty("isWrapping", QVariant(false));
        LW_StaticRegisters->setResizeMode(QListView::Fixed);
        LW_StaticRegisters->setLayoutMode(QListView::SinglePass);
        LW_StaticRegisters->setSpacing(0);
        LW_StaticRegisters->setViewMode(QListView::ListMode);
        LW_StaticRegisters->setWordWrap(false);
        LW_StaticRegisters->setSelectionRectVisible(false);

        verticalLayout->addWidget(LW_StaticRegisters);

        PB_AddRegister = new QPushButton(widget);
        PB_AddRegister->setObjectName(QString::fromUtf8("PB_AddRegister"));
        PB_AddRegister->setEnabled(false);
        QFont font1;
        font1.setPointSize(10);
        PB_AddRegister->setFont(font1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("Icons/pencil_plus_icon_138298.png"), QSize(), QIcon::Normal, QIcon::Off);
        PB_AddRegister->setIcon(icon3);
        PB_AddRegister->setIconSize(QSize(30, 30));
        PB_AddRegister->setAutoDefault(true);
        PB_AddRegister->setFlat(false);

        verticalLayout->addWidget(PB_AddRegister);

        widget1 = new QWidget(Tabs);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(280, 10, 402, 591));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 20));
        label->setMaximumSize(QSize(16777215, 20));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        LE_ScriptName = new QLineEdit(widget1);
        LE_ScriptName->setObjectName(QString::fromUtf8("LE_ScriptName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, LE_ScriptName);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 20));
        label_2->setMaximumSize(QSize(16777215, 20));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        LE_SpellID = new QLineEdit(widget1);
        LE_SpellID->setObjectName(QString::fromUtf8("LE_SpellID"));
        LE_SpellID->setMaximumSize(QSize(70, 16777215));
        LE_SpellID->setMaxLength(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, LE_SpellID);


        verticalLayout_3->addLayout(formLayout);


        verticalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CB_Classes = new QComboBox(widget1);
        CB_Classes->setObjectName(QString::fromUtf8("CB_Classes"));
        CB_Classes->setMinimumSize(QSize(0, 38));
        CB_Classes->setFont(font1);
        CB_Classes->setEditable(false);
        CB_Classes->setMaxVisibleItems(100);

        horizontalLayout->addWidget(CB_Classes);

        CB_Scripts = new QComboBox(widget1);
        CB_Scripts->setObjectName(QString::fromUtf8("CB_Scripts"));
        CB_Scripts->setMinimumSize(QSize(0, 38));
        CB_Scripts->setFont(font1);
        CB_Scripts->setEditable(false);

        horizontalLayout->addWidget(CB_Scripts);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        PB_GenerateCode = new QPushButton(widget1);
        PB_GenerateCode->setObjectName(QString::fromUtf8("PB_GenerateCode"));
        PB_GenerateCode->setFont(font1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("Icons/language_cpp_icon_136465.png"), QSize(), QIcon::Normal, QIcon::Off);
        PB_GenerateCode->setIcon(icon4);
        PB_GenerateCode->setIconSize(QSize(30, 30));
        PB_GenerateCode->setCheckable(false);
        PB_GenerateCode->setAutoRepeatDelay(3000);
        PB_GenerateCode->setAutoRepeatInterval(1000);
        PB_GenerateCode->setAutoDefault(false);

        verticalLayout_2->addWidget(PB_GenerateCode);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        TW_AddedRegisters = new QTableWidget(widget1);
        if (TW_AddedRegisters->columnCount() < 2)
            TW_AddedRegisters->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TW_AddedRegisters->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TW_AddedRegisters->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        TW_AddedRegisters->setObjectName(QString::fromUtf8("TW_AddedRegisters"));
        TW_AddedRegisters->setEnabled(true);
        TW_AddedRegisters->setMinimumSize(QSize(400, 260));
        TW_AddedRegisters->setMaximumSize(QSize(400, 16777215));
        TW_AddedRegisters->setFont(font);
        TW_AddedRegisters->setTabletTracking(false);
        TW_AddedRegisters->setFocusPolicy(Qt::NoFocus);
        TW_AddedRegisters->setAutoFillBackground(true);
        TW_AddedRegisters->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"	selection-background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:1, y2:1, stop:0.397727 rgba(163, 0, 0, 47), stop:1 rgba(255, 255, 255, 255));\n"
"	selection-color: rgb(0, 0, 0);\n"
"\n"
"}"));
        TW_AddedRegisters->setFrameShape(QFrame::StyledPanel);
        TW_AddedRegisters->setFrameShadow(QFrame::Sunken);
        TW_AddedRegisters->setLineWidth(1);
        TW_AddedRegisters->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TW_AddedRegisters->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        TW_AddedRegisters->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        TW_AddedRegisters->setAutoScroll(false);
        TW_AddedRegisters->setAutoScrollMargin(1);
        TW_AddedRegisters->setEditTriggers(QAbstractItemView::NoEditTriggers);
        TW_AddedRegisters->setTabKeyNavigation(false);
        TW_AddedRegisters->setProperty("showDropIndicator", QVariant(false));
        TW_AddedRegisters->setDragEnabled(false);
        TW_AddedRegisters->setDragDropOverwriteMode(true);
        TW_AddedRegisters->setDragDropMode(QAbstractItemView::NoDragDrop);
        TW_AddedRegisters->setAlternatingRowColors(true);
        TW_AddedRegisters->setSelectionMode(QAbstractItemView::SingleSelection);
        TW_AddedRegisters->setSelectionBehavior(QAbstractItemView::SelectRows);
        TW_AddedRegisters->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        TW_AddedRegisters->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        TW_AddedRegisters->setShowGrid(true);
        TW_AddedRegisters->setGridStyle(Qt::SolidLine);
        TW_AddedRegisters->setSortingEnabled(false);
        TW_AddedRegisters->setCornerButtonEnabled(false);
        TW_AddedRegisters->horizontalHeader()->setVisible(false);
        TW_AddedRegisters->horizontalHeader()->setCascadingSectionResizes(false);
        TW_AddedRegisters->horizontalHeader()->setMinimumSectionSize(200);
        TW_AddedRegisters->horizontalHeader()->setDefaultSectionSize(200);
        TW_AddedRegisters->horizontalHeader()->setHighlightSections(false);
        TW_AddedRegisters->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        TW_AddedRegisters->horizontalHeader()->setStretchLastSection(false);
        TW_AddedRegisters->verticalHeader()->setVisible(false);
        TW_AddedRegisters->verticalHeader()->setMinimumSectionSize(20);
        TW_AddedRegisters->verticalHeader()->setDefaultSectionSize(20);
        TW_AddedRegisters->verticalHeader()->setHighlightSections(false);
        TW_AddedRegisters->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        TW_AddedRegisters->verticalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(TW_AddedRegisters);

        PB_RemoveRegister = new QPushButton(widget1);
        PB_RemoveRegister->setObjectName(QString::fromUtf8("PB_RemoveRegister"));
        PB_RemoveRegister->setEnabled(false);
        PB_RemoveRegister->setFont(font1);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("Icons/delete_icon_135708.png"), QSize(), QIcon::Normal, QIcon::Off);
        PB_RemoveRegister->setIcon(icon5);
        PB_RemoveRegister->setIconSize(QSize(30, 30));
        PB_RemoveRegister->setCheckable(false);
        PB_RemoveRegister->setChecked(false);
        PB_RemoveRegister->setAutoDefault(true);

        verticalLayout_2->addWidget(PB_RemoveRegister);

        MainWindow->setCentralWidget(Tabs);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 691, 22));
        menuBar->setContextMenuPolicy(Qt::NoContextMenu);
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setFont(font1);
        toolBar->setContextMenuPolicy(Qt::NoContextMenu);
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(40, 40));
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(A_UpdateDatabase);
        toolBar->addSeparator();
        toolBar->addAction(Settings);

        retranslateUi(MainWindow);

        PB_AddRegister->setDefault(true);
        PB_GenerateCode->setDefault(false);
        PB_RemoveRegister->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "UWOW Develop Helper", nullptr));
        Settings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        A_UpdateDatabase->setText(QCoreApplication::translate("MainWindow", "UpdateDatabase", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Function Name:", nullptr));
        PB_AddRegister->setText(QCoreApplication::translate("MainWindow", "Add Register", nullptr));
#if QT_CONFIG(shortcut)
        PB_AddRegister->setShortcut(QCoreApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("MainWindow", "Script Name:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Spells ID:", nullptr));
        PB_GenerateCode->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
        QTableWidgetItem *___qtablewidgetitem = TW_AddedRegisters->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TW_AddedRegisters->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Function", nullptr));
        PB_RemoveRegister->setText(QCoreApplication::translate("MainWindow", "Remove Register", nullptr));
#if QT_CONFIG(shortcut)
        PB_RemoveRegister->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
