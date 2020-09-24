#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include <QString>
#include "DataBase/databaseconnector.h"

class QListWidgetItem;


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
    QIcon GetValidationPathIcon(QString const& Path) const;
    QIcon GetValidationPathIcon(bool valid) const;

    static bool CheckPathValidation(QString const& Path, QString const& Extension);

private slots:


    void on_PB_Disconnect_clicked();
    void on_PB_Connect_clicked();
    void on_LW_SettingsCategories_currentRowChanged(int currentRow);
    void on_LW_SettingsClassesScripts_currentRowChanged(int currentRow);
    void on_LE_ClassesScriptsPath_textChanged(const QString &arg1);

    void on_PB_FindScriptFile_released();

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
