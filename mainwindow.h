#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "DataBase/databaseconnector.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int GetCurrentScriptIndex() const;
    QString const GetScriptName() const;
    void UpdateGenerationCodeButton(bool active, int CurrentSettingsClassIndex);

    QVector<class SelectedScriptRegister> Registers;

private slots:

    void on_PB_GenerateCode_released();

    void on_CB_Classes_currentIndexChanged(int index);

    void on_PB_AddRegister_released();

    void on_PB_RemoveRegister_released();

    void on_LW_StaticRegisters_currentRowChanged(int currentRow);

    void on_TW_AddedRegisters_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);

    void on_Settings_triggered();

    void on_CB_Scripts_currentIndexChanged(int index);

    void on_LE_SpellID_textChanged(const QString &arg1);

    void on_Refresh_clicked();

    void on_Update_clicked();

private:
    Ui::MainWindow *ui;

    class SettingsWindow* SettingWindow;



};


#endif // MAINWINDOW_H
