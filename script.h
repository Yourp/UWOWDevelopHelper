#include <QString>
#include <QVector>
//#include "scriptregister.h"

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


class Script
{
public:
    Script();

    virtual ~Script() {}

    virtual class ScriptRegister const* GetRegisterByIndex(int Index) const = 0;

    //virtual QString CreateScript(QString ScriptName, QVector<ScriptRegister> Registers, int ClassIndex) = 0;

protected:


};

#endif // SCRIPT_H
