#ifndef DATABASEUPDATER_H
#define DATABASEUPDATER_H

#include <QDateTime>

class DatabaseUpdater
{
    qint64 LastUpdatesTime;
    QString Folder;

    QStringList GetNewSQLs();

public:

    DatabaseUpdater();

    void SetLastUpdatesTime(qint64 MSTime) { LastUpdatesTime = MSTime; }
    void SetFolderForCheck(QString NewFolder) { Folder = NewFolder; }

    bool HasNewSQLs();
    void Update();
};

#endif // DATABASEUPDATER_H
