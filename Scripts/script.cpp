#include "script.h"
#include "Tools/textstatics.h"
#include "Scripts/ssaura.h"
#include "Scripts/ssspell.h"


QString const Script::FunctionFindMarker    = "@FUNCTIONNAME";
QString const Script::ClassFindMarker       = "@CLASSNAME";
QString const Script::AddScriptFunctionName = "void AddSC";

QVector<Script*> const Script::Scripts =
{
    new SSSpell(),
    new SSAura()
};


void Script::EditScriptFilesText(QString &FilesText, QString ScriptName, const QVector<SelectedScriptRegister> &Registers)
{
    int StartIndex = FilesText.indexOf(AddScriptFunctionName);

    if (StartIndex < 0)
    {
        return;
    }

    QString Midle = CreateScript(ScriptName, Registers);

    FilesText = CodeStatics::ReWriteBetweenIndexes(&FilesText, &Midle, StartIndex, StartIndex);
}
