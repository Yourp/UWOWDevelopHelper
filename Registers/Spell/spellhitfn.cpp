#include "spellhitfn.h"

SpellHitFn::SpellHitFn() : ScriptRegisterBase()
{
    FunctionsParameters = "";
    FunctionsReturnType = "void";
    InitializationTemplate = "SpellHitFn(@CLASSNAME::@FUNCTIONNAME)";
}
