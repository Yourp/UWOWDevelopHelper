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

    int StartIndex = TextStatics::GetIndexAfterString(&BeforeEdit, &StartGeneration);
    int EndIndex = BeforeEdit.indexOf(EndGeneration);

    LeftSide = BeforeEdit.left(StartIndex);
    // Midle = BeforeEdit.mid(StartIndex, EndIndex - StartIndex);
    RightSide = BeforeEdit.right(BeforeEdit.length() - EndIndex);

    Midle += "\n\nclass " + ScriptName + " : public SpellScript";
    Midle += "\n{";
    Midle += "\n    PrepareSpellScript(" + ScriptName + ");";
    Midle += "\n};\n\n";

    FinalText = LeftSide + Midle + RightSide;

    BeforeEdit = FinalText;

    QString AddSC = "void AddSC_hunter_spell_scripts()\n{";

    StartIndex = BeforeEdit.indexOf(AddSC) + AddSC.length();
    LeftSide = BeforeEdit.left(StartIndex);
    RightSide = BeforeEdit.right(BeforeEdit.length() - StartIndex);
    Midle = "\n    RegisterSpellScript(" + ScriptName + ");";

    FinalText = LeftSide + Midle + RightSide;

    qq.seek(0);
    qq << FinalText;

    ui->textEditDebug->setText(Midle);

    file.close();
}
