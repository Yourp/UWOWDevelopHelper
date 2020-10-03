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

    int GetCurrentScriptIndex() const;
    QString const GetScriptName() const;
    void UpdateGenerationCodeButton(bool active, int CurrentSettingsClassIndex);

    QVector<class SelectedScriptRegister> Registers;

private slots:

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

private:
    Ui::MainWindow *ui;

    class SettingsWindow* SettingWindow;

    void FillComboBox(class QComboBox* Box, QVector<class ObjectBase*> const& From, QSize Size);



};


#endif // MAINWINDOW_H
