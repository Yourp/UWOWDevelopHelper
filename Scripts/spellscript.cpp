#include "spellscript.h"
#include "textstatics.h"
#include "Registers/Spell/spellcastfn.h"
#include "Registers/Spell/spelleffectfn.h"
#include "Registers/Spell/spellhitfn.h"


#define REGISTER(Reg) Registers[int(SpellScriptRegisters::Reg)]

SpellScript::SpellScript() : Script()
{
    Registers.reserve(int(SpellScriptRegisters::Max));
    Registers.fill(nullptr, int(SpellScriptRegisters::Max));

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
    REGISTER(OnFinishCast)->DefaultFunctionName = "HandleOnFinishCast";

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
    REGISTER(DoCalcEffMask)->DefaultFunctionName = "CalculateEffectMask";
    REGISTER(DoCalcEffMask)->FunctionsParameters = "";
    REGISTER(DoCalcEffMask)->FunctionsReturnType = "void";
    REGISTER(DoCalcEffMask)->InitializationTemplate = "CalcEffectMaskFn(@CLASSNAME::@FUNCTIONNAME)";

    REGISTER(OnEffectLaunch) = new SpellEffectFn();
    REGISTER(OnEffectLaunch)->Name = "OnEffectLaunch";
    REGISTER(OnEffectLaunch)->DefaultFunctionName = "HandleOnEffectLaunch";

    REGISTER(OnEffectLaunchTarget) = new SpellEffectFn();
    REGISTER(OnEffectLaunchTarget)->Name = "OnEffectLaunchTarget";
    REGISTER(OnEffectLaunchTarget)->DefaultFunctionName = "HandleOnEffectLaunchTarget";

    REGISTER(OnEffectHit) = new SpellEffectFn();
    REGISTER(OnEffectHit)->Name = "OnEffectHit";
    REGISTER(OnEffectHit)->DefaultFunctionName = "HandleOnEffectHit";

    REGISTER(OnEffectHitTarget) = new SpellEffectFn();
    REGISTER(OnEffectHitTarget)->Name = "OnEffectHitTarget";
    REGISTER(OnEffectHitTarget)->DefaultFunctionName = "HandleOnEffectHitTarget";

    REGISTER(OnEffectSuccessfulDispel) = new SpellEffectFn();
    REGISTER(OnEffectSuccessfulDispel)->Name = "OnEffectSuccessfulDispel";
    REGISTER(OnEffectSuccessfulDispel)->DefaultFunctionName = "HandleOnEffectSuccessfulDispel";

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
    REGISTER(OnObjectAreaTargetSelect)->DefaultFunctionName = "CalledOnObjectAreaTargetSelect";
    REGISTER(OnObjectAreaTargetSelect)->FunctionsParameters = "std::list<WorldObject*>& Targets";
    REGISTER(OnObjectAreaTargetSelect)->FunctionsReturnType = "void";
    REGISTER(OnObjectAreaTargetSelect)->InitializationTemplate = "SpellObjectAreaTargetSelectFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, TARGET_NONE)";

    REGISTER(OnObjectJumpTarget) = new ScriptRegisterBase();
    REGISTER(OnObjectJumpTarget)->Name = "OnObjectJumpTarget";
    REGISTER(OnObjectJumpTarget)->DefaultFunctionName = "CalledOnObjectJumpTarget";
    REGISTER(OnObjectJumpTarget)->FunctionsParameters = "int32& AddJumpTarget";
    REGISTER(OnObjectJumpTarget)->FunctionsReturnType = "void";
    REGISTER(OnObjectJumpTarget)->InitializationTemplate = "SpellObjectJumpTargetFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, TARGET_NONE)";

    REGISTER(DoCalcChannelDuration) = new ScriptRegisterBase();
    REGISTER(DoCalcChannelDuration)->Name = "DoCalcChannelDuration";
    REGISTER(DoCalcChannelDuration)->DefaultFunctionName = "CalculateChannelDuration";
    REGISTER(DoCalcChannelDuration)->FunctionsParameters = "uint32& Duration";
    REGISTER(DoCalcChannelDuration)->FunctionsReturnType = "void";
    REGISTER(DoCalcChannelDuration)->InitializationTemplate = "SpellCalcChannelDurationFn(@CLASSNAME::@FUNCTIONNAME)";

    REGISTER(DoModTriggerFlags) = new ScriptRegisterBase();
    REGISTER(DoModTriggerFlags)->Name = "DoModTriggerFlags";
    REGISTER(DoModTriggerFlags)->DefaultFunctionName = "ModifyTriggerFlags";
    REGISTER(DoModTriggerFlags)->FunctionsParameters = "uint32& TriggerCastFlags";
    REGISTER(DoModTriggerFlags)->FunctionsReturnType = "void";
    REGISTER(DoModTriggerFlags)->InitializationTemplate = "SpellModTriggerFlagsFn(@CLASSNAME::@FUNCTIONNAME)";

    REGISTER(OnObjectTargetSelect) = new ScriptRegisterBase();
    REGISTER(OnObjectTargetSelect)->Name = "OnObjectTargetSelect";
    REGISTER(OnObjectTargetSelect)->DefaultFunctionName = "CallOnObjectTargetSelect";
    REGISTER(OnObjectTargetSelect)->FunctionsParameters = "WorldObject*& target";
    REGISTER(OnObjectTargetSelect)->FunctionsReturnType = "void";
    REGISTER(OnObjectTargetSelect)->InitializationTemplate = "SpellObjectTargetSelectFn(@CLASSNAME::@FUNCTIONNAME)";
}

QString SpellScript::CreateScript(QString ScriptName, QVector<ScriptRegister> const& Registers)
{
    QString Result;

    Result += "\n\nclass " + ScriptName + " : public SpellScript";
    Result += "\n{";
    Result += "\n    PrepareSpellScript(" + ScriptName + ");";

    if (!Registers.isEmpty())
    {
        for (auto const& Itr : Registers)
        {
            Result += "\n\n    " + Itr.GetFunctionsReturnType() + " " + Itr.GetFunctionName() + "(" + Itr.GetFunctionsParameters() + ")";
            Result += "\n    {";
            Result += "\n\n    }";
        }

        Result += "\n\n    void Register() override";
        Result += "\n    {";

        for (auto const& Itr : Registers)
        {
            QString RegisterLine = CodeStatics::ReplaceFirst(Itr.GetInitializationTemplate(), ClassFindMarker, ScriptName);
            RegisterLine = CodeStatics::ReplaceFirst(RegisterLine, FunctionFindMarker, Itr.GetFunctionName());
            Result += "\n        " + Itr.GetName() + " += " + RegisterLine + ";";
        }

        Result += "\n    }";
    }

    Result += "\n};\n";


    return Result;
}










#undef REGISTER
