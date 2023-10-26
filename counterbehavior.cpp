#include "counterbehavior.h"

CounterBehavior::CounterBehavior()
{
    count = 1;
}

bool CounterBehavior::doPrisonerBehavior(Light *L)
{
    if(L->thelightison)
    {
        L->thelightison = false;
        count++;
    }
    if (count == 100)
        return true;
    return false;
}
