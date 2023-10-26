#ifndef COUNTERBEHAVIOR_H
#define COUNTERBEHAVIOR_H
#include <isstrategy.h>

class CounterBehavior:public IsStrategy
{
public:
    CounterBehavior();
    bool doPrisonerBehavior(Light *L);
    int count;
};


#endif // COUNTERBEHAVIOR_H
