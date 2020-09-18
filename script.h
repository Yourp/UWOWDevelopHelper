#include <QVector>
#include "ScriptsObject.h"
#include "scriptregister.h"


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
    Script() : ScriptsObject() {}

    virtual ~Script() {}

    ScriptRegisterBase const* GetRegisterByIndex(int Index) const { return Registers.at(Index); }
    QVector<ScriptRegisterBase*> const& GetRegisters() const { return Registers; }


    virtual QString CreateScript(QString ScriptName, QVector<ScriptRegister> const& Registers) = 0;

    QString const FunctionFindMarker = "@FUNCTIONNAME";
    QString const ClassFindMarker = "@CLASSNAME";

protected:

    QVector<ScriptRegisterBase*> Registers;

};

#endif // SCRIPT_H
