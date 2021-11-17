#include "Refurbish.h"
#include "Craft.h"
#include "FalconTest.h"
#include <iostream>
#include <string>

using namespace std;

Refurbish::Refurbish(Falcon *falcon){
    falconCraft = falcon;
}

void Refurbish::launchExecute(){
    falconCraft->execute();
    cout << "Rocket has been refurbished. Proceed to Actual Launch." << endl;
}