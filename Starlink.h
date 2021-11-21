#ifndef STARLINK_H
#define STARLINK_H
using namespace std;
#include "Colleague.h"
#include "StarlinkSatellites.h"

class Starlink: public StarlinkSatellites //concrete prototype
{
    public:
	int id;
    Colleague* col;
    Starlink();
    StarlinkSatellites * cluster();

    // Observer
    void setOrbiting(bool o);
    bool getOrbiting();
    void setDeployed(bool d);
    bool getDeployed();

    private:
    // Observer
    bool orbiting;
    bool deployed;
};
#endif