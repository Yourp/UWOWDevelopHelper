#include "databaseupdater.h"
#include "Tools/textstatics.h"
#include "ProgramWindows/settingswindow.h"

DatabaseUpdater::DatabaseUpdater(QString name) : Name(name)
{
    LastUpdatesTime = 0;
}

void DatabaseUpdater::SetLastUpdatesTime(qint64 MSTime)
{
    LastUpdatesTime = MSTime;
    SettingsWindow::SaveToConfig("SQL", Name + "/LastTimeUpdate", LastUpdatesTime);
}

void DatabaseUpdater::GetAllSQLs(QStringList& List)
{
    QStringList ScanedDir = QDir(Folder).entryList(QDir::Filter::Files, QDir::SortFlag::Time | QDir::SortFlag::Reversed);

    for (auto const& FileName : ScanedDir)
    {
        QString FilePath = Folder + "/" + FileName;
        QFileInfo FI(FilePath);

        if (FI.suffix() == "sql")
        {
            if (FI.lastModified().toMSecsSinceEpoch() > LastUpdatesTime)
            {
                QFile file(FilePath);

                if (!file.open(QFile::ReadOnly | QFile::Text))
                {
                    continue;
                }

                QTextStream TStream(&file);
                TStream.setCodec("UTF-8");
                QString text;
                text.reserve(1000000);
                text = TStream.readAll();
                CodeStatics::Split(List, text, ';', 100);
                file.close();
            }
        }
    }
}

bool DatabaseUpdater::HasNewSQLs()
{
    if (Folder.isEmpty())
    {
        return false;
    }

    QStringList ScanedDir = QDir(Folder).entryList(QDir::Filter::Files, QDir::SortFlag::Time);

    for (auto const& Itr : ScanedDir)
    {
        QFileInfo FI(Folder + "/" + Itr);

        if (FI.suffix() == "sql")
        {
            return FI.lastModified().toMSecsSinceEpoch() > LastUpdatesTime;
        }
    }

    return false;
}

void DatabaseUpdater::Update(DataBaseConnector* Connector)
{
    QStringList List;
    List.reserve(1000000);
    GetAllSQLs(List);

    if (List.isEmpty())
    {
        return;
    }

    SetLastUpdatesTime(QDateTime::currentMSecsSinceEpoch());
    Connector->Push(List);
}










