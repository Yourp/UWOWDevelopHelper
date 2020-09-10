#include <QString>
#include <QVector>

#ifndef SCRIPT_H
#define SCRIPT_H

enum class SpellFamily : quint8
{
    Null = 0,
    General,
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
    DemonHunter
};

struct ScriptRegister
{
    ScriptRegister(QString Name, int index) : FunctionName(Name), Index(index) {}

    QString FunctionName;
    int Index;
};


class Script
{
public:
    Script();

    virtual ~Script() {}

    virtual QString CreateScript(QString ScriptName, QVector<ScriptRegister> Registers, int ClassIndex) = 0;
};

#endif // SCRIPT_H
