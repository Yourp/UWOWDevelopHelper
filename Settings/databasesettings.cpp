#include "databasesettings.h"
#include "settingswindow.h"
#include "ui_settingswindow.h"
#include <QLineEdit>

#define CHECKED(VAR) VAR ? VAR->text() : ""



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


