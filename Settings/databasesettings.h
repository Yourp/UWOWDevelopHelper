#ifndef DATABASESETTINGS_H
#define DATABASESETTINGS_H

#include "Settings/settingbase.h"

class QLineEdit;


class DataBaseSettings : public Setting
{
    friend class SettingsWindow;

    DataBaseSettings() {}

    static QLineEdit* HostName;
    static QLineEdit* Port;
    static QLineEdit* UserName;
    static QLineEdit* Password;

public:

    static QString GetHostName();
    static int GetPort();
    static QString GetUserName();
    static QString GetPassword();
};

#endif // DATABASESETTINGS_H
