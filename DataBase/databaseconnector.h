#ifndef DATABASECONNECTOR_H
#define DATABASECONNECTOR_H

#include <QtSql>
#include <QSqlDatabase>


class DataBaseConnector
{
    QSqlDatabase Connector;

public:
    DataBaseConnector();

    bool Connect();
    bool ReConnect();
    bool Push(class QString command);
};

#endif // DATABASECONNECTOR_H
