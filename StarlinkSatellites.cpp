#include <iostream>
#include <string>
#include <vector>
#include "Colleague.h"
#include "StarlinkLaunchObserver.h"
using namespace std;

class StarlinkSatellites //prototype
{
    public:
	int id;
    Colleague* col;
    StarlinkSatellites(){};
    virtual StarlinkSatellites* cluster()=0;

    // Observer
    // ***** Attach an Observer to observerList
    void attach(StarlinkLaunchObserver* s){
        observerList.push_back(s);
    }

    // ***** Detach Observer from observerList
    void detach(StarlinkLaunchObserver* s){
        bool found = false;
	    vector<StarlinkLaunchObserver*>::iterator it = observerList.begin();
	    while ((it != observerList.end()) && (! found))
	    {
		    if (*it == s)
		    {
			    found = true;
                observerList.erase(it);
	        }
		    ++it;
	    }
    }

    // ***** Notify Observers in observerList
    void notify(){
        vector<StarlinkLaunchObserver*>::iterator it;
	    for (it = observerList.begin(); it != observerList.end(); ++it)
	    {
		    (*it)->update();
	    }
    }


    private:
    // Observer
    // ***** List of StarlinkLaunchObservers
    vector<StarlinkLaunchObserver*> observerList;
};

class Starlink: public StarlinkSatellites //concrete prototype
{
    public:
    Starlink(): StarlinkSatellites(){};
    StarlinkSatellites * cluster()
    {
        return new Starlink(*this);
    }

    // Observer
    void setOrbiting(bool o) {
        orbiting = o;
    }
    bool getOrbiting() {
        return orbiting;
    }
        void setDeployed(bool d) {
        deployed = d;
    }
    bool getDeployed() {
        return deployed;
    }

    private:
    // Observer
    bool orbiting;
    bool deployed;
};
