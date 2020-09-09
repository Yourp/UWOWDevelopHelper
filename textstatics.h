#ifndef TEXTSTATICS_H
#define TEXTSTATICS_H

class QString;

class TextStatics
{
    TextStatics() {}

public:

    static int GetIndexAfterString(QString const* From, QString const StringKey, int StartPoint = 0);

    static QString GetRightSide(QString const* From, int Index);

    static QString ReWriteBetweenStrings(QString const* Where, QString const* Start, QString const* Midle, QString const* End);

    static int GetIndexOfClassEnd(QString const* Where, QString const ClassName);
};

#endif // TEXTSTATICS_H
