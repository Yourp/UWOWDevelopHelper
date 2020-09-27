#ifndef DATABASECONNECTORSTATICS_H
#define DATABASECONNECTORSTATICS_H

#include "DataBase/databaseconnector.h"


class DatabaseConnectorStatics
{
    DatabaseConnectorStatics() {}

public:

    static DataBaseConnector World;
    static DataBaseConnector Character;
    static DataBaseConnector Login;
};

#endif // DATABASECONNECTORSTATICS_H
