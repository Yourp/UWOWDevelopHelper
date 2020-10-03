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
    return GetIndexOfBodyEnd(Where, GetIndexAfterString(Where, ClassName));
}

int CodeStatics::GetIndexOfBodyEnd(const QString *Where, int Start)
{
    if (Start < 0)
    {
        return -1;
    }

    int End = GetIndexAfterString(Where, ";", Start);
    Start = GetIndexAfterString(Where, "{", Start);

    if (End < 0)
    {
        return -1;
    }

    if (End < Start)
    {
        return End;
    }

    int FieldsOpened = 1;

    while (FieldsOpened != 0)
    {
        int NextOpen = GetIndexAfterString(Where, "{", Start);
        int NextClose = GetIndexAfterString(Where, "}", Start);

        if (NextClose < 0)
        {
            return -1;
        }

        if (NextOpen < NextClose)
        {
            FieldsOpened++;
            Start = NextOpen;
        }
        else
        {
            FieldsOpened--;
            Start = NextClose;
        }
    }

    Start = GetIndexAfterString(Where, ";", Start);

    return Start;
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

QString CodeStatics::GetAllClasses(const QString &Where)
{
    QString Result;

    int Start = 0;

    while (Start >= 0)
    {
        Start = GetIndexAfterString(&Where, "\nclass ", Start);

        if (Start > 0)
        {
            int End = GetIndexAfterString(&Where, " ", Start);
            int semicolonEnd = GetIndexAfterString(&Where, ";", Start);

            if (End > 0 && semicolonEnd > End)
            {
                Result += Where.mid(Start, End - Start) + ' ';
                Start = GetIndexOfBodyEnd(&Where, End);
                continue;
            }

            if (semicolonEnd < 0)
            {
                break;
            }

            Result += Where.mid(Start, semicolonEnd - Start);
            Start = semicolonEnd;
        }
    }

    return Result;
}




















