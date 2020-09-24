#include "settingswindow.h"
#include "ui_settingswindow.h"
#include "mainwindow.h"
#include "Classes/classname.h"
#include <QFile>
#include <QFileDialog>

SettingsWindow::SettingsWindow(QWidget *parent) : QDialog(parent), ui(new Ui::SettingsWindow)
{
    ui->setupUi(this);

    ui->LW_SettingsCategories->addItem(CreateSettingWidgetItem("Database Connection"));
    ui->LW_SettingsCategories->addItem(CreateSettingWidgetItem("Scripts"));
    ui->LW_SettingsCategories->addItem(CreateSettingWidgetItem("Saves"));

    for (auto& Class : MainWindow::Classes)
    {
        QListWidgetItem* NewItem = new QListWidgetItem(Class->GetName());
        NewItem->setSizeHint(QSize(10, 20));
        ui->LW_SettingsClassesScripts->addItem(NewItem);
    }

    ui->LE_Port->setValidator(new QIntValidator(0, 99999, this));

    LoadConfig();

    if (DBConnection.Connect(this))
    {
        EditButtonsWhenConnected();
    }
    else
    {
        EditButtonsWhenDisconnected();
    }

    for (int i = 0; i < MainWindow::Classes.size(); ++i)
    {
        QString Path = MainWindow::Classes[i]->GetScriptsFilePath();
        ui->LW_SettingsClassesScripts->item(i)->setIcon(GetValidationPathIcon(Path));
    }


    ui->LW_SettingsCategories->setCurrentRow(0);
    ui->LW_SettingsClassesScripts->setCurrentRow(0);
}

SettingsWindow::~SettingsWindow()
{
    SaveToConfig();
    delete ui;
}

QString SettingsWindow::GetHostName() const
{
    return ui->LE_HostName->text();
}

int SettingsWindow::GetPort() const
{
    return ui->LE_Port->text().toInt(nullptr, 0);
}

QString SettingsWindow::GetUserName() const
{
    return ui->LE_UserName->text();
}

QString SettingsWindow::GetPassword() const
{
    return ui->LE_Password->text();
}

QString SettingsWindow::GetDatabaseName() const
{
    return ui->LE_DatabaseName->text();
}

QIcon SettingsWindow::GetValidationPathIcon(const QString &Path) const
{
    QFileInfo fileInfo(Path);
    QFile file(Path);

    if (!file.exists() || fileInfo.suffix() != "cpp")
    {
        return QIcon("Icons/not_ok.png");
    }

    return QIcon("Icons/ok.png");
}

QListWidgetItem *SettingsWindow::CreateSettingWidgetItem(QString const& ItemName)
{
    QListWidgetItem* NewItem = new QListWidgetItem(ItemName);
    NewItem->setSizeHint(QSize(10, 30));
    return NewItem;
}

void SettingsWindow::EditButtonsWhenConnected()
{
    ui->PB_Connect->setText("Connected");
    ui->PB_Connect->setEnabled(false);
    ui->PB_Connect->setStyleSheet("color: rgb(0, 177, 0);");

    ui->PB_Disconnect->setText("Disconnect");
    ui->PB_Disconnect->setEnabled(true);
    ui->PB_Disconnect->setStyleSheet("");

    ui->LE_HostName->setEnabled(false);
    ui->LE_Port->setEnabled(false);
    ui->LE_UserName->setEnabled(false);
    ui->LE_Password->setEnabled(false);
    ui->LE_DatabaseName->setEnabled(false);
}

void SettingsWindow::EditButtonsWhenDisconnected()
{
    ui->PB_Disconnect->setText("Disconnected");
    ui->PB_Disconnect->setEnabled(false);
    ui->PB_Disconnect->setStyleSheet("color: rgb(170, 0, 0);");

    ui->PB_Connect->setText("Connect");
    ui->PB_Connect->setEnabled(true);
    ui->PB_Connect->setStyleSheet("");

    ui->LE_HostName->setEnabled(true);
    ui->LE_Port->setEnabled(true);
    ui->LE_UserName->setEnabled(true);
    ui->LE_Password->setEnabled(true);
    ui->LE_DatabaseName->setEnabled(true);
}

void SettingsWindow::LoadConfig()
{
    QSettings Conf("Config.ini", QSettings::IniFormat);

    ui->LE_HostName->setText(Conf.value("Database.HostName").toString());
    ui->LE_Port->setText(Conf.value("Database.Port").toString());
    ui->LE_UserName->setText(Conf.value("Database.UserName").toString());
    ui->LE_Password->setText(Conf.value("Database.Password").toString());
    ui->LE_DatabaseName->setText(Conf.value("Database.DatabaseName").toString());

    for (auto& Class : MainWindow::Classes)
    {
        Class->SetScriptsFilePath(Conf.value("SpellScript.Classes." + Class->GetName()).toString());
    }
}

void SettingsWindow::SaveToConfig()
{
    QSettings Conf("Config.ini", QSettings::IniFormat);

    Conf.setValue("Database.HostName", ui->LE_HostName->text());
    Conf.setValue("Database.Port", ui->LE_Port->text());
    Conf.setValue("Database.UserName", ui->LE_UserName->text());
    Conf.setValue("Database.Password", ui->LE_Password->text());
    Conf.setValue("Database.DatabaseName", ui->LE_DatabaseName->text());

    for (auto& Class : MainWindow::Classes)
    {
        Conf.setValue("SpellScript.Classes." + Class->GetName(), Class->GetScriptsFilePath());
    }
}


void SettingsWindow::on_PB_Disconnect_clicked()
{
    DBConnection.Disconnect();
    EditButtonsWhenDisconnected();
}

void SettingsWindow::on_PB_Connect_clicked()
{
    if (DBConnection.Connect(this))
    {
        EditButtonsWhenConnected();
    }
}


void SettingsWindow::on_LW_SettingsCategories_currentRowChanged(int currentRow)
{
    ui->SW_SettingsLayer->setCurrentIndex(currentRow);
}

void SettingsWindow::on_LW_SettingsClassesScripts_currentRowChanged(int currentRow)
{
    ui->LE_ClassesScriptsPath->setText(MainWindow::Classes[currentRow]->GetScriptsFilePath());
}

void SettingsWindow::on_LE_ClassesScriptsPath_textChanged(const QString &arg1)
{
    int ClassIndex = ui->LW_SettingsClassesScripts->currentRow();

    if (ClassName* Class = MainWindow::Classes.at(ClassIndex))
    {
        if (Class->GetScriptsFilePath() != arg1)
        {
            Class->SetScriptsFilePath(arg1);
            ui->LW_SettingsClassesScripts->item(ClassIndex)->setIcon(GetValidationPathIcon(arg1));
        }
    }
}

void SettingsWindow::on_PB_FindScriptFile_released()
{
    QString Path = QFileDialog::getOpenFileName(this, "Find script file", "", "*.cpp");

    if (!Path.isEmpty())
    {
        ui->LE_ClassesScriptsPath->setText(Path);
    }
}
