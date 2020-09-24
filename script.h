#ifndef SCRIPT_H
#define SCRIPT_H

#include <QVector>
#include "ObjectBase.h"
#include "scriptregister.h"


class Script : public ObjectBase
{
public:
    Script() : ObjectBase() {}

    virtual ~Script() {}

    virtual QString CreateScript(QString ScriptName, QVector<ScriptRegister> const& Registers) = 0;

    virtual void FillOptionsListWidget(class QListWidget*) {}

    virtual void EditScriptFilesText(QString& FilesText, QString ScriptName, QVector<ScriptRegister> const& Registers);

    virtual void HandleDataBase(class MainWindow*) {}

    static QString const FunctionFindMarker;
    static QString const ClassFindMarker;
    static QString const AddScriptFunctionName;

protected:



};



#endif // SCRIPT_H
