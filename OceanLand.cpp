#include "OceanLand.h"
#include "Craft.h"
#include "FalconTest.h"
#include <iostream>
using namespace std;

OceanLand::OceanLand(Falcon* falcon){
    falconCraft = falcon;
}

void OceanLand::launchExecute(){

    falconCraft->oceanLand();
    
}