#include "Falcon9.h"
#include "Falcon.h"
using namespace std;

Falcon9::Falcon9(){
    
}


// Observer functions
bool Falcon9::getStage2() {
    return stage2;
}
    
void Falcon9::setStage2(bool stage){
    stage2 = stage;
}
    this.engineState = false; //engines off by default
   this.launchState = false;
   this.landState = false;
   this.refurbState = false;
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

//=============== END OF IMPLEMENTATION OF COMMAND FUNCTIONS
