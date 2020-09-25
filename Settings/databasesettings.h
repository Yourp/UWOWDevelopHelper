#ifndef DATABASESETTINGS_H
#define DATABASESETTINGS_H

#include "Settings/settingbase.h"

class QLineEdit;
class SettingsWindow;


class DataBaseSettings : public Setting
{
    QLineEdit* HostName;
    QLineEdit* Port;
    QLineEdit* UserName;
    QLineEdit* Password;
    QLineEdit* DatabaseName;

public:
    DataBaseSettings() {}

    QString GetHostName() const;
    int GetPort() const;
    QString GetUserName() const;
    QString GetPassword() const;
    QString GetDatabaseName() const;

    void BindLineEdits(SettingsWindow* SW);

};

#endif // DATABASESETTINGS_H
