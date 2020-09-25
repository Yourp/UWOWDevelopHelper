#include "ssaura.h"

#define REGISTER(Reg) StaticRegisters[int(AuraScriptRegisters::Reg)]

SSAura::SSAura() : SpellScript()
{
    StaticRegisters.reserve(int(AuraScriptRegisters::Max));
    StaticRegisters.fill(nullptr, int(AuraScriptRegisters::Max));

    REGISTER(DoCheckAreaTarget) = new ScriptRegisterBase();
    REGISTER(DoCheckAreaTarget)->Name = "DoCheckAreaTarget";
    REGISTER(DoCheckAreaTarget)->DefaultFunctionName = "CheckAreaTarget";
    REGISTER(DoCheckAreaTarget)->FunctionsParameters = "Unit* Target";
    REGISTER(DoCheckAreaTarget)->FunctionsReturnType = "bool";
    REGISTER(DoCheckAreaTarget)->InitializationTemplate = "AuraCheckAreaTargetFn(@CLASSNAME::@FUNCTIONNAME)";

    REGISTER(DoCheckTargetsList) = new ScriptRegisterBase();
    REGISTER(DoCheckTargetsList)->Name = "DoCheckTargetsList";
    REGISTER(DoCheckTargetsList)->DefaultFunctionName = "CheckTargets";
    REGISTER(DoCheckTargetsList)->FunctionsParameters = "std::list<Unit*>& UnitTargets";
    REGISTER(DoCheckTargetsList)->FunctionsReturnType = "void";
    REGISTER(DoCheckTargetsList)->InitializationTemplate = "AuraCheckTargetsListFn(@CLASSNAME::@FUNCTIONNAME)";

    REGISTER(OnDispel) = new AuraDispelFn();
    REGISTER(OnDispel)->Name = "OnDispel";
    REGISTER(OnDispel)->DefaultFunctionName = "HandleOnDispel";

    REGISTER(AfterDispel) = new AuraDispelFn();
    REGISTER(AfterDispel)->Name = "AfterDispel";
    REGISTER(AfterDispel)->DefaultFunctionName = "HandleAfterDispel";

    REGISTER(OnEffectApply) = new AuraEffectApplyFn();
    REGISTER(OnEffectApply)->Name = "OnEffectApply";
    REGISTER(OnEffectApply)->DefaultFunctionName = "HandleOnApply";

    REGISTER(AfterEffectApply) = new AuraEffectApplyFn();
    REGISTER(AfterEffectApply)->Name = "AfterEffectApply";
    REGISTER(AfterEffectApply)->DefaultFunctionName = "HandleAfterApply";

    REGISTER(OnEffectRemove) = new AuraEffectRemoveFn();
    REGISTER(OnEffectRemove)->Name = "OnEffectRemove";
    REGISTER(OnEffectRemove)->DefaultFunctionName = "HandleOnRemove";

    REGISTER(AfterEffectRemove) = new AuraEffectRemoveFn();
    REGISTER(AfterEffectRemove)->Name = "AfterEffectRemove";
    REGISTER(AfterEffectRemove)->DefaultFunctionName = "HandleAfterRemove";

    REGISTER(OnEffectPeriodic) = new ScriptRegisterBase();
    REGISTER(OnEffectPeriodic)->Name = "OnEffectPeriodic";
    REGISTER(OnEffectPeriodic)->DefaultFunctionName = "OnPeriodic";
    REGISTER(OnEffectPeriodic)->FunctionsParameters = "AuraEffect const* AurEff";
    REGISTER(OnEffectPeriodic)->FunctionsReturnType = "void";
    REGISTER(OnEffectPeriodic)->InitializationTemplate = "AuraEffectPeriodicFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, SPELL_AURA_PERIODIC_TRIGGER_SPELL)";

    REGISTER(OnAuraUpdate) = new ScriptRegisterBase();
    REGISTER(OnAuraUpdate)->Name = "OnAuraUpdate";
    REGISTER(OnAuraUpdate)->DefaultFunctionName = "AuraUpdate";
    REGISTER(OnAuraUpdate)->FunctionsParameters = "uint32 Diff";
    REGISTER(OnAuraUpdate)->FunctionsReturnType = "void";
    REGISTER(OnAuraUpdate)->InitializationTemplate = "AuraUpdateFn(@CLASSNAME::@FUNCTIONNAME)";

    REGISTER(OnEffectUpdate) = new ScriptRegisterBase();
    REGISTER(OnEffectUpdate)->Name = "OnEffectUpdate";
    REGISTER(OnEffectUpdate)->DefaultFunctionName = "AuraEffectUpdate";
    REGISTER(OnEffectUpdate)->FunctionsParameters = "uint32 Diff, AuraEffect* AurEff";
    REGISTER(OnEffectUpdate)->FunctionsReturnType = "void";
    REGISTER(OnEffectUpdate)->InitializationTemplate = "AuraEffectUpdateFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, SPELL_AURA_DUMMY)";

    REGISTER(OnEffectUpdatePeriodic) = new ScriptRegisterBase();
    REGISTER(OnEffectUpdatePeriodic)->Name = "OnEffectUpdatePeriodic";
    REGISTER(OnEffectUpdatePeriodic)->DefaultFunctionName = "HandleEffectPeriodicUpdate";
    REGISTER(OnEffectUpdatePeriodic)->FunctionsParameters = "AuraEffect* AurEff";
    REGISTER(OnEffectUpdatePeriodic)->FunctionsReturnType = "void";
    REGISTER(OnEffectUpdatePeriodic)->InitializationTemplate = "AuraEffectUpdatePeriodicFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, SPELL_AURA_PERIODIC_DAMAGE)";

    REGISTER(DoEffectBeforeCalcAmount) = new AuraEffectCalcAmountFn();
    REGISTER(DoEffectBeforeCalcAmount)->Name = "DoEffectBeforeCalcAmount";
    REGISTER(DoEffectBeforeCalcAmount)->DefaultFunctionName = "BeforeCalcAmount";

    REGISTER(DoEffectCalcAmount) = new AuraEffectCalcAmountFn();
    REGISTER(DoEffectCalcAmount)->Name = "DoEffectCalcAmount";
    REGISTER(DoEffectCalcAmount)->DefaultFunctionName = "OnCalcAmount";

    REGISTER(DoEffectAfterCalcAmount) = new AuraEffectCalcAmountFn();
    REGISTER(DoEffectAfterCalcAmount)->Name = "DoEffectAfterCalcAmount";
    REGISTER(DoEffectAfterCalcAmount)->DefaultFunctionName = "AfterCalcAmoun";

    REGISTER(DoCalcMaxDuration) = new ScriptRegisterBase();
    REGISTER(DoCalcMaxDuration)->Name = "DoCalcMaxDuration";
    REGISTER(DoCalcMaxDuration)->DefaultFunctionName = "CalculateMaxDuration";
    REGISTER(DoCalcMaxDuration)->FunctionsParameters = "int32& Duration";
    REGISTER(DoCalcMaxDuration)->FunctionsReturnType = "void";
    REGISTER(DoCalcMaxDuration)->InitializationTemplate = "AuraCalcMaxDurationFn(@CLASSNAME::@FUNCTIONNAME)";

    REGISTER(DoEffectChangeTickDamage) = new ScriptRegisterBase();
    REGISTER(DoEffectChangeTickDamage)->Name = "DoEffectChangeTickDamage";
    REGISTER(DoEffectChangeTickDamage)->DefaultFunctionName = "HandleTick";
    REGISTER(DoEffectChangeTickDamage)->FunctionsParameters = "AuraEffect const* AurEff, float& Amount, Unit* Target";
    REGISTER(DoEffectChangeTickDamage)->FunctionsReturnType = "void";
    REGISTER(DoEffectChangeTickDamage)->InitializationTemplate = "AuraEffectChangeTickDamageFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, SPELL_AURA_PERIODIC_DAMAGE)";

    REGISTER(DoEffectCalcPeriodic) = new ScriptRegisterBase();
    REGISTER(DoEffectCalcPeriodic)->Name = "DoEffectCalcPeriodic";
    REGISTER(DoEffectCalcPeriodic)->DefaultFunctionName = "OnCalcPeriodic";
    REGISTER(DoEffectCalcPeriodic)->FunctionsParameters = "AuraEffect const* AurEff, bool& IsPeriodic, int32& Amplitude";
    REGISTER(DoEffectCalcPeriodic)->FunctionsReturnType = "void";
    REGISTER(DoEffectCalcPeriodic)->InitializationTemplate = "AuraEffectCalcPeriodicFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, SPELL_AURA_PERIODIC_TRIGGER_SPELL)";

    REGISTER(DoEffectCalcSpellMod) = new ScriptRegisterBase();
    REGISTER(DoEffectCalcSpellMod)->Name = "DoEffectCalcSpellMod";
    REGISTER(DoEffectCalcSpellMod)->DefaultFunctionName = "OnCalcSpellMod";
    REGISTER(DoEffectCalcSpellMod)->FunctionsParameters = "AuraEffect const* AurEff, SpellModifier*& SpellMod";
    REGISTER(DoEffectCalcSpellMod)->FunctionsReturnType = "void";
    REGISTER(DoEffectCalcSpellMod)->InitializationTemplate = "AuraEffectCalcSpellModFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, SPELL_AURA_PERIODIC_TRIGGER_SPELL)";

    REGISTER(OnEffectAbsorb) = new AuraEffectAbsorbFn();
    REGISTER(OnEffectAbsorb)->Name = "OnEffectAbsorb";
    REGISTER(OnEffectAbsorb)->DefaultFunctionName = "OnAbsorb";

    REGISTER(AfterEffectAbsorb) = new AuraEffectAbsorbFn();
    REGISTER(AfterEffectAbsorb)->Name = "AfterEffectAbsorb";
    REGISTER(AfterEffectAbsorb)->DefaultFunctionName = "AfterAbsorb";

    REGISTER(OnEffectSplitDamage) = new AuraEffectAbsorbFn();
    REGISTER(OnEffectSplitDamage)->Name = "OnEffectSplitDamage";
    REGISTER(OnEffectSplitDamage)->DefaultFunctionName = "OnSplitDamage";

    REGISTER(OnEffectProc) = new ScriptRegisterBase();
    REGISTER(OnEffectProc)->Name = "OnEffectProc";
    REGISTER(OnEffectProc)->DefaultFunctionName = "OnProc";
    REGISTER(OnEffectProc)->FunctionsParameters = "AuraEffect const* AurEff, ProcEventInfo& EventInfo";
    REGISTER(OnEffectProc)->FunctionsReturnType = "void";
    REGISTER(OnEffectProc)->InitializationTemplate = "AuraEffectProcFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, SPELL_AURA_DUMMY)";
}





#undef REGISTER
