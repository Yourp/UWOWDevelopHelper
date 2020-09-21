#ifndef SCRIPTSOBJECT_H
#define SCRIPTSOBJECT_H

#include <QString>


class ObjectBase
{
public:

    virtual ~ObjectBase() {}

    virtual QString const GetName() const = 0;
};

#endif // SCRIPTSOBJECT_H
