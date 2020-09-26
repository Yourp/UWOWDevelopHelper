#include "databaseconnector.h"
#include "Settings/databasesettings.h"

QSqlDatabase DataBaseConnector::WorldConnector = QSqlDatabase::addDatabase("QMYSQL", "World");
QSqlDatabase DataBaseConnector::CharacterConnector = QSqlDatabase::addDatabase("QMYSQL", "Character");
QSqlDatabase DataBaseConnector::LoginConnector = QSqlDatabase::addDatabase("QMYSQL", "Login");


bool DataBaseConnector::Connect(QSqlDatabase& DB, QString DBName)
{
    if (DBName.isEmpty())
    {
        return false;
    }

    DB.setHostName(DataBaseSettings::GetHostName());
    DB.setUserName(DataBaseSettings::GetUserName());
    DB.setPassword(DataBaseSettings::GetPassword());
    DB.setPort(DataBaseSettings::GetPort());
    DB.setDatabaseName(DBName);

    return DB.open();
}

void DataBaseConnector::Disconnect(QSqlDatabase& DB)
{
    DB.close();
}

bool DataBaseConnector::Push(QSqlDatabase& DB, QString command)
{
    QSqlQuery Query(DB);

    return Query.exec(command);
}
