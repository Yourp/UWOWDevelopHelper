#ifndef DATABASECONNECTORSTATICS_H
#define DATABASECONNECTORSTATICS_H

#include "DataBase/databaseconnector.h"

/** This class contains all database connections. */
class DatabaseConnectorStatics
{
    DatabaseConnectorStatics() {}

public:

    /** The World connection. */
    static DataBaseConnector World;

    /** The Character connection. */
    static DataBaseConnector Character;

    /** The Login connection. */
    static DataBaseConnector Login;
};

#endif // DATABASECONNECTORSTATICS_H
