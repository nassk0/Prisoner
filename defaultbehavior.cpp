#include "defaultbehavior.h"

DefaultBehavior::DefaultBehavior()
{
    isFirst = false;
}

bool DefaultBehavior::doPrisonerBehavior(Light *L)
{
    if (!isFirst)
    {
        if(!L->thelightison){
            L->thelightison = true;
            isFirst = true;
        }
    }
    return false;

}
