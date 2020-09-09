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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
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
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QListView *StaticRegisters;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_2;
    QListView *StaticRegisters_2;
    QPushButton *pushButton_3;
    QTextEdit *textEditDebug;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(958, 730);
        Generation = new QAction(MainWindow);
        Generation->setObjectName(QString::fromUtf8("Generation"));
        Generation->setCheckable(false);
        Generation->setChecked(false);
        Generation->setEnabled(true);
        QFont font;
        font.setPointSize(12);
        Generation->setFont(font);
        Generation->setAutoRepeat(true);
        Generation->setVisible(true);
        Tabs = new QWidget(MainWindow);
        Tabs->setObjectName(QString::fromUtf8("Tabs"));
        ScriptName = new QLineEdit(Tabs);
        ScriptName->setObjectName(QString::fromUtf8("ScriptName"));
        ScriptName->setGeometry(QRect(10, 10, 239, 20));
        pushButton = new QPushButton(Tabs);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 350, 101, 31));
        horizontalLayoutWidget = new QWidget(Tabs);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 50, 381, 291));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        StaticRegisters = new QListView(horizontalLayoutWidget);
        StaticRegisters->setObjectName(QString::fromUtf8("StaticRegisters"));

        verticalLayout->addWidget(StaticRegisters);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        StaticRegisters_2 = new QListView(horizontalLayoutWidget);
        StaticRegisters_2->setObjectName(QString::fromUtf8("StaticRegisters_2"));

        verticalLayout_2->addWidget(StaticRegisters_2);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);


        horizontalLayout->addLayout(verticalLayout_2);

        textEditDebug = new QTextEdit(Tabs);
        textEditDebug->setObjectName(QString::fromUtf8("textEditDebug"));
        textEditDebug->setGeometry(QRect(420, 50, 511, 601));
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
        QFont font1;
        font1.setFamily(QString::fromUtf8("Friz Quadrata Com"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        toolBar->setFont(font1);
        toolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(Generation);

        retranslateUi(MainWindow);

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
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Add Register", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Remove Register", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
