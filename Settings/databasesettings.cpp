#include "databasesettings.h"
#include "settingswindow.h"
#include "ui_settingswindow.h"
#include <QLineEdit>

#define CHECKED(VAR) VAR ? VAR->text() : ""


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
    return CHECKED(HostName);
}

int DataBaseSettings::GetPort() const
{
    return Port ? Port->text().toInt(nullptr, 0) : -1;
}

QString DataBaseSettings::GetUserName() const
{
    return CHECKED(UserName);
}

QString DataBaseSettings::GetPassword() const
{
    return CHECKED(Password);
}

QString DataBaseSettings::GetDatabaseName() const
{
    return CHECKED(DatabaseName);
}

#undef CHECKED


