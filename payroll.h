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

private:
    Ui::Payroll *ui;
};

#endif // PAYROLL_H
