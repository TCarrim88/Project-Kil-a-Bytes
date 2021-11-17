
#ifndef __Falcon_h__
#define __Falcon_h__

#include "Craft.h"

// class Craft;
class Falcon;
//Abstract Fact: AbstProd
class Falcon: public Craft
{
    public:
    Falcon();

    //Command functions:
    //virtual void execute();
    virtual void staticFire();
    virtual void oceanLaunch();
    virtual void oceanLand();
    virtual void oceanOn();
    virtual void oceanOff();
    virtual void refurbish();
};

#endif
