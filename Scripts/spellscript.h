#include "script.h"
#include "scriptregister.h"

#ifndef SPELLSCRIPT_H
#define SPELLSCRIPT_H

enum class SpellScriptRegisters
{
    OnHit = 0,
    OnCast,
    Max
};


class SpellScript : public Script
{
    ScriptRegisterBase Registers[int(SpellScriptRegisters::Max)];

public:
    SpellScript();

    ScriptRegisterBase const* GetRegisterByIndex(int Index) const override;
};

#endif // SPELLSCRIPT_H
