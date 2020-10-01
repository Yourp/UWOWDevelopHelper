#include <QStringList>
#include "textstatics.h"



int CodeStatics::GetIndexAfterString(const QString *From, const QString StringKey, int StartPoint)
{
    int Index = From->indexOf(StringKey, StartPoint);

    if (Index >= 0)
    {
        Index += StringKey.length();
    }

    return Index;
}

int CodeStatics::GetIndexAfterString(const QString *From, const QChar StringKey, int StartPoint)
{
    int Index = From->indexOf(StringKey, StartPoint);

    if (Index >= 0)
    {
        Index++;
    }

    return Index;
}

QString CodeStatics::GetRightSide(const QString *From, int Index)
{
    QString Result;

    if (From->length() > Index)
    {
        Result = From->right(From->length() - Index);
    }

    return Result;
}

QString CodeStatics::ReWriteBetweenStrings(const QString *Where, const QString *Start, const QString *Midle, const QString *End)
{
    int StartIndex = GetIndexAfterString(Where, *Start);
    int EndIndex = Where->indexOf(End);

    return ReWriteBetweenIndexes(Where, Midle, StartIndex, EndIndex);
}

QString CodeStatics::ReWriteBetweenIndexes(const QString *Where, const QString *Midle, int Start, int End)
{
    QString Result;

    if (Start >= 0)
    {
        Result = Where->left(Start);
        Result += Midle;
        Result += GetRightSide(Where, End);
    }

    return Result;
}

int CodeStatics::GetIndexOfClassEnd(const QString *Where, const QString ClassName)
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

QString CodeStatics::ReplaceFirst(const QString &Where, const QString WhatReplace, const QString ReplaceTo, int StartIndex)
{
    QString Result = Where.left(Where.indexOf(WhatReplace, StartIndex));
    Result += ReplaceTo;
    Result += GetRightSide(&Where, GetIndexAfterString(&Where, WhatReplace, StartIndex));

    return Result;
}

void CodeStatics::Split(QStringList &In, const QString &From, QChar EndLine, int Cicle)
{
    QString row;
    row.reserve(Cicle * 1000);
    int End = 0;
    int Start;

    while (End >= 0)
    {
        row.clear();

        for (int i = 0; i < Cicle; ++i)
        {
            Start = End;

            End = CodeStatics::GetIndexAfterString(&From, EndLine, Start);

            if (End < 0)
            {
                break;
            }
            row += From.mid(Start, End - Start);
        }
        In.push_back(row);
    }
}




















