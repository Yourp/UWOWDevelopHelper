#include <QString>
#include "ScriptsObject.h"

//#include "scriptregister.h"

#ifndef SCRIPT_H
#define SCRIPT_H



enum class ScriptType : quint8
{
    SpellScript = 0,
    Max
};


class Script : public ScriptsObject
{
public:
    Script();

    virtual ~Script() {}

    virtual class ScriptRegisterBase const* GetRegisterByIndex(int Index) const = 0;


    //virtual QString CreateScript(QString ScriptName, QVector<ScriptRegister> Registers, int ClassIndex) = 0;

protected:


};

#endif // SCRIPT_H
