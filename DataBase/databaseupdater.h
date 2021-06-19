#ifndef DATABASEUPDATER_H
#define DATABASEUPDATER_H

#include <QDateTime>
#include "DataBase/databaseconnector.h"

/**
 * This class helps as to update our database in one click.
 * It find a new sql files and apply them to the database.
 */
class DatabaseUpdater
{
    /** The date when we did the last update. Needs for detecting a new sql files. */
    qint64 LastUpdatesTime;


    QString Folder;
    QString Name;

    void GetAllSQLsInOneStrings(QStringList& List);

public:

    DatabaseUpdater(QString name);

    qint64 GetLastUpdatesTime() const { return LastUpdatesTime; }

    void SetLastUpdatesTime(qint64 MSTime);
    void SetFolderForCheck(QString NewFolder) { Folder = NewFolder; }

    bool HasNewSQLs();
    void Update(DataBaseConnector* Connector);
};

#endif // DATABASEUPDATER_H
