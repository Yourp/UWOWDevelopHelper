#ifndef TEXTSTATICS_H
#define TEXTSTATICS_H

class QString;

class TextStatics
{
    TextStatics() {}

public:

    static int GetIndexAfterString(QString const* From, QString const* StringKey);
};

#endif // TEXTSTATICS_H
