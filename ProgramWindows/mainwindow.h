#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    /** Get current script name which written in LE_ScriptName. */
    QString const GetScriptName() const;

    /** Activating or deactivating code generation button. */
    void UpdateGenerationCodeButton(bool active, int CurrentSettingsClassIndex);

private slots:

    /** Calling every time when the UpdateTimer is expired. */
    void OnTick();
    void on_PB_GenerateCode_released();
    void on_CB_Classes_currentIndexChanged(int index);
    void on_PB_AddRegister_released();
    void on_PB_RemoveRegister_released();
    void on_LW_StaticRegisters_currentRowChanged(int currentRow);
    void on_TW_AddedRegisters_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);
    void on_Settings_triggered();
    void on_CB_Scripts_currentIndexChanged(int index);
    void on_LE_SpellIDs_textChanged(const QString &arg1);
    void on_A_UpdateDatabase_triggered();
    void on_LE_ScriptName_textChanged(const QString &arg1);
    void on_A_Salary_triggered();

private:

    /** The form of main window. */
    Ui::MainWindow *ui;



    /** Contains all infos of the script registers which we have in TW_AddedRegisters. */
    QVector<class SelectedScriptRegister> Registers;

    class SettingsWindow* SettingWindow;
    class Payroll*        PayrollWindow;

    /**  */
    void FillComboBox(class QComboBox* Box, QVector<class ObjectBase*> const& From, QSize Size);

    /** Get index of selected script in CB_Scripts. */
    int GetCurrentScriptIndex() const;
};


#endif // MAINWINDOW_H
