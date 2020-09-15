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

    ui->TW_AddedRegisters->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Fixed);



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


    QTableWidgetItem* qq1 = new QTableWidgetItem("Rrrrr");

    ui->TW_AddedRegisters->setRowCount(ui->TW_AddedRegisters->rowCount() + 1);
    ui->TW_AddedRegisters->setItem(ui->TW_AddedRegisters->rowCount()-1, 0, qq1);

    int item = ui->TW_AddedRegisters->currentRow();
    QTableWidgetItem* itemmmm = ui->TW_AddedRegisters->item(item, 0);
QString ttt;
    if (itemmmm)
     ttt = itemmmm->text();
    FinalText = LeftSide + Midle + RightSide;

    qq.seek(0);
    qq << FinalText;

    ui->textEditDebug->setText(FinalText.left(CodeStatics::GetIndexOfClassEnd(&FinalText, "class spell_hun_steady_focus")));

    file.close();
}




void MainWindow::on_pushButton_3_clicked(bool checked)
{
//    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("127.0.0.1");
//    db.setUserName("root");
//    db.setPassword("root");
//    db.setPort(3306);
//    db.setDatabaseName("world735");

//    bool dada = db.open();

//    QSqlQuery q = QSqlQuery(db);

//    dada = q.exec("INSERT INTO `spell_script_names` (`spell_id`, `ScriptName`) VALUES ('9999999', 'spell_mage_ffffffff')");
}
