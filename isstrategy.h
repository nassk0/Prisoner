#ifndef ISSTRATEGY_H
#define ISSTRATEGY_H
#include "light.h"

class IsStrategy
{
public:
    IsStrategy();
    virtual bool doPrisonerBehavior(Light *L) = 0;
};

#endif // ISSTRATEGY_H
