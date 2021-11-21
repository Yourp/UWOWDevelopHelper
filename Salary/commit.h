#ifndef COMMIT_H
#define COMMIT_H
#include <QString>

class Commit
{
    friend class SalaryStatics;

    /** The name (hash) of commit in repository. */
    QString Name;

    /** The description of commit witch we write when push to repository. */
    QString Message;

    /** The date of push. */
    QString Date;

    /** The additional comment of commit for report of month. */
    QString Comment;

    /** The cost of our work for every commit. */
    QString Cost;

public:
    Commit() {}

    QString const& GetName()    const { return Name;     }
    QString const& GetMessage() const { return Message;  }
    QString const& GetDate()    const { return Date;     }
    QString const& GetComment() const { return Comment;  }
    QString const  GetCost()    const { return Cost != "0" ? Cost : ""; }

    void SetName    (QString const&     name) { Name    =    name; }
    void SetMessage (QString const&  message) { Message = message; }
    void SetDate    (QString const&     date) { Date    =    date; }
    void SetComment (QString const&  comment) { Comment = comment; }
    void SetCost    (QString const&     cost) { Cost    =    cost; }
};

#endif // COMMIT_H
