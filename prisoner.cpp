#include "prisoner.h"
#include "light.h"
Prisoner::Prisoner()
{

}

bool Prisoner::enterRoom(Light *L)
{
    return strategy->doPrisonerBehavior(L);

}

void Prisoner::setStrategy(IsStrategy *S)
{
    strategy = S;
}




