#ifndef DATABASECONNECTOR_H
#define DATABASECONNECTOR_H

#include <QtSql>
#include <QSqlDatabase>

/** This class helps with work of database connections. */
class DataBaseConnector
{
    /** Connection info. */
    QSqlDatabase Database;

public:

    DataBaseConnector(QString ConnectionName);

    /** Returns - true if the database connection is currently open. Otherwise returns - false. */
    bool IsOpen() const { return Database.isOpen(); }

    /** Trying to connect to database. */
    bool Connect(QString DBName);

    /** Pushing the code to database. QString variant. */
    bool Push(QString const& command);

    /** Pushing the code to database. QStringList variant. */
    void Push(QStringList const& command);

    /** Closeing database connection. */
    void Disconnect();

};

#endif // DATABASECONNECTOR_H
