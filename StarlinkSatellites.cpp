#include <iostream>
#include <string>
#include <vector>
//#include "Colleague.h"
#include "StarlinkSatellites.h"
#include "StarlinkLaunchObserver.h"
using namespace std;

StarlinkSatellites::StarlinkSatellites(){

}

void StarlinkSatellites:: attach(StarlinkLaunchObserver* s){
    observerList.push_back(s);
}

void StarlinkSatellites::detach(StarlinkLaunchObserver* s){
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
void StarlinkSatellites:: notify(){
    vector<StarlinkLaunchObserver*>::iterator it;
    for (it = observerList.begin(); it != observerList.end(); ++it)
    {
        (*it)->update();
    }
}


