#include "FalconHeavy.h"
#include "Falcon.h"
#include <iostream>
#include <vector>
using namespace std;

FalconHeavy::FalconHeavy(){
   engineState = false; //engines off by default
   launchState = false;
   landState = false;
   refurbState = false;
   staticState = false;
}

// Observer functions
bool FalconHeavy::getStage2() {
    return stage2;
}
    
void FalconHeavy::setStage2(bool stage){
    stage2 = stage;
}


//===============IMPLEMENTATION OF COMMAND FUNCTIONS

//EnginesState getter+setter
bool FalconHeavy::getEngineState(){
    return engineState;
}

void FalconHeavy::setEngineState(bool state){
    engineState = state;
}

//LaunchState getter+setter
bool FalconHeavy::getLaunchState(){
    return launchState;
}

void FalconHeavy::setLaunchState(bool state){
    launchState = state;
}

//LandState getter+setter
bool FalconHeavy::getLandState(){
    return landState;
}

void FalconHeavy::setLandState(bool state){
    landState = state;
}

//RefurbState getter+setter
bool FalconHeavy::getRefurbState(){
    return refurbState;
}

void FalconHeavy::setRefurbState(bool state){
    refurbState = state;
}

bool FalconHeavy::getStaticState(){
    return staticState;
}

void FalconHeavy::setStaticState(bool state){
    staticState = state;
}

//conc comm functions
void FalconHeavy::staticFire(){
    //switch engines on and then off
    this->oceanOn();
    this->oceanOff();
    cout << "Static Test was successful!" << endl;
}

void FalconHeavy::oceanLaunch(){

    if(getEngineState()){ //engine is on, launch can proceed

        cout << "Rocket has been launched for droneShip-landing in the ocean." << endl;
        setLaunchState(true);
    }
    else{   //engine is off, launch unsuccessful

        cout << "Rocket Launch was Unsuccessful as the Engines are not turned on." << endl;
        setLaunchState(false);
    }
}

void FalconHeavy::oceanOn(){
    cout << "Engines Fired up." << endl;
    setEngineState(true); //switch engines on
}

void FalconHeavy::oceanOff(){
    cout << "Engines Turned off" << endl;
    setEngineState(false); //switch engines off
}

void FalconHeavy::refurbish(){
    if(getLandState()){  //rocket landing was successful, can refurbish rocket

        cout << "Rocket has been refurbished! Proceed to Actual Launch." << endl;
        setRefurbState(true);
    }
    else{  //Rocket landing was unsuccessful
        cout << "Rocket Landing was unsuccessful. Cannot refurbish rocket. Actual Launch cannot take place." << endl;
        setRefurbState(false);
    }
}

void FalconHeavy::oceanLand(){
    if(getLaunchState()){ //Rocket was successfully launched, can procceed with landing process

        cout << "Rocket has successfully landed on drone ship in the ocean" << endl;
        setLandState(true);
        setEngineState(false); //switch off engines after landing
    }
   else{ //launch was unsuccessful
        cout << "Rocket cannot Land as it has not been Launched." << endl;
        setLandState(false);
   }
}

//=============== END OF IMPLEMENTATION OF COMMAND FUNCTIONS


//Decorator
void FalconHeavy::add(CraftComponent* c){
    components.push_back(c);
}

void FalconHeavy::print(){
    vector<CraftComponent*>::iterator it;
    for (it = components.begin(); it != components.end(); ++it)
    (*it)->print();
}
