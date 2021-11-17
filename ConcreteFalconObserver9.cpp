#include "ConcreteFalconObserver9.h"

ConcreteFalconObserver9::ConcreteFalconObserver9(Falcon9* falc) {
    falconCraft = falc;
    inStage2 = false;
}

void ConcreteFalconObserver9::update() {
    if (falconCraft->getStage2())
    {
        inStage2 = true;
        return;
    }
    inStage2 = false;
}    

void ConcreteFalconObserver9::print() {
    if (inStage2)
    {
        cout << "Falcon 9 In Stage 2\n";
        return;
    }
    cout << "Falcon 9 In Stage 1\n";
}

