#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QtSql>
#include <QSqlDatabase>
#include "script.h"
#include "Classes/classname.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_released();

    void on_pushButton_3_clicked(bool checked);

    void on_CB_Classes_currentIndexChanged(int index);

    void on_PB_AddRegister_released();

    void on_PB_RemoveRegister_released();

    void on_LW_StaticRegisters_currentRowChanged(int currentRow);

    void on_TW_AddedRegisters_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);

private:
    Ui::MainWindow *ui;

    Script* Scripts[int(ScriptType::Max)];
    ClassName* Classes[int(ClassNameType::Max)];
    QVector<class ScriptRegister> Registers;

    int GetCurrentScriptIndex() const;

};
#endif // MAINWINDOW_H
