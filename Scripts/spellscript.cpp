#include "spellscript.h"


#define REGISTER(Reg) Registers[int(SpellScriptRegisters::Reg)]

SpellScript::SpellScript() : Script()
{
    REGISTER(OnHit).Name = "OnHit";
    REGISTER(OnHit).DefaultFunctionName = "OnHitHandle";
    REGISTER(OnHit).FunctionsParameters = "SpellEffIndex Index";
    REGISTER(OnHit).FunctionsReturnType = "void";
    REGISTER(OnHit).InitializationTemplate = "SpellHitFn(@CLASSNAME::@FUNCTIONNAME)";

    REGISTER(OnCast).Name = "OnCast";
    REGISTER(OnCast).DefaultFunctionName = "HandleOnCast";
    REGISTER(OnCast).FunctionsParameters = "SpellEffIndex Index, float amount, Unit* Caster";
    REGISTER(OnCast).FunctionsReturnType = "int32";
    REGISTER(OnCast).InitializationTemplate = "SpellCastFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, SPELL_AURA_SCHOOL_ABSORB)";

}

const ScriptRegister* SpellScript::GetRegisterByIndex(int Index) const
{
    if (Index >= 0 && Index < int(SpellScriptRegisters::Max))
    {
        return &Registers[Index];
    }

    return nullptr;
}








#undef REGISTER
