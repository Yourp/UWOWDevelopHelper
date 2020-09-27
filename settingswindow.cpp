#include "settingswindow.h"
#include "Scripts/spellscript.h"
#include "ui_settingswindow.h"
#include "mainwindow.h"
#include "Classes/classname.h"
#include "DataBase/databaseconnector.h"
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

    ui->LW_SettingsCategories->addItem(CreateSettingWidgetItem("Database Connection"));
    ui->LW_SettingsCategories->addItem(CreateSettingWidgetItem("Scripts"));
    ui->LW_SettingsCategories->addItem(CreateSettingWidgetItem("Saves"));

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

    if (DataBaseConnector::Connect(DataBaseConnector::WorldConnector, ui->LE_WorldDatabase->text()))
    {
        EditButtonsWhenConnected();
    }
    else
    {
        EditButtonsWhenDisconnected();
    }

    DataBaseConnector::Connect(DataBaseConnector::CharacterConnector, ui->LE_CharacterDatabase->text());
    DataBaseConnector::Connect(DataBaseConnector::LoginConnector, ui->LE_LoginDatabase->text());

    UpdateDatabasesLEIcons();
}

SettingsWindow::~SettingsWindow()
{
    SaveToConfig();
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
    ui->LE_WorldSQLFolder->setText(Conf.value("WorldSQLFolder").toString());
    ui->LE_SQLFileName->setText(Conf.value("SQLFileName", "spell_script_names").toString());
    Conf.endGroup();

    Conf.beginGroup("SpellScript");
    for (auto& Class : ClassName::Classes)
    {
        Class->SetScriptsFilePath(Conf.value("Classes." + Class->GetName()).toString());
    }
    Conf.endGroup();
}

void SettingsWindow::SaveToConfig()
{
    QSettings Conf("Config.ini", QSettings::IniFormat);

    Conf.beginGroup("Database");
    Conf.setValue("HostName", ui->LE_HostName->text());
    Conf.setValue("Port", ui->LE_Port->text());
    Conf.setValue("UserName", ui->LE_UserName->text());
    Conf.setValue("Password", ui->LE_Password->text());
    Conf.setValue("WorldDatabase", ui->LE_WorldDatabase->text());
    Conf.setValue("CharacterDatabase", ui->LE_CharacterDatabase->text());
    Conf.setValue("LoginDatabase", ui->LE_LoginDatabase->text());
    Conf.endGroup();

    Conf.beginGroup("SQL");
    Conf.setValue("WorldSQLFolder", ui->LE_WorldSQLFolder->text());
    Conf.setValue("SQLFileName", ui->LE_SQLFileName->text());
    Conf.endGroup();

    Conf.beginGroup("SpellScript");
    for (auto& Class : ClassName::Classes)
    {
        Conf.setValue("Classes." + Class->GetName(), Class->GetScriptsFilePath());
    }
    Conf.endGroup();
}

void SettingsWindow::UpdateDatabasesLEIcons()
{
    ui->LE_WorldDatabase->SetIcon(GetValidationIcon(DataBaseConnector::WorldConnector.isOpen()));
    ui->LE_CharacterDatabase->SetIcon(GetValidationIcon(DataBaseConnector::CharacterConnector.isOpen()));
    ui->LE_LoginDatabase->SetIcon(GetValidationIcon(DataBaseConnector::LoginConnector.isOpen()));
}


void SettingsWindow::on_PB_Disconnect_clicked()
{
    DataBaseConnector::Disconnect(DataBaseConnector::WorldConnector);
    DataBaseConnector::Disconnect(DataBaseConnector::CharacterConnector);
    DataBaseConnector::Disconnect(DataBaseConnector::LoginConnector);
    EditButtonsWhenDisconnected();
    UpdateDatabasesLEIcons();
}

void SettingsWindow::on_PB_Connect_clicked()
{
    DataBaseConnector::Connect(DataBaseConnector::WorldConnector, ui->LE_WorldDatabase->text());
    DataBaseConnector::Connect(DataBaseConnector::CharacterConnector, ui->LE_CharacterDatabase->text());
    DataBaseConnector::Connect(DataBaseConnector::LoginConnector, ui->LE_LoginDatabase->text());

    if (DataBaseConnector::WorldConnector.isOpen() || DataBaseConnector::CharacterConnector.isOpen() || DataBaseConnector::LoginConnector.isOpen())
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

void SettingsWindow::on_PB_FindScriptFile_released()
{
    QString Path = QFileDialog::getOpenFileName(this, "Find script file", "", "*.cpp");

    if (!Path.isEmpty())
    {
        ui->LE_ClassesScriptsPath->setText(Path);
    }
}

void SettingsWindow::on_PB_FindWorldSQLFolder_released()
{
    QString Path = QFileDialog::getExistingDirectory(this, "Find world SQL folder");

    if (!Path.isEmpty())
    {
        ui->LE_WorldSQLFolder->setText(Path);
    }
}
