#ifndef CLASSNAME_H
#define CLASSNAME_H

#include <QString>
#include "ObjectBase.h"


class ClassName : public ObjectBase
{
    QString ScriptsFilePath;
    QString ScriptNamesInFile;

public:


    ClassName() : ObjectBase() {}
    virtual ~ClassName() {}

    virtual QString const GetPrefix() const = 0;

    QString const& GetScriptsFilePath() const { return ScriptsFilePath; }
    void SetScriptsFilePath(QString Str) { ScriptsFilePath = Str; }

    void UpdateScriptNames(QString const& Path);
    void AddScriptName(QString const& Name);
    bool HasScriptClass(QString const& ScriptName);

    static QVector<ClassName*> const Classes;
};

class Generic : public ClassName
{
public:
    Generic() : ClassName() {}

    QString const GetPrefix() const override { return "spell_gen_"; }
    QString const GetName() const override { return "Generic"; }
};

class Mage : public ClassName
{
public:
    Mage() : ClassName() {}

    QString const GetPrefix() const override { return "spell_mage_"; }
    QString const GetName() const override { return "Mage"; }
};

class Warrior : public ClassName
{
public:
    Warrior() : ClassName() {}

    QString const GetPrefix() const override { return "spell_war_"; }
    QString const GetName() const override { return "Warrior"; }
};

class Warlock : public ClassName
{
public:
    Warlock() : ClassName() {}

    QString const GetPrefix() const override { return "spell_warl_"; }
    QString const GetName() const override { return "Warlock"; }
};

class Priest : public ClassName
{
public:
    Priest() : ClassName() {}

    QString const GetPrefix() const override { return "spell_pri_"; }
    QString const GetName() const override { return "Priest"; }
};

class Druid : public ClassName
{
public:
    Druid() : ClassName() {}

    QString const GetPrefix() const override { return "spell_dru_"; }
    QString const GetName() const override { return "Druid"; }
};

class Rogue : public ClassName
{
public:
    Rogue() : ClassName() {}

    QString const GetPrefix() const override { return "spell_rog_"; }
    QString const GetName() const override { return "Rogue"; }
};

class Hunter : public ClassName
{
public:
    Hunter() : ClassName() {}

    QString const GetPrefix() const override { return "spell_hun_"; }
    QString const GetName() const override { return "Hunter"; }
};

class Paladin : public ClassName
{
public:
    Paladin() : ClassName() {}

    QString const GetPrefix() const override { return "spell_pal_"; }
    QString const GetName() const override { return "Paladin"; }
};

class Shaman : public ClassName
{
public:
    Shaman() : ClassName() {}

    QString const GetPrefix() const override { return "spell_sha_"; }
    QString const GetName() const override { return "Shaman"; }
};

class DeathKnight : public ClassName
{
public:
    DeathKnight() : ClassName() {}

    QString const GetPrefix() const override { return "spell_dk_"; }
    QString const GetName() const override { return "DeathKnight"; }
};

class Monk : public ClassName
{
public:
    Monk() : ClassName() {}

    QString const GetPrefix() const override { return "spell_monk_"; }
    QString const GetName() const override { return "Monk"; }
};

class DemonHunter : public ClassName
{
public:
    DemonHunter() : ClassName() {}

    QString const GetPrefix() const override { return "spell_dh_"; }
    QString const GetName() const override { return "DemonHunter"; }
};







#endif // CLASSNAME_H
