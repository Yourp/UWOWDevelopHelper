#include "databaseupdater.h"
#include <QFile>
#include <QDir>
#include <QDateTime>

DatabaseUpdater::DatabaseUpdater()
{
    LastUpdatesTime = 0;
}

QString DatabaseUpdater::GetAllSQLsInOneStrings()
{
    QString Result;
    Result.reserve(1000000000);
    QString CheckFolder = Folder;
    QStringList ScanedDir = QDir(CheckFolder).entryList(QDir::Filter::Files, QDir::SortFlag::Time | QDir::SortFlag::Reversed);

    for (auto const& FileName : ScanedDir)
    {
        QString FilePath = CheckFolder + "/" + FileName;
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
                Result += TStream.readAll();
                file.close();
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

void DatabaseUpdater::Update(DataBaseConnector* Connector)
{
    Connector->Push(GetAllSQLsInOneStrings());
    SetLastUpdatesTime(QDateTime::currentMSecsSinceEpoch());
}










