#include "salarystatics.h"
#include "Salary/commit.h"
#include "textstatics.h"
#include <QProcess>
#include <QSettings>

QVector<Commit> SalaryStatics::Commits;



void SalaryStatics::GetCommitsLog(QString &Log)
{
    QProcess proc;
    proc.setWorkingDirectory("c:/Users/Yourp/uWoW/735");
    proc.start("C:\\Program Files\\Git\\bin\\bash.exe", {"-c", "git log --author=ysmart --date=iso -100"});
    proc.waitForFinished();
    Log = proc.readAll();
    proc.close();
}

void SalaryStatics::UpdateCommitsList()
{
    QString CommitsLog;
    GetCommitsLog(CommitsLog);

    Commits.clear();

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

        Start = CodeStatics::GetIndexAfterString(&CommitsLog, "Date:   ", End);
        End = CommitsLog.indexOf(" +", Start);

        com.SetDate(CommitsLog.mid(Start, End - Start));

        Start = CodeStatics::GetIndexAfterString(&CommitsLog, "\n    ", End);
        End = CommitsLog.indexOf("\n\ncommit ", Start);

        if (End < 0)
        {
            com.SetMessage(CommitsLog.mid(Start, CommitsLog.indexOf("\n", Start) - Start));
            Commits.push_back(com);
            break;
        }

        com.SetMessage(CommitsLog.mid(Start, End - Start));
        Commits.push_back(com);
    }
}

const QString SalaryStatics::GetTotalSum()
{
    int Sum = 0;

    for (auto const& Itr : Commits)
    {
        Sum += Itr.GetCost().toInt(nullptr, 0);
    }

    return QString::number(Sum) + " $";
}

void SalaryStatics::Load()
{
    QSettings Conf("SalaryData.ini", QSettings::IniFormat);

    for (auto& Itr : Commits)
    {
        Itr.SetCost(Conf.value("Cost/" + Itr.GetName(), "0").toString());
        Itr.SetComment(Conf.value("Comment/" + Itr.GetName(), "").toString());
    }
}

void SalaryStatics::SaveAll()
{
    QSettings Conf("SalaryData.ini", QSettings::IniFormat);

    Conf.remove("Cost");
    Conf.remove("Comment");

    for (auto& Itr : Commits)
    {
        if (!Itr.GetCost().isEmpty() && Itr.GetCost() != "0")
        {
            Conf.setValue("Cost/" + Itr.GetName(), Itr.GetCost());
        }

        if (!Itr.GetComment().isEmpty())
        {
            Conf.setValue("Comment/" + Itr.GetName(), Itr.GetComment());
        }
    }
}
