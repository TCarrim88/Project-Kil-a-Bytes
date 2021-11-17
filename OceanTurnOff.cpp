#include "OceanTurnOff.h"
#include "Craft.h"
#include "FalconTest.h"
#include <iostream>
using namespace std;

OceanTurnOff::OceanTurnOff(Falcon* falcon){
    this.falconCraft = falcon; 
}

void OceanTurnOff::launchExecute(){
    falconCraft->oceanOff();
    cout << "Engines Turned off" << endl;
    falconCraft->setEngineState(false); //switch engines off
}