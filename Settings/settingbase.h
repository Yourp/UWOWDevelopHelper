#ifndef SETTINGSBASE_H
#define SETTINGSBASE_H

#include "ObjectBase.h"
#include <QString>


class SettingBase : public ObjectBase
{
    QString Name;

public:
    SettingBase(QString const& NewName);
    virtual ~SettingBase() {}

    virtual const QString GetName() const override { return Name; }
};

class Setting : public SettingBase
{
public:
    Setting(const QString &NewName) : SettingBase(NewName) {}
    virtual ~Setting() {}
};

#endif // SETTINGSBASE_H
