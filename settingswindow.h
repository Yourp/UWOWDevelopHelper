#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include <QString>
#include "DataBase/databaseconnector.h"
#include "SpecialsWidgets/lineeditwithicon.h"

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

    QString const GetWorldSQLsFolder() const;
    QString const GetSQLFileName() const;

    QIcon GetValidationIcon(QString const& Path) const;
    QIcon GetValidationIcon(bool valid) const;

    static const QString VMark;
    static const QString XMark;

private slots:

    void on_PB_Disconnect_clicked();
    void on_PB_Connect_clicked();
    void on_LW_SettingsCategories_currentRowChanged(int currentRow);
    void on_LW_SettingsClassesScripts_currentRowChanged(int currentRow);
    void on_LE_ClassesScriptsPath_textChanged(const QString &arg1);
    void on_LE_WorldSQLFolder_textChanged(const QString &arg1);
    void on_PB_FindCharacterSQLFolder_clicked();
    void on_PB_FindWorldSQLFolder_clicked();
    void on_PB_FindLoginSQLFolder_clicked();
    void on_PB_FindScriptFile_clicked();

    void on_LE_CharacterSQLFolder_textChanged(const QString &arg1);

    void on_LE_LoginSQLFolder_textChanged(const QString &arg1);

private:
    Ui::SettingsWindow *ui;

    class QListWidgetItem* CreateSettingWidgetItem(QString const& ItemName, QIcon ico);

    void EditButtonsWhenConnected();
    void EditButtonsWhenDisconnected();

    void LoadConfig();
    void SaveConfig();
    void SaveToConfig(QSettings& Conf, QString const& Key, QString const& Text);
    void SaveToConfig(QSettings& Conf, QString const& Key, QVariant const& Veriable);

    void UpdateDatabasesLEIcons();



};

#endif // SETTINGS_H
