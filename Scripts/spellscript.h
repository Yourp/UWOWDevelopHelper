#include "script.h"
#include "scriptregister.h"
#include <QVector>

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


public:
    SpellScript();

    virtual ~SpellScript() {}

    virtual QString const GetName() const override { return "SpellScript"; }
};

#endif // SPELLSCRIPT_H
