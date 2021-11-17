
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
    if(falconCraft->getEngineState()){ //engine is on, launch can proceed

        cout << "Rocket has been launched for droneShip-landing in the ocean." << endl;
        falconCraft->setLaunchState(true);
    }
    else{   //engine is off, launch unsuccessful

        cout << "Rocket Launch was Unsuccessful as the Engines are not turned on." << endl;
        falconCraft->setLaunchState(false);
    }
    
    
}