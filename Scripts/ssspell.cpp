#include "ssspell.h"
#include "Registers/Spell/spellcastfn.h"
#include "Registers/Spell/spelleffectfn.h"
#include "Registers/Spell/spellhitfn.h"


#define REGISTER(Reg) StaticRegisters[int(SpellScriptRegisters::Reg)]

SSSpell::SSSpell() : SpellScript()
{
    StaticRegisters.reserve(int(SpellScriptRegisters::Max));
    StaticRegisters.fill(nullptr, int(SpellScriptRegisters::Max));

    REGISTER(BeforeCast) = new SpellCastFn();
    REGISTER(BeforeCast)->Name = "BeforeCast";
    REGISTER(BeforeCast)->DefaultFunctionName = "HandleBeforeCast";

    REGISTER(OnCast) = new SpellCastFn();
    REGISTER(OnCast)->Name = "OnCast";
    REGISTER(OnCast)->DefaultFunctionName = "HandleOnCast";

    REGISTER(AfterCast) = new SpellCastFn();
    REGISTER(AfterCast)->Name = "AfterCast";
    REGISTER(AfterCast)->DefaultFunctionName = "HandleAfterCast";

    REGISTER(BeforeStartCast) = new SpellCastFn();
    REGISTER(BeforeStartCast)->Name = "BeforeStartCast";
    REGISTER(BeforeStartCast)->DefaultFunctionName = "HandleBeforeStartCast";

    REGISTER(OnFinishCast) = new SpellCastFn();
    REGISTER(OnFinishCast)->Name = "OnFinishCast";
    REGISTER(OnFinishCast)->DefaultFunctionName = "HandleFinishCast";

    REGISTER(OnCheckCast) = new ScriptRegisterBase();
    REGISTER(OnCheckCast)->Name = "OnCheckCast";
    REGISTER(OnCheckCast)->DefaultFunctionName = "CheckCast";
    REGISTER(OnCheckCast)->FunctionsParameters = "";
    REGISTER(OnCheckCast)->FunctionsReturnType = "SpellCastResult";
    REGISTER(OnCheckCast)->InitializationTemplate = "SpellCheckCastFn(@CLASSNAME::@FUNCTIONNAME)";

    REGISTER(AfterCheckCast) = new ScriptRegisterBase();
    REGISTER(AfterCheckCast)->Name = "AfterCheckCast";
    REGISTER(AfterCheckCast)->DefaultFunctionName = "CallAfterCheckCast";
    REGISTER(AfterCheckCast)->FunctionsParameters = "Spell* ThisSpell, uint32& TriggeredCastFlags, SpellCastResult& CastResult";
    REGISTER(AfterCheckCast)->FunctionsReturnType = "void";
    REGISTER(AfterCheckCast)->InitializationTemplate = "SpellCheckCastFn(@CLASSNAME::@FUNCTIONNAME)";

    REGISTER(OnTakePower) = new ScriptRegisterBase();
    REGISTER(OnTakePower)->Name = "OnTakePower";
    REGISTER(OnTakePower)->DefaultFunctionName = "TakePower";
    REGISTER(OnTakePower)->FunctionsParameters = "Powers power, int32 &amount";
    REGISTER(OnTakePower)->FunctionsReturnType = "void";
    REGISTER(OnTakePower)->InitializationTemplate = "TakePowertFn(@CLASSNAME::@FUNCTIONNAME)";

    REGISTER(DoCalcEffMask) = new ScriptRegisterBase();
    REGISTER(DoCalcEffMask)->Name = "DoCalcEffMask";
    REGISTER(DoCalcEffMask)->DefaultFunctionName = "CalcEffectMask";
    REGISTER(DoCalcEffMask)->FunctionsParameters = "uint32& effMask";
    REGISTER(DoCalcEffMask)->FunctionsReturnType = "void";
    REGISTER(DoCalcEffMask)->InitializationTemplate = "CalcEffectMaskFn(@CLASSNAME::@FUNCTIONNAME)";

    REGISTER(OnEffectLaunch) = new SpellEffectFn();
    REGISTER(OnEffectLaunch)->Name = "OnEffectLaunch";
    REGISTER(OnEffectLaunch)->DefaultFunctionName = "EffectLaunch";

    REGISTER(OnEffectLaunchTarget) = new SpellEffectFn();
    REGISTER(OnEffectLaunchTarget)->Name = "OnEffectLaunchTarget";
    REGISTER(OnEffectLaunchTarget)->DefaultFunctionName = "EffectLaunchTarget";

    REGISTER(OnEffectHit) = new SpellEffectFn();
    REGISTER(OnEffectHit)->Name = "OnEffectHit";
    REGISTER(OnEffectHit)->DefaultFunctionName = "EffectHit";

    REGISTER(OnEffectHitTarget) = new SpellEffectFn();
    REGISTER(OnEffectHitTarget)->Name = "OnEffectHitTarget";
    REGISTER(OnEffectHitTarget)->DefaultFunctionName = "EffectHitTarget";

    REGISTER(OnEffectSuccessfulDispel) = new SpellEffectFn();
    REGISTER(OnEffectSuccessfulDispel)->Name = "OnEffectSuccessfulDispel";
    REGISTER(OnEffectSuccessfulDispel)->DefaultFunctionName = "EffectSuccessfulDispel";

    REGISTER(BeforeHit) = new SpellHitFn();
    REGISTER(BeforeHit)->Name = "BeforeHit";
    REGISTER(BeforeHit)->DefaultFunctionName = "HandleBeforeHit";

    REGISTER(OnHit) = new SpellHitFn();
    REGISTER(OnHit)->Name = "OnHit";
    REGISTER(OnHit)->DefaultFunctionName = "HandleOnHit";

    REGISTER(AfterHit) = new SpellHitFn();
    REGISTER(AfterHit)->Name = "AfterHit";
    REGISTER(AfterHit)->DefaultFunctionName = "HandleAfterHit";

    REGISTER(OnObjectAreaTargetSelect) = new ScriptRegisterBase();
    REGISTER(OnObjectAreaTargetSelect)->Name = "OnObjectAreaTargetSelect";
    REGISTER(OnObjectAreaTargetSelect)->DefaultFunctionName = "SelectAreaTargets";
    REGISTER(OnObjectAreaTargetSelect)->FunctionsParameters = "std::list<WorldObject*>& Targets";
    REGISTER(OnObjectAreaTargetSelect)->FunctionsReturnType = "void";
    REGISTER(OnObjectAreaTargetSelect)->InitializationTemplate = "SpellObjectAreaTargetSelectFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, TARGET_NONE)";

    REGISTER(OnObjectJumpTarget) = new ScriptRegisterBase();
    REGISTER(OnObjectJumpTarget)->Name = "OnObjectJumpTarget";
    REGISTER(OnObjectJumpTarget)->DefaultFunctionName = "ObjectJumpTarget";
    REGISTER(OnObjectJumpTarget)->FunctionsParameters = "int32& AddJumpTarget";
    REGISTER(OnObjectJumpTarget)->FunctionsReturnType = "void";
    REGISTER(OnObjectJumpTarget)->InitializationTemplate = "SpellObjectJumpTargetFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, TARGET_NONE)";

    REGISTER(DoCalcChannelDuration) = new ScriptRegisterBase();
    REGISTER(DoCalcChannelDuration)->Name = "DoCalcChannelDuration";
    REGISTER(DoCalcChannelDuration)->DefaultFunctionName = "CalcChannelDuration";
    REGISTER(DoCalcChannelDuration)->FunctionsParameters = "uint32& Duration";
    REGISTER(DoCalcChannelDuration)->FunctionsReturnType = "void";
    REGISTER(DoCalcChannelDuration)->InitializationTemplate = "SpellCalcChannelDurationFn(@CLASSNAME::@FUNCTIONNAME)";

    REGISTER(DoModTriggerFlags) = new ScriptRegisterBase();
    REGISTER(DoModTriggerFlags)->Name = "DoModTriggerFlags";
    REGISTER(DoModTriggerFlags)->DefaultFunctionName = "ModTriggerFlags";
    REGISTER(DoModTriggerFlags)->FunctionsParameters = "uint32& TriggerCastFlags";
    REGISTER(DoModTriggerFlags)->FunctionsReturnType = "void";
    REGISTER(DoModTriggerFlags)->InitializationTemplate = "SpellModTriggerFlagsFn(@CLASSNAME::@FUNCTIONNAME)";

    REGISTER(OnObjectTargetSelect) = new ScriptRegisterBase();
    REGISTER(OnObjectTargetSelect)->Name = "OnObjectTargetSelect";
    REGISTER(OnObjectTargetSelect)->DefaultFunctionName = "SelectTarget";
    REGISTER(OnObjectTargetSelect)->FunctionsParameters = "WorldObject*& target";
    REGISTER(OnObjectTargetSelect)->FunctionsReturnType = "void";
    REGISTER(OnObjectTargetSelect)->InitializationTemplate = "SpellObjectTargetSelectFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, TARGET_UNIT_CASTER)";
}




#undef REGISTER
