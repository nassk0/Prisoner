#ifndef WARDEN_H
#define WARDEN_H
#include "prisoner.h"
#include "light.h"
#include "isstrategy.h"

class Warden
{
public:
    Warden();
    void startExperiment();
    void findStrategy();
private:
    Light *b;
    Prisoner *p;
    int counter;
};

#endif // WARDEN_H
