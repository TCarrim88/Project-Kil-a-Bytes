#include "OceanLand.h"
#include "Craft.h"
#include "FalconTest.h"
#include <iostream>
using namespace std;

OceanLand::OceanLand(Falcon* falcon){
    falconCraft = falcon;
}

void OceanLand::launchExecute(){
    falconCraft->execute();
    cout << "Rocket has landed on drone ship in the ocean" << endl;
}