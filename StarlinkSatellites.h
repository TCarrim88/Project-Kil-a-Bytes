#ifndef STARLINKSATELLITE_H
#define STARLINKSATELLITE_H
#include "StarlinkLaunchObserver.h"

#include <vector>
using namespace std;

class StarlinkSatellites //prototype
{
    public:
	
    StarlinkSatellites();
    virtual StarlinkSatellites* cluster()=0;

    // Observer
    // ***** Attach an Observer to observerList
    void attach(StarlinkLaunchObserver* s);

    // ***** Detach Observer from observerList
    void detach(StarlinkLaunchObserver* s);

    // ***** Notify Observers in observerList
    void notify();


    private:
    // Observer
    // ***** List of StarlinkLaunchObservers
    vector<StarlinkLaunchObserver*> observerList;
};
#endif