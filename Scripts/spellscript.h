#ifndef SPELLSCRIPT_H
#define SPELLSCRIPT_H

#include "script.h"
#include "scriptregister.h"
#include <QVector>


class SpellScript : public Script
{


public:
    SpellScript() : Script() {};

    virtual ~SpellScript() {}

    ScriptRegisterBase const* GetRegisterByIndex(int Index) const { return StaticRegisters.at(Index); }
    virtual QVector<ScriptRegisterBase*> const& GetRegisters() const { return StaticRegisters; }

    virtual void FillOptionsListWidget(class QListWidget*) override;

    virtual QString CreateScript(QString ScriptName, QVector<ScriptRegister> const& StaticRegisters) override;

    virtual void EditScriptFilesText(QString& FilesText, QString ScriptName, QVector<ScriptRegister> const& StaticRegisters) override;

    virtual QString const GetPrepareMacroName() const = 0;

    virtual QString const GetRegisterMacroName() const = 0;

    virtual void HandleDataBase(class MainWindow const* MW) override;

    void SetSpellID(QString ID) { SpellID = ID; }

protected:

    QVector<ScriptRegisterBase*> StaticRegisters;
    QString SpellID;
};

#endif // SPELLSCRIPT_H
