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