#ifndef SALARYSTATICS_H
#define SALARYSTATICS_H
#include <QVector>

class SalaryStatics
{
public:
    static QVector<class Commit> Commits;

    static void UpdateCommitsList(QString const& CommitsLog);
};

#endif // SALARYSTATICS_H
