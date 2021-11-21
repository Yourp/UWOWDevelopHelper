#ifndef SCRIPT_H
#define SCRIPT_H


#include "Classes/ObjectBase.h"
#include "Registers/scriptregister.h"


class Script : public ObjectBase
{
public:
    Script() : ObjectBase() {}

    virtual ~Script() {}

    /** Build a new class of a script. */
    virtual QString CreateScript(QString ScriptName, QVector<SelectedScriptRegister> const& Registers) = 0;

    /** Filling the list widget with registers of a script. */
    virtual void FillOptionsListWidget(class QListWidget*) {}

    /** Generating a script and adding to the FilesText. */
    virtual void EditScriptFilesText(QString& FilesText, QString ScriptName, QVector<SelectedScriptRegister> const& Registers);

    /** Register a script to a DB and save the code to the file which we will push to the repository later. */
    virtual void HandleDataBase(class MainWindow const*, class SettingsWindow const*) {}

    /** The marker which we will replace with a real function's name. */
    static QString const FunctionFindMarker;

    /** The marker which we will replace with a real name of class. */
    static QString const ClassFindMarker;

    /** All scripts files have a function where we to register a class of script, so this is the name of the function. */
    static QString const AddScriptFunctionName;

    /** Contains types of scripts. UWOW has two types of a script: aura and spell. */
    static QVector<Script*> const Scripts;

protected:



};



#endif // SCRIPT_H
