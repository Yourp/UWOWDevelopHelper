#include "payroll.h"
#include "ui_payroll.h"
#include "Salary/salarystatics.h"
#include "Salary/commit.h"
#include <QSpinBox>
#include <QHBoxLayout>
#include <QDesktopServices>
#include <QUrl>
#include <QString>


enum TableColumnType
{
    Message = 0,
    Date,
    Comment,
    Price,
    ColumnTypeMax
};

Payroll::Payroll(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Payroll)
{
    ui->setupUi(this);

    ui->TW_Payroll->setColumnCount(ColumnTypeMax);


    ui->TW_Payroll->setHorizontalHeaderLabels(QStringList() << "Message" << "Date" << "Comment" << "Price");
    ui->TW_Payroll->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->TW_Payroll->verticalHeader()->setDefaultSectionSize(15);

    ui->TW_Payroll->setColumnWidth(0, 700);
    ui->TW_Payroll->setColumnWidth(1, 110);
    ui->TW_Payroll->setColumnWidth(2, 200);
    ui->TW_Payroll->setColumnWidth(3, 40);

    ui->TW_Payroll->scrollToBottom();

    QWidget* pWidget = new QWidget();
    QSpinBox* btn_edit = new QSpinBox();

    QHBoxLayout* pLayout = new QHBoxLayout(pWidget);
    pLayout->addWidget(btn_edit);
    pLayout->setAlignment(Qt::AlignCenter);
    pLayout->setContentsMargins(0, 0, 0, 0);
    pWidget->setLayout(pLayout);
    ui->TW_Payroll->setCellWidget(3, 3, pWidget);


    SalaryStatics::UpdateCommitsList();
    SalaryStatics::Load();

    ui->TW_Payroll->setRowCount(SalaryStatics::Commits.size());

    for (int i = 0; i < SalaryStatics::Commits.size(); ++i)
    {
        ui->TW_Payroll->setItem(i, 0, new QTableWidgetItem(SalaryStatics::Commits[i].GetMessage()));
        ui->TW_Payroll->setItem(i, 1, new QTableWidgetItem(SalaryStatics::Commits[i].GetDate()));

        QTableWidgetItem* Comment = new QTableWidgetItem(SalaryStatics::Commits[i].GetComment());
        Comment->setTextAlignment(Qt::AlignCenter);
        ui->TW_Payroll->setItem(i, 2, Comment);

        QTableWidgetItem* Cost = new QTableWidgetItem(SalaryStatics::Commits[i].GetCost());
        Cost->setTextAlignment(Qt::AlignCenter);
        QFont font("Calibri", 12);
        font.setBold(true);
        font.setItalic(true);
        Cost->setFont(font);
        ui->TW_Payroll->setItem(i, 3, Cost);
    }

    ui->TW_Payroll->setCurrentCell(0, 0);
}

Payroll::~Payroll()
{
    SalaryStatics::SaveAll();
    delete ui;
}

void Payroll::on_PB_OpenUrl_clicked()
{
    int Index = ui->TW_Payroll->currentRow();
    QString url = "https://bitbucket.org/blackmanos/legioncore/commits/" + SalaryStatics::Commits[Index].GetName();
    QDesktopServices::openUrl(QUrl(url, QUrl::StrictMode));
}

void Payroll::on_TW_Payroll_currentCellChanged(int currentRow, int, int, int)
{
    if (currentRow >= 0)
    {
        if (QTableWidgetItem* MessageItem = ui->TW_Payroll->item(currentRow, Message))
        {
            ui->PTE_Message->setPlainText(MessageItem->text());
        }

        if (QTableWidgetItem* CommentItem = ui->TW_Payroll->item(currentRow, Comment))
        {
            ui->PTE_Comment->setPlainText(CommentItem->text());
        }

        if (QTableWidgetItem* CommitCostItem = ui->TW_Payroll->item(currentRow, Price))
        {
            ui->SB_CommitCost->setValue(CommitCostItem->text().toInt());
        }

        ui->PTE_Comment->setEnabled(true);
        ui->PTE_Comment->clearFocus();

        ui->SB_CommitCost->setEnabled(true);
        ui->SB_CommitCost->setFocus();
        ui->SB_CommitCost->selectAll();

        ui->PB_OpenUrl->setEnabled(true);
    }
    else
    {
        ui->PTE_Message->setPlainText("");
        ui->PTE_Comment->setPlainText("");
        ui->PTE_Comment->setEnabled(false);
        ui->PB_OpenUrl->setEnabled(false);
        ui->SB_CommitCost->setEnabled(false);
    }
}

void Payroll::on_PTE_Comment_textChanged()
{
    int Index = ui->TW_Payroll->currentRow();

    if (Index >= 0)
    {
        QString text = ui->PTE_Comment->toPlainText();

        if (text != SalaryStatics::Commits[Index].GetComment())
        {
            SalaryStatics::Commits[Index].SetComment(text);

            if (QTableWidgetItem* CommentItem = ui->TW_Payroll->item(Index, 2))
            {
                CommentItem->setText(text);
            }
        }
    }
}

void Payroll::on_SB_CommitCost_valueChanged(const QString &arg1)
{
    int Index = ui->TW_Payroll->currentRow();

    if (SalaryStatics::Commits[Index].GetCost() != arg1)
    {
        SalaryStatics::Commits[Index].SetCost(arg1);
        ui->L_TotalSum->setText(SalaryStatics::GetTotalSum());

        if (QTableWidgetItem* CommitCostItem = ui->TW_Payroll->item(Index, Price))
        {
            CommitCostItem->setText(SalaryStatics::Commits[Index].GetCost());
        }
    }
}
