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

    falconCraft->refurbish();
}