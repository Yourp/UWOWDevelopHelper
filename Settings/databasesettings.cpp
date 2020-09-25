#include "databasesettings.h"
#include "settingswindow.h"
#include "ui_settingswindow.h"
#include <QLineEdit>

DataBaseSettings::DataBaseSettings()
{
    HostName = nullptr;
    Port = nullptr;
    UserName = nullptr;
    Password = nullptr;
    DatabaseName = nullptr;
}

void DataBaseSettings::BindLineEdits(SettingsWindow *SW)
{
    HostName = SW->GetUI()->LE_HostName;
    Port = SW->GetUI()->LE_Port;
    UserName = SW->GetUI()->LE_UserName;
    Password = SW->GetUI()->LE_Password;
    DatabaseName = SW->GetUI()->LE_DatabaseName;
}

QString DataBaseSettings::GetHostName() const
{
    return HostName->text();
}

int DataBaseSettings::GetPort() const
{
    return Port->text().toInt(nullptr, 0);
}

QString DataBaseSettings::GetUserName() const
{
    return UserName->text();
}

QString DataBaseSettings::GetPassword() const
{
    return Password->text();
}

QString DataBaseSettings::GetDatabaseName() const
{
    return DatabaseName->text();
}




