
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
    
}