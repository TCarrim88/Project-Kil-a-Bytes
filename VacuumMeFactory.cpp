#include "VacuumMEFactory.h"
#include "Engine.h"
#include <iostream>
using namespace std;

CraftComponent *VacuumMEFactory::createEngine(){
    return new  VacuumMerlinEngine();
}