#ifndef DATABASEUPDATER_H
#define DATABASEUPDATER_H

#include <QDateTime>
#include "DataBase/databaseconnector.h"

class DatabaseUpdater
{
    qint64 LastUpdatesTime;
    QString Folder;

    QString GetAllSQLsInOneStrings();

public:

    DatabaseUpdater();

    qint64 GetLastUpdatesTime() const { return LastUpdatesTime; }

    void SetLastUpdatesTime(qint64 MSTime) { LastUpdatesTime = MSTime; }
    void SetFolderForCheck(QString NewFolder) { Folder = NewFolder; }

    bool HasNewSQLs();
    void Update(DataBaseConnector* Connector);
};

#endif // DATABASEUPDATER_H
