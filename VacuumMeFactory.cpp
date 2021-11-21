#include "VacuumMEFactory.h"
#include "Engine.h"
#include <iostream>
using namespace std;

CraftComponent *VacuumMEFactory::createEngine(){
    cout<<"Vaccum Merlin Engine Created"<<endl;
    return new VacuumMerlinEngine();
}

 void VacuumMEFactory::print(){}