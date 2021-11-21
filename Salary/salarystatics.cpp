#include "salarystatics.h"
#include "Salary/commit.h"
#include "salarystatics.h"
#include "Tools/textstatics.h"
#include <QProcess>
#include <QSettings>
#include <QFile>
#include <QTextStream>
#include <QDateTime>

QVector<Commit> SalaryStatics::Commits;
QString SalaryStatics::LastCommit;


void SalaryStatics::GetCommitsLog(QString &Log)
{
    QProcess proc;

    // TODO: Temp solution.
    proc.setWorkingDirectory("c:/Users/Yourp/uWoW/735");
    proc.start("C:\\Program Files\\Git\\bin\\bash.exe", {"-c", "git log origin/735 --author=ysmart --date=iso -100"});
    proc.waitForFinished();
    Log = proc.readAll();
    proc.close();
}

void SalaryStatics::UpdateCommitsList()
{
    QString CommitsLog;
    GetCommitsLog(CommitsLog);

    Commits.clear();

    QSettings Conf("SalaryData.ini", QSettings::IniFormat);
    Conf.setIniCodec("UTF-8");

    LastCommit = Conf.value("LastCommit", "").toString();

    int Start = 0;
    int End = 0;

    while (true)
    {
        Start = CodeStatics::GetIndexAfterString(&CommitsLog, "commit ", End);

        if (Start < 0)
        {
            break;
        }

        End = CommitsLog.indexOf("\n", Start);

        Commit com;

        com.SetName(CommitsLog.mid(Start, End - Start));

        if (com.GetName() == LastCommit)
        {
            break;
        }

        Start = CodeStatics::GetIndexAfterString(&CommitsLog, "Date:   ", End);
        End = CommitsLog.indexOf(" +", Start);

        com.SetDate(CommitsLog.mid(Start, End - Start));

        Start = CodeStatics::GetIndexAfterString(&CommitsLog, "\n    ", End);
        End = CommitsLog.indexOf("\n\ncommit ", Start);

        QString Message;

        if (End < 0)
        {
            Message = CommitsLog.mid(Start, CommitsLog.indexOf("\n", Start) - Start);
            Message.remove("    ");
            com.SetMessage(Message);
            Commits.push_back(com);
            break;
        }

        Message = CommitsLog.mid(Start, End - Start);
        Message.remove("    ");
        com.SetMessage(Message);
        Commits.push_back(com);
    }

    for (Commit& Itr : Commits)
    {
        Itr.SetCost(Conf.value("Cost/" + Itr.GetName(), "0").toString());
        Itr.SetComment(Conf.value("Comment/" + Itr.GetName(), "").toString());
    }
}

int SalaryStatics::GetTotalSum()
{
    int Sum = 0;

    for (Commit const& Itr : Commits)
    {
        Sum += Itr.GetCost().toInt(nullptr, 0);
    }

    return Sum;
}

void SalaryStatics::SaveAll()
{
    QSettings Conf("SalaryData.ini", QSettings::IniFormat);
    Conf.setIniCodec("UTF-8");

    Conf.setValue("LastCommit", LastCommit);

    for (Commit& Itr : Commits)
    {
        if (Itr.Cost != "0" || Conf.contains("Cost/" + Itr.GetName()))
        {
            Conf.setValue("Cost/" + Itr.GetName(), Itr.Cost);
        }

        if (!Itr.GetComment().isEmpty())
        {
            Conf.setValue("Comment/" + Itr.GetName(), Itr.GetComment());
        }
    }
}

void SalaryStatics::GenerateReport()
{
    if (Commits.isEmpty())
    {
        return;
    }

    QFile file("./" + QDateTime::currentDateTime().toString("yyyy_MM_dd_") + "Report.txt");

    if (!file.open(QFile::ReadWrite | QFile::Text))
    {
        return;
    }

    QTextStream TStream(&file);
    TStream.setCodec("UTF-8");
    file.resize(0);
    QString FilesText;

    for (Commit const& Com : Commits)
    {
        FilesText += Com.GetMessage();
        FilesText += "\n";
        FilesText += "\n[" + Com.Cost + "$]";

        if (!Com.GetComment().isEmpty())
        {
            FilesText += " (" + Com.GetComment() + ")";
        }

        FilesText += "\n\n--------------------------------------------------------------------------------\n\n";
    }

    if (Commits.size() > 1)
    {
        QString To = Commits.front().GetDate();
        To = To.mid(0, To.indexOf(" "));
        FilesText += "\nTo:   " + To;

        QSettings Conf("SalaryData.ini", QSettings::IniFormat);
        Conf.setIniCodec("UTF-8");

        QString From = Conf.value("LastCommitDate", "").toString();

        if (!From.isEmpty())
        {
            FilesText += "\nFrom: " + From;
        }
    }

    FilesText += "\n\n\n\n";
    FilesText += "TOTAL SUM: " + QString::number(GetTotalSum()) + " $\n";

    TStream << FilesText;
    file.close();
}

void SalaryStatics::SaveLastCommit(Commit* com)
{
    LastCommit = com->GetName();

    QSettings Conf("SalaryData.ini", QSettings::IniFormat);
    Conf.setIniCodec("UTF-8");

    QString Date = com->GetDate();
    Conf.setValue("LastCommitDate", Date.mid(0, Date.indexOf(" ")));
}
