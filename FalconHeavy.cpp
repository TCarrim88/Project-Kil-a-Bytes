#include "FalconHeavy.h"
#include "Falcon.h"

FalconHeavy::FalconHeavy(){
    
}
void FalconHeavy::execute(){

}

// Observer functions
bool FalconHeavy::getStage2() {
    return stage2;
}
    
void FalconHeavy::setStage2(bool stage){
    stage2 = stage;
}