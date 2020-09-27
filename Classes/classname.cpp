#include "classname.h"
#include <QVector>

QVector<ClassName*> const ClassName::Classes =
{
    new Generic(),
    new Mage(),
    new Warrior(),
    new Warlock(),
    new Priest(),
    new Druid(),
    new Rogue(),
    new Hunter(),
    new Paladin(),
    new Shaman(),
    new DeathKnight(),
    new Monk(),
    new DemonHunter()
};

