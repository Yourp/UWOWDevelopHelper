#include "spellscript.h"


#define REGISTER(Reg) Registers[int(SpellScriptRegisters::Reg)]

SpellScript::SpellScript() : Script()
{
    Registers.reserve(int(SpellScriptRegisters::Max));
    Registers.fill(ScriptRegisterBase(), int(SpellScriptRegisters::Max));

    REGISTER(OnCast).Name = "OnCast";
    REGISTER(OnCast).DefaultFunctionName = "HandleOnCast";
    REGISTER(OnCast).FunctionsParameters = "SpellEffIndex Index, float amount, Unit* Caster";
    REGISTER(OnCast).FunctionsReturnType = "int32";
    REGISTER(OnCast).InitializationTemplate = "SpellCastFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, SPELL_AURA_SCHOOL_ABSORB)";

    REGISTER(OnHit).Name = "OnHit";
    REGISTER(OnHit).DefaultFunctionName = "OnHitHandle";
    REGISTER(OnHit).FunctionsParameters = "SpellEffIndex Index";
    REGISTER(OnHit).FunctionsReturnType = "void";
    REGISTER(OnHit).InitializationTemplate = "SpellHitFn(@CLASSNAME::@FUNCTIONNAME)";

}










#undef REGISTER
