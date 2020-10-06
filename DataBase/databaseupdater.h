#ifndef DATABASEUPDATER_H
#define DATABASEUPDATER_H

#include <QDateTime>
#include "DataBase/databaseconnector.h"

class DatabaseUpdater
{
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
