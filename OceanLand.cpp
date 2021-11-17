#include "OceanLand.h"
#include "Craft.h"
#include "FalconTest.h"
#include <iostream>
using namespace std;

OceanLand::OceanLand(Falcon* falcon){
    this.falconCraft = falcon;
}

void OceanLand::launchExecute(){

    falconCraft->oceanLand();
    if(falconCraft->getLaunchState()){ //Rocket was successfully launched, can procceed with landing process

        cout << "Rocket has successfully landed on drone ship in the ocean" << endl;
        falconCraft->setLandState(true);
    }
   else{ //launch was unsuccessful
        cout << "Rocket cannot Land as it has not been Launched." << endl;
        falconCraft->setLandState(false);
   }
}