#include "databaseconnector.h"
#include "settingswindow.h"

DataBaseConnector::DataBaseConnector()
{
}

bool DataBaseConnector::Connect(SettingsWindow* Settings)
{
    Connector = QSqlDatabase::addDatabase("QMYSQL");
    Connector.setHostName(Settings->GetHostName());
    Connector.setUserName(Settings->GetUserName());
    Connector.setPassword(Settings->GetPassword());
    Connector.setPort(Settings->GetPort());
    Connector.setDatabaseName(Settings->GetDatabaseName());

    return Connector.open();
}

void DataBaseConnector::Disconnect()
{
    Connector.close();
}

bool DataBaseConnector::Push(QString command)
{
    QSqlQuery Query = QSqlQuery(Connector);

    return Query.exec(command);
}
