#ifndef SCRIPTREGISTER_H
#define SCRIPTREGISTER_H

#include <QString>


class ScriptRegisterBase
{
    friend class SpellScript;

    QString Name;
    QString DefaultFunctionName;
    QString FunctionsParameters;
    QString FunctionsReturnType;
    QString InitializationTemplate;

protected:
    ScriptRegisterBase() {}


public:

    QString const GetName() const { return Name; }
    QString const GetDefaultFunctionName() const { return DefaultFunctionName; }
    QString const GetFunctionsParameters() const { return FunctionsParameters; }
    QString const GetFunctionsReturnType() const { return FunctionsReturnType; }
    QString const GetInitializationTemplate() const { return InitializationTemplate; }

};

class ScriptRegister : public ScriptRegisterBase
{


public:
    ScriptRegister() : ScriptRegisterBase() {}

    QString FunctionName;
};

#endif // SCRIPTREGISTER_H
