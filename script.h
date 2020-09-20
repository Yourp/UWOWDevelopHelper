#ifndef SCRIPT_H
#define SCRIPT_H

#include <QVector>
#include "ScriptsObject.h"
#include "scriptregister.h"


class Script : public ScriptsObject
{
public:
    Script() : ScriptsObject() {}

    virtual ~Script() {}

    virtual QString CreateScript(QString ScriptName, QVector<ScriptRegister> const& Registers) = 0;

    virtual void FillOptionsListWidget(class QListWidget*) {}

    virtual void EditScriptFilesText(QString& FilesText, QString ScriptName, QVector<ScriptRegister> const& Registers);

    QString const FunctionFindMarker = "@FUNCTIONNAME";
    QString const ClassFindMarker = "@CLASSNAME";
    QString const StartGeneration = "/** #CODE_GENERATION_START */";

protected:



};

#endif // SCRIPT_H
