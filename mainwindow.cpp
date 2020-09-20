#include <QTextStream>
#include <QFile>
#include <QDateTime>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "textstatics.h"
#include "Scripts/spellscript.h"
#include "Scripts/ssspell.h"
#include "mainwindow.h"
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

    ui->TW_AddedRegisters->horizontalHeader()->setVisible(true);
    ui->TW_AddedRegisters->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Fixed);
    setFixedSize(size());

    Registers.reserve(20);

    CREATE_SCRIPT(SSSpell);

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

    Scripts[ui->CB_Scripts->currentIndex()]->FillOptionsListWidget(ui->LW_StaticRegisters);

    QSettings tt("tdaddadadadadadadadadadadada.ini", QSettings::IniFormat);

    ui->LE_ScriptName->setText(tt.value("ScriptName").toString());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_released()
{
    QSettings tt("tdaddadadadadadadadadadadada.ini", QSettings::IniFormat);

    tt.setValue("ScriptName", ui->LE_ScriptName->text());




    /** TODO: PATH */
    QFile file("d:/Work/spell_hunter1.cpp");

    if (!file.exists())
        return;

    if (!file.open(QFile::ReadWrite | QFile::Text))
        return;

    QTextStream qq(&file);
    QString FilesText = qq.readAll();

    Scripts[GetCurrentScriptIndex()]->EditScriptFilesText(FilesText, ui->LE_ScriptName->text(), Registers);

    file.resize(0);

    qq << FilesText;

    ui->textEditDebug->setText(QDateTime::currentDateTime().toString("dd_MM_yyyy"));



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

void MainWindow::on_PB_AddRegister_released()
{
    int RegisterIndex = ui->LW_StaticRegisters->currentRow();

    if (RegisterIndex < 0)
    {
        return;
    }


    if (SpellScript const* CastedSpellScript = dynamic_cast<SpellScript const*>(Scripts[GetCurrentScriptIndex()]))
    {
        if (ScriptRegisterBase const* Base = CastedSpellScript->GetRegisterByIndex(RegisterIndex))
        {
            QString FunctionName = ui->LE_FunctionName->text();

            int Index = Registers.size();

            ui->TW_AddedRegisters->insertRow(Index);
            ui->TW_AddedRegisters->setItem(Index, 0, new QTableWidgetItem(Base->GetName()));
            ui->TW_AddedRegisters->setItem(Index, 1, new QTableWidgetItem(FunctionName));

            Registers.push_back(ScriptRegister(*Base, FunctionName));
        }
    }
}

void MainWindow::on_PB_RemoveRegister_released()
{
    int Index = ui->TW_AddedRegisters->currentRow();

    ui->TW_AddedRegisters->setCurrentCell(-1, -1);
    ui->TW_AddedRegisters->removeRow(Index);
    ui->TW_AddedRegisters->setFocus();

    Registers.remove(Index);
}

int MainWindow::GetCurrentScriptIndex() const
{
    return ui->CB_Scripts->currentIndex();
}

void MainWindow::on_LW_StaticRegisters_currentRowChanged(int currentRow)
{
    if (currentRow < 0)
    {
        return;
    }

    if (SpellScript const* CastedSpellScript = dynamic_cast<SpellScript const*>(Scripts[GetCurrentScriptIndex()]))
    {
        if (ScriptRegisterBase const* Register = CastedSpellScript->GetRegisterByIndex(currentRow))
        {
            ui->TW_AddedRegisters->setCurrentCell(-1, -1);
            ui->LE_FunctionName->setText(Register->GetDefaultFunctionName());
            ui->PB_AddRegister->setEnabled(true);
            ui->LE_FunctionName->setFocus();
            ui->PB_RemoveRegister->setEnabled(false);
        }
    }
}


void MainWindow::on_TW_AddedRegisters_currentCellChanged(int currentRow, int, int, int)
{
    if (currentRow < 0)
    {
        ui->PB_RemoveRegister->setEnabled(false);
        return;
    }

    ui->LW_StaticRegisters->setCurrentRow(-1);
    ui->LE_FunctionName->clear();
    ui->PB_AddRegister->setEnabled(false);
    ui->PB_RemoveRegister->setEnabled(true);
    ui->PB_RemoveRegister->setFocus();
}
