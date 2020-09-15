/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
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
#include <QtWidgets/QListView>
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
    QLineEdit *ScriptName;
    QPushButton *pushButton;
    QTextEdit *textEditDebug;
    QComboBox *CB_Classes;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QListView *StaticRegisters;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *TW_AddedRegisters;
    QPushButton *pushButton_3;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(958, 730);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        MainWindow->setFont(font);
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
        ScriptName = new QLineEdit(Tabs);
        ScriptName->setObjectName(QString::fromUtf8("ScriptName"));
        ScriptName->setGeometry(QRect(10, 10, 239, 20));
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
        CB_Classes = new QComboBox(Tabs);
        CB_Classes->addItem(QString());
        CB_Classes->addItem(QString());
        CB_Classes->addItem(QString());
        CB_Classes->addItem(QString());
        CB_Classes->addItem(QString());
        CB_Classes->addItem(QString());
        CB_Classes->addItem(QString());
        CB_Classes->addItem(QString());
        CB_Classes->setObjectName(QString::fromUtf8("CB_Classes"));
        CB_Classes->setGeometry(QRect(530, 100, 101, 21));
        groupBox = new QGroupBox(Tabs);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 50, 431, 381));
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
        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        StaticRegisters = new QListView(horizontalLayoutWidget);
        StaticRegisters->setObjectName(QString::fromUtf8("StaticRegisters"));

        verticalLayout->addWidget(StaticRegisters);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


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
        TW_AddedRegisters->horizontalHeader()->setVisible(true);
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

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setCheckable(false);
        pushButton_3->setChecked(false);

        verticalLayout_2->addWidget(pushButton_3);


        horizontalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(Tabs);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 958, 22));
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

        toolBar->addAction(Generation);

        retranslateUi(MainWindow);

        pushButton->setDefault(false);


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
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        CB_Classes->setItemText(0, QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        CB_Classes->setItemText(1, QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        CB_Classes->setItemText(2, QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        CB_Classes->setItemText(3, QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        CB_Classes->setItemText(4, QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        CB_Classes->setItemText(5, QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        CB_Classes->setItemText(6, QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        CB_Classes->setItemText(7, QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\321\213\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));

        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Add Register", nullptr));
        QTableWidgetItem *___qtablewidgetitem = TW_AddedRegisters->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TW_AddedRegisters->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Function", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Remove Register", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
