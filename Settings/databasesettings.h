#ifndef DATABASESETTINGS_H
#define DATABASESETTINGS_H

#include "Settings/settingbase.h"

class QLineEdit;


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

    void BindHostName(QLineEdit* LE) { HostName = LE; }
    void BindPort(QLineEdit* LE) { Port = LE; }
    void BindUserName(QLineEdit* LE) { UserName = LE; }
    void BindPassword(QLineEdit* LE) { Password = LE; }
    void BindDatabaseName(QLineEdit* LE) { DatabaseName = LE; }

};

#endif // DATABASESETTINGS_H
