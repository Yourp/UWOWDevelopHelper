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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Payroll
{
public:
    QTableWidget *TW_Payroll;
    QPushButton *PB_GenerateReport;
    QLabel *label;
    QLabel *L_TotalSum;
    QPushButton *PB_SendNewMonth;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *PB_RefreshCommits;
    QPushButton *PB_OpenUrl;
    QSpinBox *SB_CommitCost;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *L_TotalCommits;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPlainTextEdit *PTE_Message;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QPlainTextEdit *PTE_Comment;

    void setupUi(QDialog *Payroll)
    {
        if (Payroll->objectName().isEmpty())
            Payroll->setObjectName(QString::fromUtf8("Payroll"));
        Payroll->resize(1111, 669);
        TW_Payroll = new QTableWidget(Payroll);
        TW_Payroll->setObjectName(QString::fromUtf8("TW_Payroll"));
        TW_Payroll->setGeometry(QRect(10, 299, 1091, 361));
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
        PB_GenerateReport = new QPushButton(Payroll);
        PB_GenerateReport->setObjectName(QString::fromUtf8("PB_GenerateReport"));
        PB_GenerateReport->setGeometry(QRect(120, 10, 75, 21));
        QFont font;
        font.setPointSize(8);
        PB_GenerateReport->setFont(font);
        PB_GenerateReport->setFocusPolicy(Qt::NoFocus);
        PB_GenerateReport->setAutoDefault(false);
        label = new QLabel(Payroll);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(946, -10, 91, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(10);
        label->setFont(font1);
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        L_TotalSum = new QLabel(Payroll);
        L_TotalSum->setObjectName(QString::fromUtf8("L_TotalSum"));
        L_TotalSum->setGeometry(QRect(1029, -10, 181, 47));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        L_TotalSum->setFont(font2);
        L_TotalSum->setLayoutDirection(Qt::LeftToRight);
        L_TotalSum->setStyleSheet(QString::fromUtf8(""));
        L_TotalSum->setTextFormat(Qt::AutoText);
        L_TotalSum->setScaledContents(true);
        L_TotalSum->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        L_TotalSum->setMargin(0);
        L_TotalSum->setIndent(1);
        PB_SendNewMonth = new QPushButton(Payroll);
        PB_SendNewMonth->setObjectName(QString::fromUtf8("PB_SendNewMonth"));
        PB_SendNewMonth->setEnabled(false);
        PB_SendNewMonth->setGeometry(QRect(10, 10, 101, 21));
        PB_SendNewMonth->setFocusPolicy(Qt::NoFocus);
        PB_SendNewMonth->setAutoDefault(false);
        layoutWidget = new QWidget(Payroll);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(840, 260, 241, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        PB_RefreshCommits = new QPushButton(layoutWidget);
        PB_RefreshCommits->setObjectName(QString::fromUtf8("PB_RefreshCommits"));
        PB_RefreshCommits->setMinimumSize(QSize(0, 29));
        QFont font3;
        font3.setPointSize(10);
        PB_RefreshCommits->setFont(font3);
        PB_RefreshCommits->setFocusPolicy(Qt::NoFocus);
        PB_RefreshCommits->setAutoDefault(false);

        horizontalLayout_2->addWidget(PB_RefreshCommits);

        PB_OpenUrl = new QPushButton(layoutWidget);
        PB_OpenUrl->setObjectName(QString::fromUtf8("PB_OpenUrl"));
        PB_OpenUrl->setEnabled(false);
        PB_OpenUrl->setMinimumSize(QSize(0, 29));
        PB_OpenUrl->setFont(font3);

        horizontalLayout_2->addWidget(PB_OpenUrl);

        SB_CommitCost = new QSpinBox(layoutWidget);
        SB_CommitCost->setObjectName(QString::fromUtf8("SB_CommitCost"));
        SB_CommitCost->setEnabled(false);
        SB_CommitCost->setMaximumSize(QSize(50, 16777215));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        SB_CommitCost->setFont(font4);
        SB_CommitCost->setMinimum(0);
        SB_CommitCost->setMaximum(999);

        horizontalLayout_2->addWidget(SB_CommitCost);

        layoutWidget1 = new QWidget(Payroll);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(960, 30, 104, 20));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(14);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        label_4->setFont(font5);
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        horizontalLayout_3->addWidget(label_4);

        L_TotalCommits = new QLabel(layoutWidget1);
        L_TotalCommits->setObjectName(QString::fromUtf8("L_TotalCommits"));
        L_TotalCommits->setMaximumSize(QSize(16777215, 15));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Calibri"));
        font6.setPointSize(15);
        font6.setBold(true);
        font6.setItalic(true);
        font6.setWeight(75);
        L_TotalCommits->setFont(font6);
        L_TotalCommits->setLayoutDirection(Qt::LeftToRight);
        L_TotalCommits->setStyleSheet(QString::fromUtf8(""));
        L_TotalCommits->setFrameShape(QFrame::NoFrame);
        L_TotalCommits->setFrameShadow(QFrame::Plain);
        L_TotalCommits->setTextFormat(Qt::AutoText);
        L_TotalCommits->setScaledContents(true);
        L_TotalCommits->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        L_TotalCommits->setWordWrap(false);
        L_TotalCommits->setMargin(0);

        horizontalLayout_3->addWidget(L_TotalCommits);

        layoutWidget2 = new QWidget(Payroll);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 50, 821, 241));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 20));
        label_2->setMaximumSize(QSize(16777215, 20));
        label_2->setFont(font3);

        verticalLayout_2->addWidget(label_2);

        PTE_Message = new QPlainTextEdit(layoutWidget2);
        PTE_Message->setObjectName(QString::fromUtf8("PTE_Message"));
        PTE_Message->setMinimumSize(QSize(500, 0));
        PTE_Message->setFont(font3);
        PTE_Message->setFocusPolicy(Qt::ClickFocus);
        PTE_Message->setStyleSheet(QString::fromUtf8("QPlainTextEdit\n"
"{\n"
"	border: 1px solid;\n"
"	border-radius: 6px;\n"
"	background-color: rgb(240, 240, 240);\n"
"}\n"
""));
        PTE_Message->setFrameShape(QFrame::StyledPanel);
        PTE_Message->setLineWidth(1);
        PTE_Message->setMidLineWidth(0);
        PTE_Message->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(PTE_Message);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 20));
        label_3->setMaximumSize(QSize(16777215, 20));
        label_3->setFont(font3);

        verticalLayout->addWidget(label_3);

        PTE_Comment = new QPlainTextEdit(layoutWidget2);
        PTE_Comment->setObjectName(QString::fromUtf8("PTE_Comment"));
        PTE_Comment->setMaximumSize(QSize(350, 16777215));
        PTE_Comment->setFont(font3);
        PTE_Comment->setFocusPolicy(Qt::ClickFocus);
        PTE_Comment->setStyleSheet(QString::fromUtf8("QPlainTextEdit\n"
"{\n"
"	border: 1px solid;\n"
"	border-radius: 6px;\n"
"	background-color: rgb(240, 240, 240);\n"
"}"));
        PTE_Comment->setTextInteractionFlags(Qt::TextEditorInteraction);

        verticalLayout->addWidget(PTE_Comment);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Payroll);

        PB_OpenUrl->setDefault(true);


        QMetaObject::connectSlotsByName(Payroll);
    } // setupUi

    void retranslateUi(QDialog *Payroll)
    {
        Payroll->setWindowTitle(QCoreApplication::translate("Payroll", "Payroll Control", nullptr));
        PB_GenerateReport->setText(QCoreApplication::translate("Payroll", "Report", nullptr));
        label->setText(QCoreApplication::translate("Payroll", "TOTAL SUM:", nullptr));
        L_TotalSum->setText(QCoreApplication::translate("Payroll", "0 $", nullptr));
        PB_SendNewMonth->setText(QCoreApplication::translate("Payroll", "Send New Month ", nullptr));
        PB_RefreshCommits->setText(QCoreApplication::translate("Payroll", "Refresh", nullptr));
        PB_OpenUrl->setText(QCoreApplication::translate("Payroll", "Open Url", nullptr));
#if QT_CONFIG(shortcut)
        PB_OpenUrl->setShortcut(QCoreApplication::translate("Payroll", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        label_4->setText(QCoreApplication::translate("Payroll", "COMMITS:", nullptr));
        L_TotalCommits->setText(QCoreApplication::translate("Payroll", "0", nullptr));
        label_2->setText(QCoreApplication::translate("Payroll", "Message:", nullptr));
        label_3->setText(QCoreApplication::translate("Payroll", "Comment:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Payroll: public Ui_Payroll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYROLL_H
