#ifndef SSAURA_H
#define SSAURA_H

#include "spellscript.h"

enum class AuraScriptRegisters
{
    DoCheckAreaTarget = 0,
    DoCheckTargetsList,
    OnDispel,
    AfterDispel,
    OnEffectApply,
    AfterEffectApply,
    OnEffectRemove,
    AfterEffectRemove,
    OnEffectPeriodic,
    OnAuraUpdate,
    OnEffectUpdate,
    OnEffectUpdatePeriodic,
    DoEffectBeforeCalcAmount,
    DoEffectCalcAmount,
    DoEffectAfterCalcAmount,
    DoCalcMaxDuration,
    DoEffectChangeTickDamage,
    DoEffectCalcPeriodic,
    DoEffectCalcSpellMod,
    OnEffectAbsorb,
    AfterEffectAbsorb,
    OnEffectSplitDamage,
    OnEffectProc,
    Max
};


class SSAura : public SpellScript
{
public:
    SSAura();

    virtual QString const GetName() const override { return "AuraScript"; }

    virtual QString const GetPrepareMacroName() const override { return "PrepareAuraScript"; }

    virtual QString const GetRegisterMacroName() const override { return "RegisterAuraScript"; }
};










#endif // SSAURA_H
