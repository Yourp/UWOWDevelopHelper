#include <QListWidget>
#include <QTextStream>
#include <QFile>
#include <QDateTime>
#include "spellscript.h"
#include "textstatics.h"
#include "mainwindow.h"
#include "DataBase/databaseconnector.h"


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

    Result += "class " + ScriptName + " : public SpellScript";
    Result += "\n{";
    Result += "\n    " + GetPrepareMacroName() + "(" + ScriptName + ");";

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

    Result += "\n};\n\n";


    return Result;
}

void SpellScript::EditScriptFilesText(QString &FilesText, QString ScriptName, const QVector<ScriptRegister> &Registers)
{
    Script::EditScriptFilesText(FilesText, ScriptName, Registers);

    int StartIndex = CodeStatics::GetIndexAfterString(&FilesText, AddScriptFunctionName);
    StartIndex = FilesText.indexOf("}", StartIndex);

    if (StartIndex < 0)
    {
        return;
    }

    QString Result = FilesText.left(StartIndex);
    Result += "    " + GetRegisterMacroName() + "(" + ScriptName + ");\n";
    Result += CodeStatics::GetRightSide(&FilesText, StartIndex);
    FilesText = Result;
}

void SpellScript::HandleDataBase(MainWindow const* MW)
{
    if (!MW || MW->GetSpellID().isEmpty() || MW->GetScriptName().isEmpty())
    {
        return;
    }

    QString Path = "d:/Work/" + QDateTime::currentDateTime().toString("yyyy_MM_dd_") + "spell_script_names.sql";
    /** TODO: PATH */
    QFile file(Path);

    if (!file.open(QFile::ReadWrite | QFile::Text))
        return;

    QTextStream TStream(&file);
    QString FilesText = TStream.readAll();

    QString AddNew = "DELETE FROM `spell_script_names` WHERE (`ScriptName`='" + MW->GetScriptName() + "');";
    AddNew += "\n";
    AddNew += "INSERT INTO `spell_script_names` (`spell_id`, `ScriptName`) VALUES ('" + MW->GetSpellID() + "', '" + MW->GetScriptName() + "');\n";

    file.resize(0);
    TStream << FilesText + AddNew;

    file.close();

    DataBaseConnector::Push(AddNew);
}

bool SpellScript::CheckPathAndFileValidation(const QString &Path, const QString &Extension)
{
    QFileInfo fileInfo(Path);
    QFile file(Path);

    if (fileInfo.suffix() != Extension || !file.exists())
    {
        return false;
    }

    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        return false;
    }

    QTextStream TStream(&file);
    QString FilesText = TStream.readAll();

    return FilesText.contains(AddScriptFunctionName);
}











