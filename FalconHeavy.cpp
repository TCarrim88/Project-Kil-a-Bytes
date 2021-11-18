#include "FalconHeavy.h"
#include "Falcon.h"
#include <iostream>
using namespace std;

FalconHeavy::FalconHeavy(){
   this.engineState = false; //engines off by default
}

// Observer functions
bool FalconHeavy::getStage2() {
    return stage2;
}
    
void FalconHeavy::setStage2(bool stage){
    stage2 = stage;
}
   this.launchState = false;
   this.landState = false;
   this.refurbState = false;
}

//===============IMPLEMENTATION OF COMMAND FUNCTIONS

//EnginesState getter+setter
bool FalconHeavy::getEngineState(){
    return this.engineState;
}

void FalconHeavy::setEngineState(bool state){
    this.engineState = state;
}

//LaunchState getter+setter
bool FalconHeavy::getLaunchState(){
    return this.launchState;
}

void FalconHeavy::setLaunchState(bool state){
    this.launchState = state;
}

//LandState getter+setter
bool FalconHeavy::getLandState(){
    return this.landState;
}

void FalconHeavy::setLandState(bool state){
    this.landState = state;
}

//RefurbState getter+setter
bool FalconHeavy::getRefurbState(){
    return this.refurbState;
}

void FalconHeavy::setRefurbState(bool state){
    this.refurbState = state;
}

//=============== END OF IMPLEMENTATION OF COMMAND FUNCTIONS
