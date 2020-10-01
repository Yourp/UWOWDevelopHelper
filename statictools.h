#ifndef STATICTOOLS_H
#define STATICTOOLS_H
#include <QVector>

class StaticTools
{
    StaticTools() {}
public:

    template<class To, class From>
    static QVector<To *> ConvertQVector(QVector<From*> const& Source);

};

template<class To, class From>
QVector<To *> StaticTools::ConvertQVector(QVector<From *> const& Source)
{
    QVector<To*> Result;

    for (auto const& Itr : Source)
    {
        if (To* Element = dynamic_cast<To*>(Itr))
        {
            Result.push_back(Element);
        }
    }
    return Result;
}

#endif // STATICTOOLS_H
