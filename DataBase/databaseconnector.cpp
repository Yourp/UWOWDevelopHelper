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

bool DataBaseConnector::Push(QString command)
{
    QStringList sqlStatements = command.split(';', Qt::SkipEmptyParts);


    int successCount = 0;

    foreach(const QString& statement, sqlStatements)
    {
        //if (statement.trimmed() != "")
        //{
            QSqlQuery Query(Database);
            if (Query.exec(statement))
                successCount++;
            else
                qDebug() << "Failed:" << statement << "\nReason:" << Query.lastError();
        //}
    }
    return successCount;
}
