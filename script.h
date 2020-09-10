#include <QString>
#include <QVector>

#ifndef SCRIPT_H
#define SCRIPT_H

struct ScriptRegister
{
    ScriptRegister(QString Name, int index) : FunctionName(Name), Index(index) {}

    QString FunctionName;
    int Index;
};


class Script
{
public:
    Script();

    virtual ~Script() {}

    virtual QString CreateScript(QString ScriptName, QVector<ScriptRegister> Functions) = 0;
};

#endif // SCRIPT_H
