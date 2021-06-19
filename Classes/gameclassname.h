#ifndef CLASSNAME_H
#define CLASSNAME_H

#include <QString>
#include "ObjectBase.h"

/** Base class of in-game classes. (Warrior, Rogue, etc...) */
class GameClassName : public ObjectBase
{
    /** Path to script (*.cpp) file of game class. */
    QString ScriptsFilePath;

    /** Names of all scripts in file (@see ScriptsFilePath). Separated by spaces. */
    QString ScriptNamesInFile;

public:

    GameClassName() : ObjectBase() {}
    virtual ~GameClassName() {}

    /** Standart prefix name of scripts. Each game class has own. */
    virtual QString const GetPrefix() const = 0;

    QString const& GetScriptsFilePath() const { return ScriptsFilePath; }

    void SetScriptsFilePath(QString Str) { ScriptsFilePath = Str; }

    /** Opening script file and rewrite all scripts to ScriptNamesInFile (@see ScriptsFilePath). */
    void UpdateScriptNames(QString const& Path);

    /** Add new script name to ScriptNamesInFile. */
    void AddScriptName(QString const& Name);

    /** Check if script file has script name. */
    bool HasScriptClass(QString const& ScriptName);

    /** List of game classes. All classes are unique. Consistency is important. */
    static QVector<GameClassName*> const Classes;
};

class Generic : public GameClassName
{
public:
    Generic() : GameClassName() {}

    QString const GetPrefix() const override { return "spell_gen_"; }
    QString const GetName() const override { return "Generic"; }
};

class Mage : public GameClassName
{
public:
    Mage() : GameClassName() {}

    QString const GetPrefix() const override { return "spell_mage_"; }
    QString const GetName() const override { return "Mage"; }
};

class Warrior : public GameClassName
{
public:
    Warrior() : GameClassName() {}

    QString const GetPrefix() const override { return "spell_war_"; }
    QString const GetName() const override { return "Warrior"; }
};

class Warlock : public GameClassName
{
public:
    Warlock() : GameClassName() {}

    QString const GetPrefix() const override { return "spell_warl_"; }
    QString const GetName() const override { return "Warlock"; }
};

class Priest : public GameClassName
{
public:
    Priest() : GameClassName() {}

    QString const GetPrefix() const override { return "spell_pri_"; }
    QString const GetName() const override { return "Priest"; }
};

class Druid : public GameClassName
{
public:
    Druid() : GameClassName() {}

    QString const GetPrefix() const override { return "spell_dru_"; }
    QString const GetName() const override { return "Druid"; }
};

class Rogue : public GameClassName
{
public:
    Rogue() : GameClassName() {}

    QString const GetPrefix() const override { return "spell_rog_"; }
    QString const GetName() const override { return "Rogue"; }
};

class Hunter : public GameClassName
{
public:
    Hunter() : GameClassName() {}

    QString const GetPrefix() const override { return "spell_hun_"; }
    QString const GetName() const override { return "Hunter"; }
};

class Paladin : public GameClassName
{
public:
    Paladin() : GameClassName() {}

    QString const GetPrefix() const override { return "spell_pal_"; }
    QString const GetName() const override { return "Paladin"; }
};

class Shaman : public GameClassName
{
public:
    Shaman() : GameClassName() {}

    QString const GetPrefix() const override { return "spell_sha_"; }
    QString const GetName() const override { return "Shaman"; }
};

class DeathKnight : public GameClassName
{
public:
    DeathKnight() : GameClassName() {}

    QString const GetPrefix() const override { return "spell_dk_"; }
    QString const GetName() const override { return "DeathKnight"; }
};

class Monk : public GameClassName
{
public:
    Monk() : GameClassName() {}

    QString const GetPrefix() const override { return "spell_monk_"; }
    QString const GetName() const override { return "Monk"; }
};

class DemonHunter : public GameClassName
{
public:
    DemonHunter() : GameClassName() {}

    QString const GetPrefix() const override { return "spell_dh_"; }
    QString const GetName() const override { return "DemonHunter"; }
};


#endif // CLASSNAME_H
