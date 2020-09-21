#include "databaseconnector.h"

DataBaseConnector::DataBaseConnector()
{
    Connect();
}

bool DataBaseConnector::Connect()
{
    Connector = QSqlDatabase::addDatabase("QMYSQL");
    Connector.setHostName("127.0.0.1");
    Connector.setUserName("root");
    Connector.setPassword("root");
    Connector.setPort(3306);
    Connector.setDatabaseName("world735");

    return Connector.open();
}

bool DataBaseConnector::ReConnect()
{
    Connector.close();
    return Connect();
}

bool DataBaseConnector::Push(QString command)
{
    QSqlQuery Query = QSqlQuery(Connector);

    return  Query.exec(command);
}
