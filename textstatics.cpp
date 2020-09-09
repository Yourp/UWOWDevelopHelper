#include <QString>
#include "textstatics.h"


#pragma once




int TextStatics::GetIndexAfterString(const QString *From, const QString *StringKey)
{
    int Index = From->indexOf(StringKey);

    if (Index >= 0)
    {
        Index += StringKey->length();
    }

    return Index;
}
