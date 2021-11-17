#include "FalconHeavy.h"
#include "Falcon.h"
#include <iostream>
using namespace std;

FalconHeavy::FalconHeavy(){
   this.engineState = false; //engines off by default
   this.launchState = false;
   this.landState = false;
}

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