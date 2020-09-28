#include <QListWidget>
#include <QTextStream>
#include <QFile>
#include <QDateTime>
#include "spellscript.h"
#include "textstatics.h"
#include "mainwindow.h"
#include "settingswindow.h"
#include "DataBase/databaseconnectorstatics.h"


void SpellScript::FillOptionsListWidget(QListWidget* LW)
{
    for (auto const Itr : StaticRegisters)
    {
        LW->addItem(Itr->GetName());
    }
}

QString SpellScript::CreateScript(QString ScriptName, QVector<SelectedScriptRegister> const& Registers)
{
    QString Result;

    if (!SpellID.isEmpty())
    {
        Result += "/** " + SpellID + " */\n";
    }

    Result += "class " + ScriptName + " : public " + GetName();
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

void SpellScript::EditScriptFilesText(QString &FilesText, QString ScriptName, const QVector<SelectedScriptRegister> &Registers)
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

void SpellScript::HandleDataBase(MainWindow const* MW, SettingsWindow const* SW)
{
    if (!MW || SpellID.isEmpty() || MW->GetScriptName().isEmpty())
    {
        return;
    }

    QString AddNew = "DELETE FROM `spell_script_names` WHERE (`ScriptName`='" + MW->GetScriptName() + "');";
    AddNew += "\n";
    AddNew += "INSERT INTO `spell_script_names` (`spell_id`, `ScriptName`) VALUES ('" + SpellID + "', '" + MW->GetScriptName() + "');\n";

    DatabaseConnectorStatics::World.Push(AddNew);

    QString Folder = SW->GetWorldSQLsFolder();

    if (Folder.isEmpty())
    {
        return;
    }

    QString Path = Folder + "/" + QDateTime::currentDateTime().toString("yyyy_MM_dd_") + SW->GetSQLFileName() + ".sql";
    QFile file(Path);

    if (!file.open(QFile::ReadWrite | QFile::Text))
        return;

    QTextStream TStream(&file);
    TStream.setCodec("UTF-8");
    QString FilesText = TStream.readAll();
    file.resize(0);
    TStream << FilesText + AddNew;

    file.close();
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
    TStream.setCodec("UTF-8");
    QString FilesText = TStream.readAll();

    return FilesText.contains(AddScriptFunctionName);
}











