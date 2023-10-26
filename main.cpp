#include <iostream>
#include <time.h>

#include <prisoner.h>
#include <Warden.h>
#include <counter.h>
using namespace std;





int main()
{
    Warden *warden = new Warden();
    warden->startExperiment();
}
