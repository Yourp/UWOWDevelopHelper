/********************************************************************************
** Form generated from reading UI file 'payroll.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYROLL_H
#define UI_PAYROLL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Payroll
{
public:
    QTableWidget *TW_Payroll;
    QSpinBox *SB_CommitCost;
    QPushButton *PB_OpenUrl;
    QPushButton *PB_GenerateReport;
    QLabel *label;
    QLabel *L_TotalSum;
    QPlainTextEdit *PTE_Message;
    QPlainTextEdit *PTE_Comment;

    void setupUi(QDialog *Payroll)
    {
        if (Payroll->objectName().isEmpty())
            Payroll->setObjectName(QString::fromUtf8("Payroll"));
        Payroll->resize(1121, 689);
        TW_Payroll = new QTableWidget(Payroll);
        TW_Payroll->setObjectName(QString::fromUtf8("TW_Payroll"));
        TW_Payroll->setGeometry(QRect(10, 299, 1101, 381));
        TW_Payroll->setMouseTracking(false);
        TW_Payroll->setTabletTracking(false);
        TW_Payroll->setFocusPolicy(Qt::NoFocus);
        TW_Payroll->setAutoFillBackground(false);
        TW_Payroll->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"    color: rgb(0, 0, 0);\n"
"    background-color: rgb(240, 240, 240);\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"   border-top: 1px solid;\n"
"	border-bottom: 1px solid;\n"
"    color: rgb(0, 0, 0);\n"
"    border-color: rgb(180, 190, 200, 0);\n"
"\n"
"}\n"
"\n"
"QTableWidget::item:hover\n"
"{\n"
"    border-top: 1px solid;\n"
"	border-bottom: 1px solid;\n"
"    color: rgb(0, 0, 0);\n"
"    background-color: rgb(180, 190, 200, 0);\n"
"    border-color: rgb(180, 190, 200, 0);\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    border-top: 1px solid;\n"
"	border-bottom: 1px solid;\n"
"    color: rgb(0, 170, 0);\n"
"    background-color: rgb(0, 170, 0, 20);\n"
"	 border-color: rgb(0, 170, 0);\n"
"}\n"
"\n"
""));
        TW_Payroll->setInputMethodHints(Qt::ImhNone);
        TW_Payroll->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        TW_Payroll->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        TW_Payroll->setAutoScroll(false);
        TW_Payroll->setEditTriggers(QAbstractItemView::NoEditTriggers);
        TW_Payroll->setTabKeyNavigation(false);
        TW_Payroll->setAlternatingRowColors(true);
        TW_Payroll->setSelectionMode(QAbstractItemView::SingleSelection);
        TW_Payroll->setSelectionBehavior(QAbstractItemView::SelectRows);
        TW_Payroll->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        TW_Payroll->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        TW_Payroll->setSortingEnabled(false);
        TW_Payroll->setWordWrap(true);
        TW_Payroll->setCornerButtonEnabled(true);
        TW_Payroll->horizontalHeader()->setCascadingSectionResizes(true);
        TW_Payroll->horizontalHeader()->setHighlightSections(true);
        TW_Payroll->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        TW_Payroll->horizontalHeader()->setStretchLastSection(true);
        TW_Payroll->verticalHeader()->setVisible(false);
        TW_Payroll->verticalHeader()->setCascadingSectionResizes(false);
        TW_Payroll->verticalHeader()->setHighlightSections(true);
        TW_Payroll->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        TW_Payroll->verticalHeader()->setStretchLastSection(false);
        SB_CommitCost = new QSpinBox(Payroll);
        SB_CommitCost->setObjectName(QString::fromUtf8("SB_CommitCost"));
        SB_CommitCost->setEnabled(false);
        SB_CommitCost->setGeometry(QRect(840, 220, 51, 31));
        QFont font;
        font.setPointSize(10);
        SB_CommitCost->setFont(font);
        SB_CommitCost->setMaximum(999);
        PB_OpenUrl = new QPushButton(Payroll);
        PB_OpenUrl->setObjectName(QString::fromUtf8("PB_OpenUrl"));
        PB_OpenUrl->setEnabled(false);
        PB_OpenUrl->setGeometry(QRect(770, 250, 61, 31));
        PB_OpenUrl->setFont(font);
        PB_GenerateReport = new QPushButton(Payroll);
        PB_GenerateReport->setObjectName(QString::fromUtf8("PB_GenerateReport"));
        PB_GenerateReport->setGeometry(QRect(860, 50, 75, 23));
        PB_GenerateReport->setFont(font);
        label = new QLabel(Payroll);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(920, 250, 91, 41));
        label->setFont(font);
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        L_TotalSum = new QLabel(Payroll);
        L_TotalSum->setObjectName(QString::fromUtf8("L_TotalSum"));
        L_TotalSum->setGeometry(QRect(1009, 250, 181, 47));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        L_TotalSum->setFont(font1);
        L_TotalSum->setLayoutDirection(Qt::LeftToRight);
        L_TotalSum->setStyleSheet(QString::fromUtf8(""));
        L_TotalSum->setTextFormat(Qt::AutoText);
        L_TotalSum->setScaledContents(true);
        L_TotalSum->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        L_TotalSum->setMargin(0);
        L_TotalSum->setIndent(1);
        PTE_Message = new QPlainTextEdit(Payroll);
        PTE_Message->setObjectName(QString::fromUtf8("PTE_Message"));
        PTE_Message->setGeometry(QRect(10, 90, 471, 161));
        PTE_Message->setFont(font);
        PTE_Message->setFocusPolicy(Qt::ClickFocus);
        PTE_Message->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);\n"
""));
        PTE_Message->setTextInteractionFlags(Qt::TextSelectableByMouse);
        PTE_Comment = new QPlainTextEdit(Payroll);
        PTE_Comment->setObjectName(QString::fromUtf8("PTE_Comment"));
        PTE_Comment->setGeometry(QRect(490, 90, 291, 101));
        PTE_Comment->setFont(font);
        PTE_Comment->setFocusPolicy(Qt::ClickFocus);
        PTE_Comment->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);\n"
""));
        PTE_Comment->setTextInteractionFlags(Qt::TextEditorInteraction);

        retranslateUi(Payroll);

        PB_OpenUrl->setDefault(true);


        QMetaObject::connectSlotsByName(Payroll);
    } // setupUi

    void retranslateUi(QDialog *Payroll)
    {
        Payroll->setWindowTitle(QCoreApplication::translate("Payroll", "Dialog", nullptr));
        PB_OpenUrl->setText(QCoreApplication::translate("Payroll", "Open Url", nullptr));
#if QT_CONFIG(shortcut)
        PB_OpenUrl->setShortcut(QCoreApplication::translate("Payroll", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        PB_GenerateReport->setText(QCoreApplication::translate("Payroll", "Report", nullptr));
        label->setText(QCoreApplication::translate("Payroll", "TOTAL SUM:", nullptr));
        L_TotalSum->setText(QCoreApplication::translate("Payroll", "0 $", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Payroll: public Ui_Payroll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYROLL_H
