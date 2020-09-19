#include <QListWidget>
#include "spellscript.h"
#include "textstatics.h"


void SpellScript::FillOptionsListWidget(QListWidget* LW)
{
    for (auto const Itr : StaticRegisters)
    {
        LW->addItem(Itr->GetName());
    }
}

QString SpellScript::CreateScript(QString ScriptName, QVector<ScriptRegister> const& Registers)
{
    QString Result;

    Result += "\n\nclass " + ScriptName + " : public SpellScript";
    Result += "\n{";
    Result += "\n    PrepareSpellScript(" + ScriptName + ");";

    if (!Registers.isEmpty())
    {
        for (auto const& Itr : Registers)
        {
            Result += "\n\n    " + Itr.GetFunctionsReturnType() + " " + Itr.GetFunctionName() + "(" + Itr.GetFunctionsParameters() + ")";
            Result += "\n    {";
            Result += "\n\n    }";
        }

        Result += "\n\n    void Register() override";
        Result += "\n    {";

        for (auto const& Itr : Registers)
        {
            QString RegisterLine = CodeStatics::ReplaceFirst(Itr.GetInitializationTemplate(), ClassFindMarker, ScriptName);
            RegisterLine = CodeStatics::ReplaceFirst(RegisterLine, FunctionFindMarker, Itr.GetFunctionName());
            Result += "\n        " + Itr.GetName() + " += " + RegisterLine + ";";
        }

        Result += "\n    }";
    }

    Result += "\n};";


    return Result;
}

void SpellScript::EditScriptFilesText(QString &FilesText, QString ScriptName, const QVector<ScriptRegister> &Registers)
{
    Script::EditScriptFilesText(FilesText, ScriptName, Registers);

    int StartIndex = CodeStatics::GetIndexAfterString(&FilesText, "void AddSC");
    StartIndex = CodeStatics::GetIndexAfterString(&FilesText, "{", StartIndex);

    QString Result = FilesText.left(StartIndex);
    Result += "\n    RegisterSpellScript(" + ScriptName + ");";
    Result += CodeStatics::GetRightSide(&FilesText, StartIndex);
    FilesText = Result;
}











