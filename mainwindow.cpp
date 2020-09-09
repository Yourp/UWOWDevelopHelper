#include <QTextStream>
#include <QFile>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "textstatics.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_released()
{
    QFile file("d:/Work/spell_hunter1.cpp");

    if (!file.exists())
        return;

    if (!file.open(QFile::ReadWrite | QFile::Text))
        return;

    QTextStream qq(&file);
    QString BeforeEdit = qq.readAll();
    QString ScriptName = "spell_hun_" + ui->ScriptName->text();
    QString LeftSide;
    QString RightSide;
    QString FinalText;
    QString Midle;

    Midle += "\n\nclass " + ScriptName + " : public SpellScript";
    Midle += "\n{";
    Midle += "\n    PrepareSpellScript(" + ScriptName + ");";
    Midle += "\n};\n\n";

    BeforeEdit = CodeStatics::ReWriteBetweenStrings(&BeforeEdit, &StartGeneration, &Midle, &EndGeneration);

    QString AddSC = "void AddSC_hunter_spell_scripts()\n{";

    int StartIndex = CodeStatics::GetIndexAfterString(&BeforeEdit, AddSC);
    LeftSide = BeforeEdit.left(StartIndex);
    RightSide = CodeStatics::GetRightSide(&BeforeEdit, StartIndex);
    Midle = "\n    RegisterSpellScript(" + ScriptName + ");";

    FinalText = LeftSide + Midle + RightSide;

    qq.seek(0);
    qq << FinalText;

    ui->textEditDebug->setText(FinalText.left(CodeStatics::GetIndexOfClassEnd(&FinalText, "class spell_hun_steady_focus")));

    file.close();
}
