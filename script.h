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

    virtual QString CreateScript(QString ScriptName, QVector<SelectedScriptRegister> const& Registers) = 0;

    virtual void FillOptionsListWidget(class QListWidget*) {}

    virtual void EditScriptFilesText(QString& FilesText, QString ScriptName, QVector<SelectedScriptRegister> const& Registers);

    virtual void HandleDataBase(class MainWindow const*, class SettingsWindow const*) {}

    static QString const FunctionFindMarker;
    static QString const ClassFindMarker;
    static QString const AddScriptFunctionName;
    static QVector<Script*> const Scripts;

protected:



};



#endif // SCRIPT_H
