#pragma once
#include "Starlink.h"
#include "StarlinkLaunchObserver.h"
//#include "StarlinkSatellites.cpp"

class StarlinkConcreteLaunchObs: public StarlinkLaunchObserver {
public:
    StarlinkConcreteLaunchObs(Starlink* s);
    void update();
    void print();

private:
    bool deployed;
    bool inOrbit;
    Starlink* starSat;
};