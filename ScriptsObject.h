#ifndef SCRIPTSOBJECT_H
#define SCRIPTSOBJECT_H

#include <QString>


class ScriptsObject
{
public:

    virtual ~ScriptsObject() {}

    virtual QString const GetName() const = 0;
};

#endif // SCRIPTSOBJECT_H
