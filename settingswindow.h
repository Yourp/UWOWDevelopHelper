#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include <QString>
#include "DataBase/databaseconnector.h"




namespace Ui {
class SettingsWindow;
}


class SettingsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsWindow(QWidget *parent = nullptr);
    ~SettingsWindow();

    QString GetHostName() const;
    int GetPort() const;
    QString GetUserName() const;
    QString GetPassword() const;
    QString GetDatabaseName() const;

private slots:


    void on_PB_Disconnect_clicked();

    void on_PB_Connect_clicked();

private:
    Ui::SettingsWindow *ui;

    DataBaseConnector DBConnection;
    class QListWidgetItem* CreateSettingWidgetItem(QString const& ItemName);

    void EditButtonsWhenConnected();
    void EditButtonsWhenDisconnected();

    void LoadConfig();
    void SaveToConfig();



};

#endif // SETTINGS_H
