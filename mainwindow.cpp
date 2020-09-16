#include <QTextStream>
#include <QFile>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "textstatics.h"
#include "Scripts/spellscript.h"
#include "scriptregister.h"


#define CREATE_SCRIPT(CLASS)                                 \
Scripts[int(ScriptType::CLASS)] = new CLASS()


#define CREATE_CLASSNAME(CLASS)                              \
Classes[int(ClassNameType::CLASS)] = new CLASS()


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->TW_AddedRegisters->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Fixed);

    Registers.reserve(20);


    CREATE_SCRIPT(SpellScript);

    for (int var = 0; var < int(ScriptType::Max); ++var)
    {
        ui->CB_Scripts->insertItem(var, Scripts[var]->GetName());
    }

    CREATE_CLASSNAME(Generic);
    CREATE_CLASSNAME(Mage);
    CREATE_CLASSNAME(Warrior);
    CREATE_CLASSNAME(Warlock);
    CREATE_CLASSNAME(Priest);
    CREATE_CLASSNAME(Druid);
    CREATE_CLASSNAME(Rogue);
    CREATE_CLASSNAME(Hunter);
    CREATE_CLASSNAME(Paladin);
    CREATE_CLASSNAME(Shaman);
    CREATE_CLASSNAME(DeathKnight);
    CREATE_CLASSNAME(Monk);
    CREATE_CLASSNAME(DemonHunter);

    for (int var = 0; var < int(ClassNameType::Max); ++var)
    {
        ui->CB_Classes->insertItem(var, Classes[var]->GetName());
    }

    for (auto const& Itr : Scripts[ui->CB_Scripts->currentIndex()]->GetRegisters())
    {
        ui->StaticRegisters->addItem(Itr.GetName());
    }

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
    QString ScriptName = "spell_hun_" + ui->LE_ScriptName->text();
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




void MainWindow::on_pushButton_3_clicked(bool )
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

#undef CREATE_CLASSNAME
#undef CREATE_SCRIPT



void MainWindow::on_CB_Classes_currentIndexChanged(int index)
{
    ui->LE_ScriptName->setText(Classes[index]->GetPrefix());
}

void MainWindow::on_StaticRegisters_currentRowChanged(int currentRow)
{
    if (ScriptRegisterBase const* Register = Scripts[GetCurrentScriptIndex()]->GetRegisterByIndex(currentRow))
    {
        ui->LE_FunctionName->setText(Register->GetDefaultFunctionName());
        ui->PB_AddRegister->setEnabled(true);
    }
}

void MainWindow::on_PB_AddRegister_released()
{

    if (ScriptRegisterBase const* Base = Scripts[GetCurrentScriptIndex()]->GetRegisterByIndex(ui->StaticRegisters->currentRow()))
    {
        QString FunctionName = ui->LE_FunctionName->text();

        int Index = Registers.size();

        ui->TW_AddedRegisters->insertRow(Index);
        ui->TW_AddedRegisters->setItem(Index, 0, new QTableWidgetItem(Base->GetName()));
        ui->TW_AddedRegisters->setItem(Index, 1, new QTableWidgetItem(FunctionName));


        Registers.push_back(ScriptRegister(*Base, FunctionName));
    }
}

int MainWindow::GetCurrentScriptIndex() const
{
    return ui->CB_Scripts->currentIndex();
}
