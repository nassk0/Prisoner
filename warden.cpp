#include "Warden.h"
#include "light.h"
#include <iostream>
#include <time.h>

using namespace std;
Warden::Warden()
{
    b = new Light();
    counter = 99;
    p = new Prisoner[100];
}

void Warden::startExperiment()
{
    findStrategy();
    b->thelightison = false;
    bool isEnd = false;
    while (!isEnd)
    {
        int n = rand() % 100;
        isEnd = p[n].enterRoom(b);
        cout << isEnd;
    }

}

void Warden::findStrategy()
{
   for (int i = 0;i < 100;i ++){
       p[i].setStrategy(new DefaultBehavior());
   if(i == counter)
       p[i].setStrategy(new CounterBehavior());
   }
}


