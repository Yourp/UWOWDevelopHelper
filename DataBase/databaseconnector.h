#ifndef DATABASECONNECTOR_H
#define DATABASECONNECTOR_H

#include <QtSql>
#include <QSqlDatabase>


class DataBaseConnector
{
    QSqlDatabase Connector;

public:
    DataBaseConnector();

    bool Connect(class SettingsWindow* Settings);
    void Disconnect();
    bool Push(class QString command);
};

#endif // DATABASECONNECTOR_H
