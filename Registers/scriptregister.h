#ifndef SCRIPTREGISTER_H
#define SCRIPTREGISTER_H

#include <QString>
#include "Classes/ObjectBase.h"

/** Data for register of script. Each register have its filling architecture in script. */
class ScriptRegisterBase : public ObjectBase
{
    friend class SSSpell;
    friend class SSAura;

protected:

    /** The name of register. */
    QString Name;

    /** The name of function before edit. */
    QString DefaultFunctionName;

    /** The parameters of function in string (without brackets). */
    QString FunctionsParameters;

    /** The data type which function is returning. */
    QString FunctionsReturnType;

    /** Full register line in string. This line will be containing into "Register" function. */
    QString InitializationTemplate;

public:
    ScriptRegisterBase() : ObjectBase() {}

    QString const GetName()                   const override { return Name;                   }
    QString const GetDefaultFunctionName()    const          { return DefaultFunctionName;    }
    QString const GetFunctionsParameters()    const          { return FunctionsParameters;    }
    QString const GetFunctionsReturnType()    const          { return FunctionsReturnType;    }
    QString const GetInitializationTemplate() const          { return InitializationTemplate; }

};

/////////////////////////////////////////////////////////
/** Realization the datas for each register of script. */
/////////////////////////////////////////////////////////

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
