#ifndef CLASSNAME_H
#define CLASSNAME_H

#include <QString>

enum class ClassNameType : quint8
{
    Generic = 0,
    Mage,
    Warrior,
    Warlock,
    Priest,
    Druid,
    Rogue,
    Hunter,
    Paladin,
    Shaman,
    DeathKnight,
    Monk,
    DemonHunter,
    Max
};


class ClassName
{
public:
    virtual QString const GetPrefix() const = 0;
};

class Generic : public ClassName
{
public:
    virtual QString const GetPrefix() const override { return "spell_gen_"; };
};

class Mage : public ClassName
{
public:
    virtual QString const GetPrefix() const override { return "spell_mage_"; };
};

class Warrior : public ClassName
{
public:
    virtual QString const GetPrefix() const override { return "spell_war_"; };
};

class Warlock : public ClassName
{
public:
    virtual QString const GetPrefix() const override { return "spell_warl_"; };
};

class Priest : public ClassName
{
public:
    virtual QString const GetPrefix() const override { return "spell_pri_"; };
};

class Druid : public ClassName
{
public:
    virtual QString const GetPrefix() const override { return "spell_dru_"; };
};

class Rogue : public ClassName
{
public:
    virtual QString const GetPrefix() const override { return "spell_rog_"; };
};

class Hunter : public ClassName
{
public:
    virtual QString const GetPrefix() const override { return "spell_hun_"; };
};

class Paladin : public ClassName
{
public:
    virtual QString const GetPrefix() const override { return "spell_pal_"; };
};

class Shaman : public ClassName
{
public:
    virtual QString const GetPrefix() const override { return "spell_sha_"; };
};

class DeathKnight : public ClassName
{
public:
    virtual QString const GetPrefix() const override { return "spell_dk_"; };
};

class Monk : public ClassName
{
public:
    virtual QString const GetPrefix() const override { return "spell_monk_"; };
};

class DemonHunter : public ClassName
{
public:
    virtual QString const GetPrefix() const override { return "spell_dh_"; };
};














#endif // CLASSNAME_H
