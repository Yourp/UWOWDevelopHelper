#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "DataBase/databaseupdaterstatics.h"
#include "DataBase/databaseconnectorstatics.h"
#include "Scripts/spellscript.h"
#include "Classes/classname.h"
#include "mainwindow.h"
#include "settingswindow.h"
#include "statictools.h"



MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->TW_AddedRegisters->horizontalHeader()->setVisible(true);
    ui->TW_AddedRegisters->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Fixed);

    QString Range = "^[0-9]{1,6}";

    for (int var = 0; var < 20; ++var)
    {
        Range += " [0-9]{1,6}";
    }
    Range += "$";

    ui->LE_SpellIDs->setValidator(new QRegExpValidator(QRegExp(Range), this));

    setFixedSize(size());

    SettingWindow = new SettingsWindow(this);

    Registers.reserve(20);

    FillComboBox(ui->CB_Scripts, StaticTools::ConvertQVector<ObjectBase>(Script::Scripts), QSize(10, 20));
    FillComboBox(ui->CB_Classes, StaticTools::ConvertQVector<ObjectBase>(ClassName::Classes), QSize(10, 20));


    ui->A_UpdateDatabase->setEnabled(false);
    QTimer* timer = new QTimer();
    timer->start(2000);
    connect(timer, SIGNAL(timeout()), this, SLOT(OnTick()));



    //SettingWindow->exec();
}

MainWindow::~MainWindow()
{
    delete SettingWindow;
    delete ui;
}

void MainWindow::on_PB_GenerateCode_released()
{
    QString Path = ClassName::Classes[ui->CB_Classes->currentIndex()]->GetScriptsFilePath();

    if (!SpellScript::CheckPathAndFileValidation(Path, "cpp"))
    {
        return;
    }

    QFile file(Path);

    if (!file.open(QFile::ReadWrite | QFile::Text))
    {
        return;
    }

    QTextStream TStream(&file);
    TStream.setCodec("UTF-8");
    QString FilesText = TStream.readAll();

    Script::Scripts[GetCurrentScriptIndex()]->EditScriptFilesText(FilesText, GetScriptName(), Registers);

    file.resize(0);
    TStream << FilesText;

    file.close();

    Script::Scripts[GetCurrentScriptIndex()]->HandleDataBase(this, SettingWindow);


}

void MainWindow::on_CB_Classes_currentIndexChanged(int index)
{
    if (ClassName const* Element = ClassName::Classes.at(index))
    {
        ui->LE_ScriptName->setText(Element->GetPrefix());
        ui->PB_GenerateCode->setEnabled(SpellScript::CheckPathAndFileValidation(Element->GetScriptsFilePath(), "cpp"));
    }
}

void MainWindow::on_PB_AddRegister_released()
{
    int RegisterIndex = ui->LW_StaticRegisters->currentRow();

    if (RegisterIndex < 0)
    {
        return;
    }

    if (SpellScript const* CastedSpellScript = dynamic_cast<SpellScript const*>(Script::Scripts[GetCurrentScriptIndex()]))
    {
        if (ScriptRegisterBase const* Base = CastedSpellScript->GetRegisterByIndex(RegisterIndex))
        {
            QString FunctionName = ui->LE_FunctionName->text();

            int Index = Registers.size();

            ui->TW_AddedRegisters->insertRow(Index);
            ui->TW_AddedRegisters->setItem(Index, 0, new QTableWidgetItem(Base->GetName()));
            ui->TW_AddedRegisters->setItem(Index, 1, new QTableWidgetItem(FunctionName));

            Registers.push_back(SelectedScriptRegister(*Base, FunctionName));
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

const QString MainWindow::GetScriptName() const
{
    return ui->LE_ScriptName->text();
}

void MainWindow::UpdateGenerationCodeButton(bool active, int CurrentSettingsClassIndex)
{
    if (CurrentSettingsClassIndex == ui->CB_Classes->currentIndex())
    {
        ui->PB_GenerateCode->setEnabled(active);
    }
}

void MainWindow::OnTick()
{
    if (!ui->A_UpdateDatabase->isEnabled())
    {
        ui->A_UpdateDatabase->setEnabled(DatabaseUpdaterStatics::World.HasNewSQLs() ||
                                         DatabaseUpdaterStatics::Character.HasNewSQLs() ||
                                         DatabaseUpdaterStatics::Login.HasNewSQLs());
    }
}

void MainWindow::on_LW_StaticRegisters_currentRowChanged(int currentRow)
{
    if (currentRow < 0)
    {
        return;
    }

    if (SpellScript const* CastedSpellScript = dynamic_cast<SpellScript const*>(Script::Scripts[GetCurrentScriptIndex()]))
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

void MainWindow::on_Settings_triggered()
{
    if (!SettingWindow)
    {
        return;
    }

    SettingWindow->exec();
}

void MainWindow::on_CB_Scripts_currentIndexChanged(int index)
{
    ui->LW_StaticRegisters->clear();
    Registers.clear();
    ui->TW_AddedRegisters->clearContents();
    ui->TW_AddedRegisters->setRowCount(0);
    Script::Scripts[index]->FillOptionsListWidget(ui->LW_StaticRegisters);
}

void MainWindow::on_LE_SpellIDs_textChanged(const QString &arg1)
{
    SpellScript::SetSpellID(arg1);
}

void MainWindow::on_A_UpdateDatabase_triggered()
{
    ui->A_UpdateDatabase->setEnabled(false);
    DatabaseUpdaterStatics::World.Update(&DatabaseConnectorStatics::World);
    DatabaseUpdaterStatics::Character.Update(&DatabaseConnectorStatics::Character);
    DatabaseUpdaterStatics::Login.Update(&DatabaseConnectorStatics::Login);
}

void MainWindow::FillComboBox(QComboBox *Box, QVector<ObjectBase*> const& From, QSize Size)
{
    if (QAbstractItemModel* Model = Box->model())
    {
        int Index = 0;

        for (auto const& Itr : From)
        {
            Box->addItem(Itr->GetName());
            Model->setData(Model->index(Index, 0), Size, Qt::SizeHintRole);
            Index++;
        }
    }
}


