#include "spellcastfn.h"

SpellCastFn::SpellCastFn() : ScriptRegisterBase()
{
    FunctionsParameters = "";
    FunctionsReturnType = "void";
    InitializationTemplate = "SpellCastFn(@CLASSNAME::@FUNCTIONNAME)";
}
