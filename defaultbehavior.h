#ifndef DEFAULTBEHAVIOR_H
#define DEFAULTBEHAVIOR_H
#include <isstrategy.h>
#include "light.h"


class DefaultBehavior:public IsStrategy
{
public:
    DefaultBehavior();
    bool doPrisonerBehavior(Light *L);
    bool isFirst;
};

#endif // DEFAULTBEHAVIOR_H
