#include "databaseupdater.h"
#include "textstatics.h"

DatabaseUpdater::DatabaseUpdater()
{
    LastUpdatesTime = 0;
}

void DatabaseUpdater::GetAllSQLsInOneStrings(QStringList& List)
{
    //QString Result;
    //Result.reserve(1000000000);
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
    quint64 t = QDateTime::currentMSecsSinceEpoch();
    quint64 allt = t;
    QStringList List;
    List.reserve(1000000);
    GetAllSQLsInOneStrings(List);
    SetLastUpdatesTime(QDateTime::currentMSecsSinceEpoch());
    qDebug() << "reserve  " << QDateTime::currentMSecsSinceEpoch() - t;
    t = QDateTime::currentMSecsSinceEpoch();

    Connector->Push(List);
    qDebug() << "Push " << QDateTime::currentMSecsSinceEpoch() - t;
    qDebug() << "AllTime " << QDateTime::currentMSecsSinceEpoch() - allt;
}










