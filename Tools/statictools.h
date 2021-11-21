#ifndef STATICTOOLS_H
#define STATICTOOLS_H
#include <QVector>

class StaticTools
{
    StaticTools() {}
public:

    /** Casting dynamically all elements of the vector. */
    template<class To, class From>
    static QVector<To *> ConvertQVectorTo(QVector<From*> const& Source);

};

template<class To, class From>
QVector<To *> StaticTools::ConvertQVectorTo(QVector<From *> const& Source)
{
    QVector<To*> Result;

    for (From* Itr : Source)
    {
        if (To* Element = dynamic_cast<To*>(Itr))
        {
            Result.push_back(Element);
        }
    }
    return Result;
}

#endif // STATICTOOLS_H
