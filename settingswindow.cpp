#include "settingswindow.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) : QDialog(parent), ui(new Ui::SettingsWindow)
{
    ui->setupUi(this);

    QListWidgetItem* QLWI = new QListWidgetItem("Data Base");
    QLWI->setSizeHint(QSize(10, 30));

    QListWidgetItem* QLWI2 = new QListWidgetItem("Paths");
    QLWI2->setSizeHint(QSize(10, 30));

    ui->LW_SettingsCategories->addItem(QLWI);
    ui->LW_SettingsCategories->addItem(QLWI2);
}

Settings::~Settings()
{
    delete ui;
}
