
#include "Falcon9.h"
#include "Falcon.h"

Falcon9::Falcon9(){
    
}


// Observer functions
bool Falcon9::getStage2() {
    return stage2;
}
    
void Falcon9::setStage2(bool stage){
    stage2 = stage;
}