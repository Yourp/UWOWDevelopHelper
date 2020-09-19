#ifndef SSSPELL_H
#define SSSPELL_H

#include "spellscript.h"

enum class SpellScriptRegisters
{
    BeforeCast = 0,
    OnCast,
    AfterCast,
    BeforeStartCast,
    OnFinishCast,
    OnCheckCast,
    AfterCheckCast,
    OnTakePower,
    DoCalcEffMask,
    OnEffectLaunch,
    OnEffectLaunchTarget,
    OnEffectHit,
    OnEffectHitTarget,
    OnEffectSuccessfulDispel,
    BeforeHit,
    OnHit,
    AfterHit,
    OnObjectAreaTargetSelect,
    OnObjectJumpTarget,
    DoCalcChannelDuration,
    DoModTriggerFlags,
    OnObjectTargetSelect,
    Max
};

class SSSpell : public SpellScript
{
public:
    SSSpell();

    virtual QString const GetName() const override { return "SpellScript"; }
};

#endif // SSSPELL_H
