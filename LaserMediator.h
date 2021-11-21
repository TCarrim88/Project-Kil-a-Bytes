#ifndef LASERMEDIATOR_H
#define LASERMEDIATOR_H
#include "Mediator.h"
using namespace std;
class LaserMediator:public Mediator
{
private:
    /* data */
    string name;
public:
    LaserMediator(/* args */string);
    ~LaserMediator();
};

#endif