#ifndef SALARYSTATICS_H
#define SALARYSTATICS_H
#include <QVector>

class SalaryStatics
{
    static void GetCommitsLog(QString& Log);

public:
    static QVector<class Commit> Commits;

    static void UpdateCommitsList();

    static QString const GetTotalSum();

    static void Load();

    static void SaveAll();
};

#endif // SALARYSTATICS_H
