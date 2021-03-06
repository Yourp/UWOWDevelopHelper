#include <QListWidget>
#include "spellscript.h"
#include "Tools/textstatics.h"
#include "ProgramWindows/mainwindow.h"
#include "ProgramWindows/settingswindow.h"
#include "DataBase/databaseconnectorstatics.h"
#include "DataBase/databaseupdaterstatics.h"

QString SpellScript::SpellID;

void SpellScript::FillOptionsListWidget(QListWidget* LW)
{
    for (ScriptRegisterBase const* Itr : StaticRegisters)
    {
        QListWidgetItem* NewItem = new QListWidgetItem(Itr->GetName());
        NewItem->setSizeHint(QSize(10, 20));
        LW->addItem(NewItem);
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
        for (SelectedScriptRegister const& Itr : Registers)
        {
            Result += "\n\n    " + Itr.GetFunctionsReturnType() + " " + Itr.GetFunctionName() + "(" + Itr.GetFunctionsParameters() + ")";
            Result += "\n    {";
            Result += "\n\n    }";
        }

        Result += "\n\n    void Register() override";
        Result += "\n    {";

        for (SelectedScriptRegister const& Itr : Registers)
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

    QStringList SpellIDList = SpellID.split(' ', Qt::SkipEmptyParts);
    QString AddNew;

    for (QString const& Itr : SpellIDList)
    {
        AddNew += "INSERT INTO `spell_script_names` (`spell_id`, `ScriptName`) VALUES ('" + Itr + "', '" + MW->GetScriptName() + "');\n";
    }

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

    DatabaseUpdaterStatics::World.SetLastUpdatesTime(QDateTime::currentMSecsSinceEpoch());
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

    file.close();

    return FilesText.contains(AddScriptFunctionName);
}
