#ifndef SCRIPTREGISTER_H
#define SCRIPTREGISTER_H

#include <QString>
#include "Classes/ObjectBase.h"


class ScriptRegisterBase : public ObjectBase
{
    friend class SSSpell;
    friend class SSAura;

protected:

    QString Name;
    QString DefaultFunctionName;
    QString FunctionsParameters;
    QString FunctionsReturnType;
    QString InitializationTemplate;

public:
    ScriptRegisterBase() : ObjectBase() {}

    QString const GetName() const override { return Name; }
    QString const GetDefaultFunctionName() const { return DefaultFunctionName; }
    QString const GetFunctionsParameters() const { return FunctionsParameters; }
    QString const GetFunctionsReturnType() const { return FunctionsReturnType; }
    QString const GetInitializationTemplate() const { return InitializationTemplate; }

};

class SelectedScriptRegister : public ScriptRegisterBase
{

    QString FunctionName;

public:
    SelectedScriptRegister(ScriptRegisterBase const& Base, QString const& FuncName);

    QString const GetFunctionName() const { return FunctionName; }

};

class AuraDispelFn : public ScriptRegisterBase
{
    public: AuraDispelFn();
};

class AuraEffectApplyRemove : public ScriptRegisterBase
{
    public: AuraEffectApplyRemove();
};

class AuraEffectApplyFn : public AuraEffectApplyRemove
{
    public: AuraEffectApplyFn();
};

class AuraEffectRemoveFn : public AuraEffectApplyRemove
{
    public: AuraEffectRemoveFn();
};

class AuraEffectCalcAmountFn : public ScriptRegisterBase
{
    public: AuraEffectCalcAmountFn();
};

class AuraEffectAbsorbFn : public ScriptRegisterBase
{
    public: AuraEffectAbsorbFn();
};

class AuraApplyAndRemoveFn : public ScriptRegisterBase
{
    public: AuraApplyAndRemoveFn();
};





#endif // SCRIPTREGISTER_H
