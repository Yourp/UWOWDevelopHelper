#include "settingswindow.h"
#include "Scripts/spellscript.h"
#include "ui_settingswindow.h"
#include "mainwindow.h"
#include "Classes/classname.h"
#include "DataBase/databaseconnectorstatics.h"
#include "DataBase/databaseupdaterstatics.h"
#include "Settings/databasesettings.h"
#include <QFileDialog>


const QString SettingsWindow::VMark = "Icons/ok.png";
const QString SettingsWindow::XMark = "Icons/not_ok.png";

SettingsWindow::SettingsWindow(QWidget *parent) : QDialog(parent), ui(new Ui::SettingsWindow)
{
    ui->setupUi(this);
    DataBaseSettings::HostName = ui->LE_HostName;
    DataBaseSettings::Port = ui->LE_Port;
    DataBaseSettings::UserName = ui->LE_UserName;
    DataBaseSettings::Password = ui->LE_Password;

    ui->LW_SettingsCategories->addItem(CreateSettingWidgetItem("Database", QIcon("Icons/SettDBOn.png")));
    ui->LW_SettingsCategories->addItem(CreateSettingWidgetItem("Scripts & Classes", QIcon("Icons/SettScOn.png")));
    ui->LW_SettingsCategories->addItem(CreateSettingWidgetItem("SQL & Saves", QIcon("Icons/SettSQLOn.png")));
    ui->LW_SettingsCategories->setIconSize(QSize(25, 25));
    setFixedSize(size());


    for (auto& Class : ClassName::Classes)
    {
        QListWidgetItem* NewItem = new QListWidgetItem(Class->GetName());
        NewItem->setSizeHint(QSize(10, 20));
        ui->LW_SettingsClassesScripts->addItem(NewItem);
    }

    ui->LE_Port->setValidator(new QIntValidator(0, 99999, this));

    LoadConfig();

    for (int i = 0; i < ClassName::Classes.size(); ++i)
    {
        QString Path = ClassName::Classes[i]->GetScriptsFilePath();
        ui->LW_SettingsClassesScripts->item(i)->setIcon(GetValidationIcon(Path));
    }


    ui->LW_SettingsCategories->setCurrentRow(0);
    ui->LW_SettingsClassesScripts->setCurrentRow(0);

    if (DatabaseConnectorStatics::World.Connect(ui->LE_WorldDatabase->text()))
    {
        EditButtonsWhenConnected();
    }
    else
    {
        EditButtonsWhenDisconnected();
    }

    DatabaseConnectorStatics::Character.Connect(ui->LE_CharacterDatabase->text());
    DatabaseConnectorStatics::Login.Connect(ui->LE_LoginDatabase->text());

    UpdateDatabasesLEIcons();
}

SettingsWindow::~SettingsWindow()
{
    SaveConfig();
    delete ui;
}

const QString SettingsWindow::GetWorldSQLsFolder() const
{
    return ui->LE_WorldSQLFolder->text();
}

const QString SettingsWindow::GetSQLFileName() const
{
    return ui->LE_SQLFileName->text();
}

QIcon SettingsWindow::GetValidationIcon(const QString &Path) const
{
    return GetValidationIcon(SpellScript::CheckPathAndFileValidation(Path, "cpp"));
}

QIcon SettingsWindow::GetValidationIcon(bool valid) const
{
    return QIcon(valid ? VMark : XMark);
}

QListWidgetItem *SettingsWindow::CreateSettingWidgetItem(QString const& ItemName, QIcon ico)
{
    QListWidgetItem* NewItem = new QListWidgetItem(ItemName);
    NewItem->setIcon(ico);
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
    ui->LE_WorldDatabase->setEnabled(false);
    ui->LE_CharacterDatabase->setEnabled(false);
    ui->LE_LoginDatabase->setEnabled(false);
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
    ui->LE_WorldDatabase->setEnabled(true);
    ui->LE_CharacterDatabase->setEnabled(true);
    ui->LE_LoginDatabase->setEnabled(true);
}

void SettingsWindow::LoadConfig()
{
    QSettings Conf("Config.ini", QSettings::IniFormat);
    Conf.setIniCodec("UTF-8");

    Conf.beginGroup("Database");
    ui->LE_HostName->setText(Conf.value("HostName").toString());
    ui->LE_Port->setText(Conf.value("Port").toString());
    ui->LE_UserName->setText(Conf.value("UserName").toString());
    ui->LE_Password->setText(Conf.value("Password").toString());
    ui->LE_WorldDatabase->setText(Conf.value("WorldDatabase").toString());
    ui->LE_CharacterDatabase->setText(Conf.value("CharacterDatabase").toString());
    ui->LE_LoginDatabase->setText(Conf.value("LoginDatabase").toString());
    Conf.endGroup();

    Conf.beginGroup("SQL");
    ui->LE_SQLFileName->setText(Conf.value("SQLFileName", "00_spell_script_names").toString());
    ui->LE_WorldSQLFolder->setText(Conf.value("WorldSQLFolder").toString());
    ui->LE_CharacterSQLFolder->setText(Conf.value("CharacterSQLFolder").toString());
    ui->LE_LoginSQLFolder->setText(Conf.value("LoginSQLFolder").toString());

    DatabaseUpdaterStatics::World.SetLastUpdatesTime(Conf.value("World/LastTimeUpdate", QDateTime::currentMSecsSinceEpoch()).toLongLong());
    DatabaseUpdaterStatics::Character.SetLastUpdatesTime(Conf.value("Character/LastTimeUpdate", QDateTime::currentMSecsSinceEpoch()).toLongLong());
    DatabaseUpdaterStatics::Login.SetLastUpdatesTime(Conf.value("Login/LastTimeUpdate", QDateTime::currentMSecsSinceEpoch()).toLongLong());
    Conf.endGroup();

    Conf.beginGroup("SpellScript");
    for (auto& Class : ClassName::Classes)
    {
        Class->SetScriptsFilePath(Conf.value("Classes/" + Class->GetName()).toString());
    }

    Conf.endGroup();
}

void SettingsWindow::SaveConfig()
{
    QSettings Conf("Config.ini", QSettings::IniFormat);
    Conf.setIniCodec("UTF-8");

    Conf.beginGroup("Database");
    SaveToConfig(Conf, "HostName", ui->LE_HostName->text());
    SaveToConfig(Conf, "Port", ui->LE_Port->text());
    SaveToConfig(Conf, "UserName", ui->LE_UserName->text());
    SaveToConfig(Conf, "Password", ui->LE_Password->text());
    SaveToConfig(Conf, "WorldDatabase", ui->LE_WorldDatabase->text());
    SaveToConfig(Conf, "CharacterDatabase", ui->LE_CharacterDatabase->text());
    SaveToConfig(Conf, "LoginDatabase", ui->LE_LoginDatabase->text());
    Conf.endGroup();

    Conf.beginGroup("SQL");
    SaveToConfig(Conf, "SQLFileName", ui->LE_SQLFileName->text());
    SaveToConfig(Conf, "WorldSQLFolder", ui->LE_WorldSQLFolder->text());
    SaveToConfig(Conf, "CharacterSQLFolder", ui->LE_CharacterSQLFolder->text());
    SaveToConfig(Conf, "LoginSQLFolder", ui->LE_LoginSQLFolder->text());

    Conf.setValue("World/LastTimeUpdate", DatabaseUpdaterStatics::World.GetLastUpdatesTime());
    Conf.setValue("Character/LastTimeUpdate", DatabaseUpdaterStatics::Character.GetLastUpdatesTime());
    Conf.setValue("Login/LastTimeUpdate", DatabaseUpdaterStatics::Login.GetLastUpdatesTime());
    Conf.endGroup();

    Conf.beginGroup("SpellScript");
    for (auto& Class : ClassName::Classes)
    {
        SaveToConfig(Conf, "Classes/" + Class->GetName(), Class->GetScriptsFilePath());
    }
    Conf.endGroup();
}

void SettingsWindow::SaveToConfig(QSettings &Conf, const QString &Key, const QString &Text)
{
    if (!Text.isEmpty())
    {
        Conf.setValue(Key, Text);
        return;
    }
    Conf.remove(Key);
}

void SettingsWindow::SaveToConfig(QSettings &Conf, const QString &Key, const QVariant &Veriable)
{
    Conf.setValue(Key, Veriable);
}

void SettingsWindow::UpdateDatabasesLEIcons()
{
    ui->LE_WorldDatabase->SetIcon(GetValidationIcon(DatabaseConnectorStatics::World.IsOpen()));
    ui->LE_CharacterDatabase->SetIcon(GetValidationIcon(DatabaseConnectorStatics::Character.IsOpen()));
    ui->LE_LoginDatabase->SetIcon(GetValidationIcon(DatabaseConnectorStatics::Login.IsOpen()));
}

bool SettingsWindow::HasPayrollOption() const
{
    QSettings Conf("Config.ini", QSettings::IniFormat);
    Conf.setIniCodec("UTF-8");

    return Conf.value("WithPayroll", "0").toInt() > 0;
}

void SettingsWindow::on_PB_Disconnect_clicked()
{
    DatabaseConnectorStatics::World.Disconnect();
    DatabaseConnectorStatics::Character.Disconnect();
    DatabaseConnectorStatics::Login.Disconnect();
    EditButtonsWhenDisconnected();
    UpdateDatabasesLEIcons();
}

void SettingsWindow::on_PB_Connect_clicked()
{
    DatabaseConnectorStatics::World.Connect(ui->LE_WorldDatabase->text());
    DatabaseConnectorStatics::Character.Connect(ui->LE_CharacterDatabase->text());
    DatabaseConnectorStatics::Login.Connect(ui->LE_LoginDatabase->text());

    if (DatabaseConnectorStatics::World.IsOpen() || DatabaseConnectorStatics::Character.IsOpen() || DatabaseConnectorStatics::Login.IsOpen())
    {
        EditButtonsWhenConnected();
    }
    UpdateDatabasesLEIcons();
}

void SettingsWindow::on_LW_SettingsCategories_currentRowChanged(int currentRow)
{
    ui->SW_SettingsLayer->setCurrentIndex(currentRow);
}

void SettingsWindow::on_LW_SettingsClassesScripts_currentRowChanged(int currentRow)
{
    ui->LE_ClassesScriptsPath->setText(ClassName::Classes[currentRow]->GetScriptsFilePath());
}

void SettingsWindow::on_LE_ClassesScriptsPath_textChanged(const QString &arg1)
{
    int ClassIndex = ui->LW_SettingsClassesScripts->currentRow();

    if (ClassName* Class = ClassName::Classes.at(ClassIndex))
    {
        if (Class->GetScriptsFilePath() != arg1)
        {
            Class->SetScriptsFilePath(arg1);

            bool PathValid = SpellScript::CheckPathAndFileValidation(arg1, "cpp");
            ui->LW_SettingsClassesScripts->item(ClassIndex)->setIcon(GetValidationIcon(PathValid));

            if (MainWindow* MW = dynamic_cast<MainWindow*>(parent()))
            {
                MW->UpdateGenerationCodeButton(PathValid, ClassIndex);
            }
        }
    }
}

void SettingsWindow::on_PB_FindCharacterSQLFolder_clicked()
{
    QString Path = QFileDialog::getExistingDirectory(this, "Find character SQL folder");

    if (!Path.isEmpty())
    {
        ui->LE_CharacterSQLFolder->setText(Path);
    }
}

void SettingsWindow::on_PB_FindWorldSQLFolder_clicked()
{
    QString Path = QFileDialog::getExistingDirectory(this, "Find world SQL folder");

    if (!Path.isEmpty())
    {
        ui->LE_WorldSQLFolder->setText(Path);
    }
}

void SettingsWindow::on_PB_FindLoginSQLFolder_clicked()
{
    QString Path = QFileDialog::getExistingDirectory(this, "Find login SQL folder");

    if (!Path.isEmpty())
    {
        ui->LE_LoginSQLFolder->setText(Path);
    }
}

void SettingsWindow::on_PB_FindScriptFile_clicked()
{
    QString Path = QFileDialog::getOpenFileName(this, "Find script file", "", "*.cpp");

    if (!Path.isEmpty())
    {
        ui->LE_ClassesScriptsPath->setText(Path);
    }
}

void SettingsWindow::on_LE_WorldSQLFolder_textChanged(const QString &arg1)
{
    DatabaseUpdaterStatics::World.SetFolderForCheck(arg1);
}

void SettingsWindow::on_LE_CharacterSQLFolder_textChanged(const QString &arg1)
{
    DatabaseUpdaterStatics::Character.SetFolderForCheck(arg1);
}

void SettingsWindow::on_LE_LoginSQLFolder_textChanged(const QString &arg1)
{
    DatabaseUpdaterStatics::Login.SetFolderForCheck(arg1);
}
