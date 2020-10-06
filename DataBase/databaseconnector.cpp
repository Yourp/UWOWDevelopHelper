#include "databaseconnector.h"
#include "Settings/databasesettings.h"


DataBaseConnector::DataBaseConnector(QString ConnectionName)
{
    Database = QSqlDatabase::addDatabase("QMYSQL", ConnectionName);
}

bool DataBaseConnector::Connect(QString DBName)
{
    if (DBName.isEmpty())
    {
        return false;
    }

    Database.setHostName(DataBaseSettings::GetHostName());
    Database.setUserName(DataBaseSettings::GetUserName());
    Database.setPassword(DataBaseSettings::GetPassword());
    Database.setPort(DataBaseSettings::GetPort());
    Database.setDatabaseName(DBName);

    return Database.open();
}

void DataBaseConnector::Disconnect()
{
    Database.close();
}

bool DataBaseConnector::Push(QString const& command)
{
    QSqlQuery Query(Database);
    return Query.exec(command);
}

void DataBaseConnector::Push(QStringList const& command)
{
    QSqlQuery Query(Database);

    for (auto const& Itr : command)
    {
        if (Itr.trimmed() != "")
        {
            if (!Query.exec(Itr))
                qDebug() << "Failed:" << Itr << "\nReason:" << Query.lastError();
        }
    }
}
