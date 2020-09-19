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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *Generation;
    QWidget *Tabs;
    QLineEdit *LE_ScriptName;
    QPushButton *pushButton;
    QTextEdit *textEditDebug;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *LE_FunctionName;
    QListWidget *LW_StaticRegisters;
    QPushButton *PB_AddRegister;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *TW_AddedRegisters;
    QPushButton *PB_RemoveRegister;
    QComboBox *CB_Scripts;
    QComboBox *CB_Classes;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(977, 755);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        MainWindow->setFont(font);
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        MainWindow->setStyleSheet(QString::fromUtf8("border-top-color: rgba(255, 255, 255, 0);\n"
"border-right-color: rgba(255, 255, 255, 0);"));
        Generation = new QAction(MainWindow);
        Generation->setObjectName(QString::fromUtf8("Generation"));
        Generation->setCheckable(false);
        Generation->setChecked(false);
        Generation->setEnabled(true);
        QFont font1;
        font1.setPointSize(12);
        Generation->setFont(font1);
        Generation->setAutoRepeat(true);
        Generation->setVisible(true);
        Tabs = new QWidget(MainWindow);
        Tabs->setObjectName(QString::fromUtf8("Tabs"));
        LE_ScriptName = new QLineEdit(Tabs);
        LE_ScriptName->setObjectName(QString::fromUtf8("LE_ScriptName"));
        LE_ScriptName->setGeometry(QRect(10, 10, 239, 20));
        pushButton = new QPushButton(Tabs);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 570, 101, 31));
        pushButton->setCheckable(false);
        pushButton->setAutoRepeatDelay(3000);
        pushButton->setAutoRepeatInterval(1000);
        pushButton->setAutoDefault(false);
        textEditDebug = new QTextEdit(Tabs);
        textEditDebug->setObjectName(QString::fromUtf8("textEditDebug"));
        textEditDebug->setGeometry(QRect(680, 50, 251, 601));
        groupBox = new QGroupBox(Tabs);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 60, 431, 381));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 411, 351));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        LE_FunctionName = new QLineEdit(horizontalLayoutWidget);
        LE_FunctionName->setObjectName(QString::fromUtf8("LE_FunctionName"));

        verticalLayout->addWidget(LE_FunctionName);

        LW_StaticRegisters = new QListWidget(horizontalLayoutWidget);
        LW_StaticRegisters->setObjectName(QString::fromUtf8("LW_StaticRegisters"));
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

        PB_AddRegister = new QPushButton(horizontalLayoutWidget);
        PB_AddRegister->setObjectName(QString::fromUtf8("PB_AddRegister"));
        PB_AddRegister->setEnabled(false);
        PB_AddRegister->setAutoDefault(true);
        PB_AddRegister->setFlat(false);

        verticalLayout->addWidget(PB_AddRegister);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        TW_AddedRegisters = new QTableWidget(horizontalLayoutWidget);
        if (TW_AddedRegisters->columnCount() < 2)
            TW_AddedRegisters->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TW_AddedRegisters->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TW_AddedRegisters->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        TW_AddedRegisters->setObjectName(QString::fromUtf8("TW_AddedRegisters"));
        TW_AddedRegisters->setEnabled(true);
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
        TW_AddedRegisters->horizontalHeader()->setMinimumSectionSize(100);
        TW_AddedRegisters->horizontalHeader()->setDefaultSectionSize(100);
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

        PB_RemoveRegister = new QPushButton(horizontalLayoutWidget);
        PB_RemoveRegister->setObjectName(QString::fromUtf8("PB_RemoveRegister"));
        PB_RemoveRegister->setEnabled(false);
        PB_RemoveRegister->setCheckable(false);
        PB_RemoveRegister->setChecked(false);
        PB_RemoveRegister->setAutoDefault(true);

        verticalLayout_2->addWidget(PB_RemoveRegister);


        horizontalLayout->addLayout(verticalLayout_2);

        CB_Scripts = new QComboBox(Tabs);
        CB_Scripts->setObjectName(QString::fromUtf8("CB_Scripts"));
        CB_Scripts->setGeometry(QRect(490, 70, 121, 21));
        CB_Classes = new QComboBox(Tabs);
        CB_Classes->setObjectName(QString::fromUtf8("CB_Classes"));
        CB_Classes->setGeometry(QRect(490, 120, 121, 22));
        CB_Classes->setMaxVisibleItems(100);
        MainWindow->setCentralWidget(Tabs);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 977, 22));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setEnabled(true);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Friz Quadrata Com"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        toolBar->setFont(font2);
        toolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        QWidget::setTabOrder(pushButton, textEditDebug);
        QWidget::setTabOrder(textEditDebug, LE_FunctionName);
        QWidget::setTabOrder(LE_FunctionName, PB_AddRegister);
        QWidget::setTabOrder(PB_AddRegister, PB_RemoveRegister);
        QWidget::setTabOrder(PB_RemoveRegister, LE_ScriptName);

        toolBar->addAction(Generation);

        retranslateUi(MainWindow);

        pushButton->setDefault(false);
        PB_AddRegister->setDefault(true);
        PB_RemoveRegister->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Generation->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
#if QT_CONFIG(tooltip)
        Generation->setToolTip(QCoreApplication::translate("MainWindow", "Generate Code", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("MainWindow", "Generate Code", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        PB_AddRegister->setText(QCoreApplication::translate("MainWindow", "Add Register", nullptr));
#if QT_CONFIG(shortcut)
        PB_AddRegister->setShortcut(QCoreApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
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
