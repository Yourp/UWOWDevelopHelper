#ifndef SETTINGSBASE_H
#define SETTINGSBASE_H

#include "ObjectBase.h"
#include <QString>


class SettingBase : public ObjectBase
{
public:
    SettingBase() : ObjectBase() {}
    virtual ~SettingBase() {}
};

class Setting : public SettingBase
{
public:
    Setting() : SettingBase() {}
    virtual ~Setting() {}
};

#endif // SETTINGSBASE_H
