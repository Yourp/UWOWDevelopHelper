#include "databasesettings.h"
#include "settingswindow.h"



#define CHECKED(VAR) VAR ? VAR->text() : ""

QLineEdit* DataBaseSettings::HostName = nullptr;
QLineEdit* DataBaseSettings::Port = nullptr;
QLineEdit* DataBaseSettings::UserName = nullptr;
QLineEdit* DataBaseSettings::Password = nullptr;

QString DataBaseSettings::GetHostName()
{
    return CHECKED(HostName);
}

int DataBaseSettings::GetPort()
{
    return Port ? Port->text().toInt(nullptr, 0) : -1;
}

QString DataBaseSettings::GetUserName()
{
    return CHECKED(UserName);
}

QString DataBaseSettings::GetPassword()
{
    return CHECKED(Password);
}


#undef CHECKED


