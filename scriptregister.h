#ifndef SCRIPTREGISTER_H
#define SCRIPTREGISTER_H

#include <QString>
#include <ScriptsObject.h>


class ScriptRegisterBase : public ScriptsObject
{
    friend class SSSpell;


protected:

    QString Name;
    QString DefaultFunctionName;
    QString FunctionsParameters;
    QString FunctionsReturnType;
    QString InitializationTemplate;

public:
    ScriptRegisterBase() : ScriptsObject() {}

    QString const GetName() const override { return Name; }
    QString const GetDefaultFunctionName() const { return DefaultFunctionName; }
    QString const GetFunctionsParameters() const { return FunctionsParameters; }
    QString const GetFunctionsReturnType() const { return FunctionsReturnType; }
    QString const GetInitializationTemplate() const { return InitializationTemplate; }

};

class ScriptRegister : public ScriptRegisterBase
{

    QString FunctionName;

public:
    ScriptRegister(ScriptRegisterBase const& Base, QString const& FuncName);

    //void SetFunctionName(QString const& Name) { FunctionName = Name; }
    QString const GetFunctionName() const { return FunctionName; }

};

#endif // SCRIPTREGISTER_H
