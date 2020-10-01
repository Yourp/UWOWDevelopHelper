#ifndef SETTINGSBASE_H
#define SETTINGSBASE_H


class SettingBase
{
public:
    SettingBase() {}
    virtual ~SettingBase() {}
};

class Setting : public SettingBase
{
public:
    Setting() : SettingBase() {}
    virtual ~Setting() {}
};

#endif // SETTINGSBASE_H
