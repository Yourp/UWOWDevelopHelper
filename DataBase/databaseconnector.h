#ifndef DATABASECONNECTOR_H
#define DATABASECONNECTOR_H

#include <QtSql>
#include <QSqlDatabase>


class DataBaseConnector
{
    QSqlDatabase Database;

public:

    DataBaseConnector(QString ConnectionName);

    bool IsOpen() const { return Database.isOpen(); }
    bool Connect(QString DBName);
    bool Push(QString command);
    void Disconnect();

};

#endif // DATABASECONNECTOR_H
