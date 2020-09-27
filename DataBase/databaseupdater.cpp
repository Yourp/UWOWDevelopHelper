#include "databaseupdater.h"
#include <QFile>
#include <QDir>

DatabaseUpdater::DatabaseUpdater()
{
    LastUpdatesTime = 0;
}

QStringList DatabaseUpdater::GetNewSQLs()
{
    QStringList Result;
    QString CheckFolder = Folder;
    QStringList ScanedDir = QDir(CheckFolder).entryList(QDir::Filter::Files, (QDir::SortFlag::Time | QDir::SortFlag::Reversed));

    for (auto const& Itr : ScanedDir)
    {
        QFileInfo FI(CheckFolder + "/" + Itr);

        if (FI.suffix() == "sql")
        {
            if (FI.lastModified().toMSecsSinceEpoch() > LastUpdatesTime)
            {
                Result.push_back(Itr);
            }
        }
    }

    return Result;
}

bool DatabaseUpdater::HasNewSQLs()
{
    QString CheckFolder = Folder;
    QStringList ScanedDir = QDir(CheckFolder).entryList(QDir::Filter::Files, QDir::SortFlag::Time);

    for (auto const& Itr : ScanedDir)
    {
        QFileInfo FI(CheckFolder + "/" + Itr);

        if (FI.suffix() == "sql")
        {
            return FI.lastModified().toMSecsSinceEpoch() > LastUpdatesTime;
        }
    }

    return false;
}

void DatabaseUpdater::Update()
{

}










