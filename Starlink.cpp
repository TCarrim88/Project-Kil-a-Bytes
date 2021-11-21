#include <iostream>
#include <string>
#include "StarlinkSatellites.h"
#include "Starlink.h"
using namespace std;

Starlink::Starlink()
{

}

StarlinkSatellites * Starlink:: cluster()
{
    return new Starlink(*this);
}

// Observer
void Starlink::setOrbiting(bool o) {
    orbiting = o;
}
bool Starlink:: getOrbiting() {
    return orbiting;
}
void Starlink:: setDeployed(bool d) {
    deployed = d;
}
bool Starlink:: getDeployed() {
    return deployed;
}