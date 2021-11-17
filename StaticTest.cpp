#include "StaticTest.h"
#include "Craft.h"
#include "FalconTest.h"
#include <iostream>
using namespace std;

StaticTest::StaticTest(Falcon *falcon){
    falconCraft = falcon;
}

void StaticTest::launchExecute(){
    falconCraft->execute();
    cout << "Engines Fired up successfully" << endl;
}