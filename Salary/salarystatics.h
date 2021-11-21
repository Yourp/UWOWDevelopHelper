#ifndef SALARYSTATICS_H
#define SALARYSTATICS_H
#include <QVector>

/** Static methods for handle of salary. */
class SalaryStatics
{
    /** Get a several last commits which we pushed to repository. */
    static void GetCommitsLog(QString& Log);

    /** The name of last commit which we pushed to repository. */
    static QString LastCommit;

public:

    /** Contains the names of the last few commits. */
    static QVector<class Commit> Commits;

    /** Check a new commits and add them to Commits vector if need. */
    static void UpdateCommitsList();

    /** Calculate total sum of the commits. */
    static int GetTotalSum();

    /** Save all information of the commits to the SalaryData file. */
    static void SaveAll();

    /** Create a report file of a work of month. */
    static void GenerateReport();

    /** Save a name of last commit to the SalaryData file. */
    static void SaveLastCommit(Commit* com);

};

#endif // SALARYSTATICS_H
