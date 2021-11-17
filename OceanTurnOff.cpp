#include "OceanTurnOff.h"
#include "Craft.h"
#include "FalconTest.h"
#include <iostream>
using namespace std;

OceanTurnOff::OceanTurnOff(Falcon* falcon){
    falconCraft = falcon;
}

void OceanTurnOff::launchExecute(){
    falconCraft->execute();
    cout << "Engines Turned off" << endl;
}