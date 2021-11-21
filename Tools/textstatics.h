#ifndef TEXTSTATICS_H
#define TEXTSTATICS_H

class QString;
class QStringList;
class QChar;

/** This class helps as to text work for generation of the code. */
class CodeStatics
{
    CodeStatics() {}

public:

    /**
     * Returns the index position right after the StringKey.
     *
     * @From            - All text.
     * @StringKey       - The search text.
     * @StartPoint      - The index of start searching.
     */
    static int GetIndexAfterString(QString const* From, QString const StringKey, int StartPoint = 0);
    static int GetIndexAfterString(QString const* From, QChar const StringKey, int StartPoint = 0);

    /** Returns all text after the index. */
    static QString GetRightSide(QString const* From, int Index);

    static QString ReWriteBetweenStrings(QString const* Where, QString const* Start, QString const* Midle, QString const* End);
    static QString ReWriteBetweenIndexes(QString const* Where, QString const* Midle, int Start, int End);

    static int GetIndexOfClassEnd(QString const* Where, QString const ClassName);

    /** Returns the index of the end of the area of visibility. */
    static int GetIndexOfBodyEnd(QString const* Where, int Start);

    /** Replaces the first finded text (WhatReplace) to the other (ReplaceTo). */
    static QString ReplaceFirst(QString const& Where, QString const WhatReplace, QString const ReplaceTo, int StartIndex = 0);

    /**
     * Splits the string text to the list.
     *
     * @In              - The string list where we save the result.
     * @From            - The text which need to split.
     * @EndOfLine       - The mark of end of the line.
     * @Cicle           - The count of lines we can save in the one element of the QStringList.
     */
    static void Split(QStringList& In, QString const& From, QChar EndOfLine, int Cicle);

    /** Gets all names of classes in the text. (through a space) */
    static QString GetAllClasses(QString const& Where);
};

#endif // TEXTSTATICS_H
