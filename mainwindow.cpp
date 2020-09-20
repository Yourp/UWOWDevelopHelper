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


QVector<ClassName*> const MainWindow::Classes =
{
    new Generic(),
    new Mage(),
    new Warrior(),
    new Warlock(),
    new Priest(),
    new Druid(),
    new Rogue(),
    new Hunter(),
    new Paladin(),
    new Shaman(),
    new DeathKnight(),
    new Monk(),
    new DemonHunter()
};

QVector<Script*> const MainWindow::Scripts =
{
    new SSSpell()
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->TW_AddedRegisters->horizontalHeader()->setVisible(true);
    ui->TW_AddedRegisters->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Fixed);
    setFixedSize(size());

    Registers.reserve(20);

    for (auto const& Itr : Scripts)
    {
        ui->CB_Scripts->addItem(Itr->GetName());
    }

    for (auto const& Itr : Classes)
    {
        ui->CB_Classes->addItem(Itr->GetName());
    }

    Scripts[ui->CB_Scripts->currentIndex()]->FillOptionsListWidget(ui->LW_StaticRegisters);

//    QSettings tt("tdaddadadadadadadadadadadada.ini", QSettings::IniFormat);

//    ui->LE_ScriptName->setText(tt.value("ScriptName").toString());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_released()
{
//    QSettings tt("tdaddadadadadadadadadadadada.ini", QSettings::IniFormat);

//    tt.setValue("ScriptName", ui->LE_ScriptName->text());




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
    if (ClassName const* Element = Classes.at(index))
    {
        ui->LE_ScriptName->setText(Element->GetPrefix());
    }
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
