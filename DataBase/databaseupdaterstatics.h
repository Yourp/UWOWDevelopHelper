#ifndef DATABASEUPDATERSTATICS_H
#define DATABASEUPDATERSTATICS_H

#include "DataBase/databaseupdater.h"


/** This class help as to get access to all database updaters. */
class DatabaseUpdaterStatics
{
    DatabaseUpdaterStatics() {}

public:

    static DatabaseUpdater World;
    static DatabaseUpdater Character;
    static DatabaseUpdater Login;

};

#endif // DATABASEUPDATERSTATICS_H
