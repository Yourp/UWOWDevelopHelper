#ifndef DATABASEUPDATER_H
#define DATABASEUPDATER_H

#include <QDateTime>
#include "DataBase/databaseconnector.h"

/**
 * This class helps as to update our database in one click.
 * It find a new sql files and apply them to the our database.
 */
class DatabaseUpdater
{
    /** The date when we did the last update. Needs for detecting a new sql files. */
    qint64 LastUpdatesTime;

    /** This folder we checking for new sql files. */
    QString Folder;

    /** Name of current database. */
    QString Name;

    /** Write contents of all new sql files in folder. (@see Folder). */
    void GetAllSQLs(QStringList& List);

public:

    DatabaseUpdater(QString name);

    qint64 GetLastUpdatesTime() const { return LastUpdatesTime; }
    void SetFolderForCheck(QString NewFolder) { Folder = NewFolder; }

    /** Setting the new update time and writing it to config. */
    void SetLastUpdatesTime(qint64 MSTime);

    /** Checking folder for new sql files. */
    bool HasNewSQLs();

    /** Applying all new SQLs to current database. (@see Name) */
    void Update(DataBaseConnector* Connector);
};

#endif // DATABASEUPDATER_H
