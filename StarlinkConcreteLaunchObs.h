#pragma once
#include "StarlinkLaunchObserver.h"
#include "StarlinkSatellites.h"

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