#include "scriptregister.h"




SelectedScriptRegister::SelectedScriptRegister(const ScriptRegisterBase& Base, QString const& FuncName)  : ScriptRegisterBase(), FunctionName(FuncName)
{
    Name = Base.GetName();
    DefaultFunctionName = Base.GetDefaultFunctionName();
    FunctionsParameters = Base.GetFunctionsParameters();
    FunctionsReturnType = Base.GetFunctionsReturnType();
    InitializationTemplate = Base.GetInitializationTemplate();
}


AuraDispelFn::AuraDispelFn() : ScriptRegisterBase()
{
    FunctionsParameters = "DispelInfo* Info";
    FunctionsReturnType = "void";
    InitializationTemplate = "AuraDispelFn(@CLASSNAME::@FUNCTIONNAME)";
}

AuraEffectApplyRemove::AuraEffectApplyRemove() : ScriptRegisterBase()
{
    FunctionsParameters = "AuraEffect const* AuraEff, AuraEffectHandleModes Mode";
    FunctionsReturnType = "void";
}

AuraEffectApplyFn::AuraEffectApplyFn() : AuraEffectApplyRemove()
{
    InitializationTemplate = "AuraEffectApplyFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, SPELL_AURA_DUMMY, AURA_EFFECT_HANDLE_REAL)";
}

AuraEffectRemoveFn::AuraEffectRemoveFn()
{
    InitializationTemplate = "AuraEffectRemoveFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, SPELL_AURA_DUMMY, AURA_EFFECT_HANDLE_REAL)";
}

AuraEffectCalcAmountFn::AuraEffectCalcAmountFn()
{
    FunctionsParameters = "AuraEffect const* AuraEff, float& Amount, bool& CanBeRecalculated";
    FunctionsReturnType = "void";
    InitializationTemplate = "AuraEffectCalcAmountFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, SPELL_AURA_SCHOOL_ABSORB)";
}

AuraEffectAbsorbFn::AuraEffectAbsorbFn()
{
    FunctionsParameters = "AuraEffect* AuraEff, DamageInfo& DamageInfo, float& AbsorbAmount";
    FunctionsReturnType = "void";
    InitializationTemplate = "AuraEffectAbsorbFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, SPELL_AURA_SCHOOL_ABSORB)";
}
