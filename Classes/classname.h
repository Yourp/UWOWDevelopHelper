#ifndef CLASSNAME_H
#define CLASSNAME_H

#include <QString>
#include "ScriptsObject.h"

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


class ClassName : public ScriptsObject
{
public:
    virtual QString const GetPrefix() const = 0;
};

class Generic : public ClassName
{
public:
    QString const GetPrefix() const override { return "spell_gen_"; }
    QString const GetName() const override { return "Generic"; }
};

class Mage : public ClassName
{
public:
    QString const GetPrefix() const override { return "spell_mage_"; }
    QString const GetName() const override { return "Mage"; }
};

class Warrior : public ClassName
{
public:
    QString const GetPrefix() const override { return "spell_war_"; }
    QString const GetName() const override { return "Warrior"; }
};

class Warlock : public ClassName
{
public:
    QString const GetPrefix() const override { return "spell_warl_"; }
    QString const GetName() const override { return "Warlock"; }
};

class Priest : public ClassName
{
public:
    QString const GetPrefix() const override { return "spell_pri_"; }
    QString const GetName() const override { return "Priest"; }
};

class Druid : public ClassName
{
public:
    QString const GetPrefix() const override { return "spell_dru_"; }
    QString const GetName() const override { return "Druid"; }
};

class Rogue : public ClassName
{
public:
    QString const GetPrefix() const override { return "spell_rog_"; }
    QString const GetName() const override { return "Rogue"; }
};

class Hunter : public ClassName
{
public:
    QString const GetPrefix() const override { return "spell_hun_"; }
    QString const GetName() const override { return "Hunter"; }
};

class Paladin : public ClassName
{
public:
    QString const GetPrefix() const override { return "spell_pal_"; }
    QString const GetName() const override { return "Paladin"; }
};

class Shaman : public ClassName
{
public:
    QString const GetPrefix() const override { return "spell_sha_"; }
    QString const GetName() const override { return "Shaman"; }
};

class DeathKnight : public ClassName
{
public:
    QString const GetPrefix() const override { return "spell_dk_"; }
    QString const GetName() const override { return "DeathKnight"; }
};

class Monk : public ClassName
{
public:
    QString const GetPrefix() const override { return "spell_monk_"; }
    QString const GetName() const override { return "Monk"; }
};

class DemonHunter : public ClassName
{
public:
    QString const GetPrefix() const override { return "spell_dh_"; }
    QString const GetName() const override { return "DemonHunter"; }
};







#endif // CLASSNAME_H
