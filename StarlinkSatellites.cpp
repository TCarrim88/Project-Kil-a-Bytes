#include <iostream>
#include <string>
using namespace std;

class StarlinkSatellites //prototype
{
    public:
    StarlinkSatellites(){};
    virtual StarlinkSatellites* cluster()=0;
};

class Starlink: public StarlinkSatellites //concrete prototype
{
    public:
    Starlink(): StarlinkSatellites(){};
    StarlinkSatellites * cluster()
    {
        return new Starlink(*this);
    }
};