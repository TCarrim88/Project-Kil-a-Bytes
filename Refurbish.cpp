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
    if(falconCraft->getLandState()){  //rocket landing was successful, can refurbish rocket

        cout << "Rocket has been refurbished! Proceed to Actual Launch." << endl;
        falconCraft->setRefurbState(true);
    }
    else{  //Rocket landing was unsuccessful
        cout << "Rocket Landing was unsuccessful. Cannot refurbish rocket. Actual Launch cannot take place." << endl;
        falconCraft->setRefurbState(false);
    }
    
}