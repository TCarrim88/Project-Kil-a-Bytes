#include "Falcon9.h"
#include "Falcon.h"
#include <vector>
using namespace std;

Falcon9::Falcon9(){
    this.engineState = false; //engines off by default
   this.launchState = false;
   this.landState = false;
   this.refurbState = false;
   this.staticState = false;
}
// Observer functions
bool Falcon9::getStage2() {
    return stage2;
}
    
void Falcon9::setStage2(bool stage){
    stage2 = stage;
}
   

//===============IMPLEMENTATION OF COMMAND FUNCTIONS

//EnginesState getter+setter
bool Falcon9::getEngineState(){
    return this.engineState;
}

void Falcon9::setEngineState(bool state){
    this.engineState = state;
}

//LaunchState getter+setter
bool Falcon9::getLaunchState(){
    return this.launchState;
}

void Falcon9::setLaunchState(bool state){
    this.launchState = state;
}

//LandState getter+setter
bool Falcon9::getLandState(){
    return this.landState;
}

void Falcon9::setLandState(bool state){
    this.landState = state;
}

//RefurbState getter+setter
bool Falcon9::getRefurbState(){
    return this.refurbState;
}

void Falcon9::setRefurbState(bool state){
    this.refurbState = state;
}

bool Falcon9::getStaticState(){
    return this.staticState;
}

void Falcon9::setStaticState(bool state){
    this.staticState = state;
}

void Falcon9::staticFire(){
    //switch engines on and then off
    this->oceanOn();
    this->oceanOff();
    cout << "Static Test was successful!" << endl;
}

void Falcon9::oceanLaunch(){

    if(getEngineState()){ //engine is on, launch can proceed

        cout << "Rocket has been launched for droneShip-landing in the ocean." << endl;
        setLaunchState(true);
    }
    else{   //engine is off, launch unsuccessful

        cout << "Rocket Launch was Unsuccessful as the Engines are not turned on." << endl;
        setLaunchState(false);
    }
}

void Falcon9::oceanOn(){
    cout << "Engines Fired up." << endl;
    setEngineState(true); //switch engines on
}

void Falcon9::oceanOff(){
    cout << "Engines Turned off" << endl;
    setEngineState(false); //switch engines off
}

void Falcon9::refurbish(){
    if(getLandState()){  //rocket landing was successful, can refurbish rocket

        cout << "Rocket has been refurbished! Proceed to Actual Launch." << endl;
        setRefurbState(true);
    }
    else{  //Rocket landing was unsuccessful
        cout << "Rocket Landing was unsuccessful. Cannot refurbish rocket. Actual Launch cannot take place." << endl;
        setRefurbState(false);
    }
}

void Falcon9::oceanLand(){
    if(getLaunchState()){ //Rocket was successfully launched, can procceed with landing process

        cout << "Rocket has successfully landed on drone ship in the ocean" << endl;
        setLandState(true);
    }
   else{ //launch was unsuccessful
        cout << "Rocket cannot Land as it has not been Launched." << endl;
        setLandState(false);
   }
}

//=============== END OF IMPLEMENTATION OF COMMAND FUNCTIONS


//Decorator
void Falcon9::add(CraftComponent* c){
    components.push_back(c);
}

void Falcon9::print(){
    vector<CraftComponent*>::iterator it;
    for (it = components.begin(); it != components.end(); ++it)
    (*it)->print();
}

