#ifndef DATABASECONNECTOR_H
#define DATABASECONNECTOR_H

#include <QtSql>
#include <QSqlDatabase>


class DataBaseConnector
{
    DataBaseConnector() {}

public:

    static QSqlDatabase WorldConnector;
    static QSqlDatabase CharacterConnector;
    static QSqlDatabase LoginConnector;

    static bool Connect(QSqlDatabase& DB, QString DBName);
    static void Disconnect(QSqlDatabase& DB);
    static bool Push(QSqlDatabase& DB, class QString command);
};

#endif // DATABASECONNECTOR_H
