
#include "OceanLaunch.h"
#include "Craft.h"
#include "FalconTest.h"
#include <iostream>
using namespace std;

OceanLaunch::OceanLaunch(Falcon* falcon){
    falconCraft = falcon;
}

void OceanLaunch::launchExecute(){
    falconCraft->execute();
    cout << "Rocket has been launched for drone ship landing in the ocean." << endl;
}