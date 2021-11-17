
#include "OceanTurnOn.h"
#include "Craft.h"
#include "FalconTest.h"
#include <iostream>
#include <string>

using namespace std;

OceanTurnOn::OceanTurnOn(Falcon *falcon){
    this.falconCraft = falcon;
}

void OceanTurnOn::launchExecute(){
    falconCraft->oceanOn();
    cout << "Engines turned on." << endl;
    falconCraft.getEngineState(true); //switch engines on
}