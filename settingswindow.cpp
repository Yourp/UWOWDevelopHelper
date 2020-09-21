#include "settingswindow.h"
#include "ui_settingswindow.h"

SettingsWindow::SettingsWindow(QWidget *parent) : QDialog(parent), ui(new Ui::SettingsWindow)
{
    ui->setupUi(this);

    ui->LW_SettingsCategories->addItem(CreateSettingWidgetItem("Data Base"));
    ui->LW_SettingsCategories->addItem(CreateSettingWidgetItem("Scripts Paths"));

    ui->LW_SettingsCategories->setCurrentRow(0);
}

SettingsWindow::~SettingsWindow()
{
    delete ui;
}

QListWidgetItem *SettingsWindow::CreateSettingWidgetItem(QString const& ItemName)
{
    QListWidgetItem* NewItem = new QListWidgetItem(ItemName);
    NewItem->setSizeHint(QSize(10, 30));
    return NewItem;
}
