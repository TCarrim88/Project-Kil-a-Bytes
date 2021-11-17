#include "ConcreteFalconObserverHeavy.h"

ConcreteFalconObserverHeavy::ConcreteFalconObserverHeavy(FalconHeavy* falc) {
    falconCraft = falc;
    inStage2 = false;
}

void ConcreteFalconObserverHeavy::update() {
    if (falconCraft->getStage2())
    {
        inStage2 = true;
        return;
    }
    inStage2 = false;
}    

void ConcreteFalconObserverHeavy::print() {
    if (inStage2)
    {
        cout << "Falcon Heavy In Stage 2\n";
        return;
    }
    cout << "Falcon Heavy In Stage 1\n";
}