#ifndef SPELLSCRIPT_H
#define SPELLSCRIPT_H

#include "Scripts/script.h"
#include "Registers/scriptregister.h"
#include <QVector>


class SpellScript : public Script
{


public:
    SpellScript() : Script() {};

    virtual ~SpellScript() {}

    ScriptRegisterBase const* GetRegisterByIndex(int Index) const { return StaticRegisters.at(Index); }

    /** Get all registers of the script. */
    virtual QVector<ScriptRegisterBase*> const& GetRegisters() const { return StaticRegisters; }

    /** Filling the list widget with registers of a script. */
    virtual void FillOptionsListWidget(class QListWidget*) override;

    /** Build a new class of a script. */
    virtual QString CreateScript(QString ScriptName, QVector<SelectedScriptRegister> const& StaticRegisters) override;

    /** Generating a script and adding to the FilesText. */
    virtual void EditScriptFilesText(QString& FilesText, QString ScriptName, QVector<SelectedScriptRegister> const& StaticRegisters) override;

    virtual QString const GetPrepareMacroName() const = 0;
    virtual QString const GetRegisterMacroName() const = 0;

    /** Register a script to a DB and save the code to the file which we will push to the repository later. */
    virtual void HandleDataBase(class MainWindow const* MW, class SettingsWindow const* SW) override;

    static void SetSpellID(QString ID) { SpellID = ID; }

    /** Check if this file has the right extension and classes of scripts. */
    static bool CheckPathAndFileValidation(QString const& Path, QString const& Extension);

protected:

    /** The list of registers of the script. */
    QVector<ScriptRegisterBase*> StaticRegisters;

    /** IDs of spells for which we will generate the script. */
    static QString SpellID;
};

#endif // SPELLSCRIPT_H
