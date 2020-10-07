#ifndef SALARYSTATICS_H
#define SALARYSTATICS_H
#include <QVector>

class SalaryStatics
{
    static void GetCommitsLog(QString& Log);

    static QString LastCommit;

public:
    static QVector<class Commit> Commits;
    static void UpdateCommitsList();
    static int GetTotalSum();
    static void SaveAll();
    static void GenerateReport();
    static void SaveLastCommit(Commit* com);

};

#endif // SALARYSTATICS_H
