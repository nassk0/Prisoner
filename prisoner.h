#ifndef PRISONER_H
#define PRISONER_H
#include "light.h"
#include "isstrategy.h"
#include "counterbehavior.h"
#include "defaultbehavior.h"



class Prisoner
{

public:
    Prisoner();
    bool enterRoom(Light *L);
    void setStrategy(IsStrategy *S);
    IsStrategy *strategy;
};

#endif // PRISONER_H
