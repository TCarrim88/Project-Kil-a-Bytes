
#ifndef __Falcon_h__
#define __Falcon_h__

#include "Craft.h"
#include "FalconObserver.h"
#include <vector>

using namespace std;

// class Craft;
class Falcon;
//Abstract Fact: AbstProd
class Falcon: public Craft
{
    private:
    //bool refurbState (needed for actual launch)
    
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

    // Observer Functions
    void attach(FalconObserver* o);
    void detach(FalconObserver* o);
    void notify();

private:
    vector<FalconObserver*> observerList;
};

#endif
