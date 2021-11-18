#include "StaticTest.h"
#include "Craft.h"
#include "FalconTest.h"
#include <iostream>
using namespace std;

StaticTest::StaticTest(Falcon *falcon){
    falconCraft = falcon;
}

void StaticTest::launchExecute(){
    falconCraft->staticFire();
}