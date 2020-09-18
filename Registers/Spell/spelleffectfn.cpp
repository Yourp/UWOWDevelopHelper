#include "spelleffectfn.h"

SpellEffectFn::SpellEffectFn() : ScriptRegisterBase()
{
    FunctionsParameters = "SpellEffIndex effIndex";
    FunctionsReturnType = "void";
    InitializationTemplate = "SpellEffectFn(@CLASSNAME::@FUNCTIONNAME, EFFECT_0, SPELL_EFFECT_DUMMY)";
}
