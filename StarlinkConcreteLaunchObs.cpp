#include "StarlinkConcreteLaunchObs.h"

StarlinkConcreteLaunchObs::StarlinkConcreteLaunchObs(Starlink* s) {
    starSat = s;
}

void StarlinkConcreteLaunchObs::update() {
    inOrbit = starSat->getOrbiting();
    deployed = starSat->getDeployed();
}

void StarlinkConcreteLaunchObs::print() {
    // If the Satellites have been detached from the Falcon and are in space
    if (deployed)
    {
        cout << "Starlink Satellites have been deployed\n";
    }
    else
    {
        cout << "Starlink Satellites have not been deployed\n";
    }

    // If the Satellites are spread out and Orbiting
    if (inOrbit)
    {
        cout << "Starlink Satellites are now Orbiting Earth\n";
    }
    else
    {
        cout << "Starlink Satellites are not yet Orbiting Earth\n";
    }
}