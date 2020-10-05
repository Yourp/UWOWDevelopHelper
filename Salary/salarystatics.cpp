#include "salarystatics.h"
#include "Salary/commit.h"
#include "textstatics.h"

QVector<Commit> SalaryStatics::Commits;



void SalaryStatics::UpdateCommitsList(const QString &CommitsLog)
{
    if (CommitsLog.isEmpty())
    {
        return;
    }

    int Start = 0;
    int End = 0;
    QString Variable;

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
