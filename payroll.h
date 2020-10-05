#ifndef PAYROLL_H
#define PAYROLL_H

#include <QDialog>

namespace Ui {
class Payroll;
}

class Payroll : public QDialog
{
    Q_OBJECT

public:
    explicit Payroll(QWidget *parent = nullptr);
    ~Payroll();

private slots:
    void on_PB_OpenUrl_clicked();
    void on_TW_Payroll_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);

    void on_PTE_Comment_textChanged();

    void on_SB_CommitCost_valueChanged(const QString &arg1);

private:
    Ui::Payroll *ui;
};

#endif // PAYROLL_H
