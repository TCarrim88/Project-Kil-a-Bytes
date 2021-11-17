
#include "OceanLaunch.h"
#include "Craft.h"
#include "FalconTest.h"
#include <iostream>
using namespace std;

OceanLaunch::OceanLaunch(Falcon* falcon){
    this.falconCraft = falcon;
}

void OceanLaunch::launchExecute(){
    falconCraft->oceanLaunch();
    cout << "Rocket has been launched for droneShip-landing in the ocean." << endl;
    
}