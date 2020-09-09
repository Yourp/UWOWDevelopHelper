#include <QString>
#include "textstatics.h"

#pragma once




int TextStatics::GetIndexAfterString(const QString *From, const QString StringKey, int StartPoint)
{
    int Index = From->indexOf(StringKey, StartPoint);

    if (Index >= 0)
    {
        Index += StringKey.length();
    }

    return Index;
}

QString TextStatics::GetRightSide(const QString *From, int Index)
{
    QString Result;

    if (From->length() > Index)
    {
        Result = From->right(From->length() - Index);
    }

    return Result;
}

QString TextStatics::ReWriteBetweenStrings(const QString *Where, const QString *Start, const QString *Midle, const QString *End)
{
    QString Result;

    int StartIndex = GetIndexAfterString(Where, *Start);
    int EndIndex = Where->indexOf(End);

    if (StartIndex >= 0)
    {
        Result = Where->left(StartIndex);
        Result += Midle;
        Result += GetRightSide(Where, EndIndex);
    }

    return Result;
}

int TextStatics::GetIndexOfClassEnd(const QString *Where, const QString ClassName)
{
    int FieldsOpened = 0;
    int CurrentIndex = GetIndexAfterString(Where, ClassName);

    if (CurrentIndex < 0)
    {
        return -1;
    }

    CurrentIndex = GetIndexAfterString(Where, "{", CurrentIndex);

    if (CurrentIndex < 0)
    {
        return -1;
    }

    FieldsOpened++;

    while (FieldsOpened != 0)
    {
        int NextOpen = GetIndexAfterString(Where, "{", CurrentIndex);
        int NextClose = GetIndexAfterString(Where, "}", CurrentIndex);

        if (NextClose < 0)
        {
            return -1;
        }

        if (NextOpen < NextClose)
        {
            FieldsOpened++;
            CurrentIndex = NextOpen;
        }
        else
        {
            FieldsOpened--;
            CurrentIndex = NextClose;
        }
    }

    CurrentIndex = GetIndexAfterString(Where, ";", CurrentIndex);

    return CurrentIndex;
}

















