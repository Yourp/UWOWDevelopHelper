#include "gameclassname.h"
#include "Tools/textstatics.h"
#include <QVector>
#include <QFile>
#include <QTextStream>

/** All classes are unique. Consistency is important. */
QVector<GameClassName*> const GameClassName::Classes =
{
    new Generic(),
    new Mage(),
    new Warrior(),
    new Warlock(),
    new Priest(),
    new Druid(),
    new Rogue(),
    new Hunter(),
    new Paladin(),
    new Shaman(),
    new DeathKnight(),
    new Monk(),
    new DemonHunter()
};

void GameClassName::UpdateScriptNames(const QString &Path)
{
    ScriptNamesInFile.clear();

    QFile file(Path);

    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        return;
    }

    QTextStream TStream(&file);
    TStream.setCodec("UTF-8");
    QString FilesText = TStream.readAll();

    ScriptNamesInFile = CodeStatics::GetAllClasses(FilesText);

    file.close();
}

void GameClassName::AddScriptName(const QString &Name)
{
    ScriptNamesInFile += Name + ' ';
}

bool GameClassName::HasScriptClass(const QString &ScriptName)
{
    return !ScriptName.isEmpty() && ScriptNamesInFile.contains(ScriptName + ' ');
}
