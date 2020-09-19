#include "script.h"
#include "textstatics.h"




void Script::EditScriptFilesText(QString &FilesText, QString ScriptName, const QVector<ScriptRegister> &Registers)
{
    int StartIndex = CodeStatics::GetIndexAfterString(&FilesText, StartGeneration);
    QString Midle = CreateScript(ScriptName, Registers);

    FilesText = CodeStatics::ReWriteBetweenIndexes(&FilesText, &Midle, StartIndex, StartIndex);
}
