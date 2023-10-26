#ifndef COUNTER_H
#define COUNTER_H
#include "light.h"

#include <prisoner.h>
#include <Warden.h>
class Counter:public Prisoner
{
public:
    int count;
    bool enterRoom(Light *L);
};

#endif // COUNTER_H
