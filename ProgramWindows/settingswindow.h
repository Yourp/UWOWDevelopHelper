#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include <QString>
#include "DataBase/databaseconnector.h"
#include "SpecialsWidgets/lineeditwithicon.h"

class QListWidgetItem;


namespace Ui
{
    class SettingsWindow;
}


class SettingsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsWindow(QWidget *parent = nullptr);
    ~SettingsWindow();

    /** Return the path where we keep SQLs files for world database. */
    QString const GetWorldSQLsFolder() const;

    /** Return the name of SQL file which we create when registering the generated script code to our database. */
    QString const GetSQLFileName() const;

    /** Check if payroll option is enabled in config. WithPayroll=1 */
    bool HasPayrollOption() const;

    /** Methods for saving data to config. */
    static void SaveToConfig(QSettings& Conf, QString const& Key, QString const& Text);
    static void SaveToConfig(QSettings& Conf, QString const& Key, QVariant const& Veriable);
    static void SaveToConfig(QSettings& Conf, QString const& Group, QString const& Key, QVariant const& Veriable);
    static void SaveToConfig(QString const& Group, QString const& Key, QVariant const& Veriable);
    static void SaveToConfig(QString const& Key, QVariant const& Veriable);

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

    /** Creating a category of setting. Items for LW_SettingsCategories. */
    class QListWidgetItem* CreateSettingWidgetItem(QString const& ItemName, QIcon ico);

    /** Editing connect and disconnect buttons if we are connected to database. */
    void EditButtonsWhenConnected();

    /** Editing connect and disconnect buttons if we are disconnected to database. */
    void EditButtonsWhenDisconnected();

    /** Enable or disable editing lines with information of connection to database. */
    void SetEnabledLinesWithConnectInfo(bool bEnable);

    /** Reading and loading all data from the config of program. */
    void LoadConfig();

    /** Saving all data to the config of program. */
    void SaveConfig();

    /** Checking connection to database and set icon depending of the result. */
    void UpdateDatabasesLEIcons();

    /** Return the icon depending of the file validation result. Just for visual. */
    QIcon GetValidationIcon(QString const& Path) const;

    /** Return the icon depending of the database connection result. Just for visual. */
    QIcon GetValidationIcon(bool valid) const;

    static QString const GetConfigFileName();

    /** The folder of icon for positive validation. @see GetValidationIcon(). */
    QString const GetVMark() const;

    /** The folder of icon for negative validation. @see GetValidationIcon(). */
    QString const GetXMark() const;
};

#endif // SETTINGS_H
