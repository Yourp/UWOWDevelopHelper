#include "payroll.h"
#include "ui_payroll.h"
#include "Salary/salarystatics.h"
#include "Salary/commit.h"
#include <QSpinBox>
#include <QHBoxLayout>
#include <QDesktopServices>
#include <QUrl>
#include <QProcess>
#include <QDebug>
#include <QString>

Payroll::Payroll(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Payroll)
{
    ui->setupUi(this);

    ui->TW_Payroll->setColumnCount(4);


    ui->TW_Payroll->setHorizontalHeaderLabels(QStringList() << "Message" << "Date" << "Comment" << "Price");
    ui->TW_Payroll->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->TW_Payroll->verticalHeader()->setDefaultSectionSize(15);

    ui->TW_Payroll->setColumnWidth(0, 600);
    ui->TW_Payroll->setColumnWidth(1, 110);
    ui->TW_Payroll->setColumnWidth(2, 300);
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

    QProcess proc;
    proc.setWorkingDirectory("c:/Users/Yourp/uWoW/735");
    proc.start("C:\\Program Files\\Git\\bin\\bash.exe", {"-c", "git log --author=ysmart --date=iso -100"});
    proc.waitForFinished();
    QString output;
    output = proc.readAll();

    qDebug() << output;

    proc.close();

    SalaryStatics::UpdateCommitsList(output);

    ui->TW_Payroll->setRowCount(SalaryStatics::Commits.size());

    for (int i = 0; i < SalaryStatics::Commits.size(); ++i)
    {
        ui->TW_Payroll->setItem(i, 0, new QTableWidgetItem(SalaryStatics::Commits[i].GetMessage()));
        ui->TW_Payroll->setItem(i, 1, new QTableWidgetItem(SalaryStatics::Commits[i].GetDate()));
    }
}

Payroll::~Payroll()
{
    delete ui;
}

void Payroll::on_PB_OpenUrl_clicked()
{
    int Index = ui->TW_Payroll->currentRow();
    QString url = "https://bitbucket.org/blackmanos/legioncore/commits/" + SalaryStatics::Commits[Index].GetName();
    QDesktopServices::openUrl(QUrl(url, QUrl::StrictMode));
    QDesktopServices::openUrl(QUrl(url, QUrl::StrictMode));
    QDesktopServices::openUrl(QUrl(url, QUrl::StrictMode));
}
