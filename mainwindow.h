#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

private:
    Ui::MainWindow *ui;

    Script* ScriptList[int(ScriptType::Max)];
    ClassName* Classes[int(ClassNameType::Max)];

    QString const StartGeneration = "/** #CODE_GENERATION_START */";
    QString const EndGeneration = "/** #CODE_GENERATION_END */";
};
#endif // MAINWINDOW_H
