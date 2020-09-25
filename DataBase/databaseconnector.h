#ifndef DATABASECONNECTOR_H
#define DATABASECONNECTOR_H

#include <QtSql>
#include <QSqlDatabase>


class DataBaseConnector
{
    DataBaseConnector();
    static QSqlDatabase Connector;



public:


    static bool Connect(class DataBaseSettings* Settings);
    static void Disconnect();
    static bool Push(class QString command);
};

#endif // DATABASECONNECTOR_H
