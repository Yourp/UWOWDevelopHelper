#include "script.h"
#include "scriptregister.h"
#include <QVector>

#ifndef SPELLSCRIPT_H
#define SPELLSCRIPT_H

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


class SpellScript : public Script
{


public:
    SpellScript();

    virtual ~SpellScript() {}

    virtual QString const GetName() const override { return "SpellScript"; }

    QString CreateScript(QString ScriptName, QVector<ScriptRegister> const& Registers) override;
};

#endif // SPELLSCRIPT_H
