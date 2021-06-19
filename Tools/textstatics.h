#ifndef TEXTSTATICS_H
#define TEXTSTATICS_H

class QString;
class QStringList;
class QChar;

class CodeStatics
{
    CodeStatics() {}

public:

    static int GetIndexAfterString(QString const* From, QString const StringKey, int StartPoint = 0);
    static int GetIndexAfterString(QString const* From, QChar const StringKey, int StartPoint = 0);

    static QString GetRightSide(QString const* From, int Index);

    static QString ReWriteBetweenStrings(QString const* Where, QString const* Start, QString const* Midle, QString const* End);

    static QString ReWriteBetweenIndexes(QString const* Where, QString const* Midle, int Start, int End);

    static int GetIndexOfClassEnd(QString const* Where, QString const ClassName);
    static int GetIndexOfBodyEnd(QString const* Where, int Start);

    static QString ReplaceFirst(QString const& Where, QString const WhatReplace, QString const ReplaceTo, int StartIndex = 0);

    static void Split(QStringList& In, QString const& From, QChar EndLine, int Cicle);

    static QString GetAllClasses(QString const& Where);
};

#endif // TEXTSTATICS_H
