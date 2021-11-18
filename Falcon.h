
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
    virtual void staticFire() = 0;
    virtual void oceanLaunch() = 0;
    virtual void oceanLand() = 0;
    virtual void oceanOn() = 0;
    virtual void oceanOff() = 0;
    virtual void refurbish() = 0;

    // Observer Functions
    void attach(FalconObserver* o);
    void detach(FalconObserver* o);
    void notify();

private:
    vector<FalconObserver*> observerList;
};

#endif
