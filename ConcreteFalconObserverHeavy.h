#pragma once
#include "FalconObserver.h"
#include "FalconHeavy.h"

class ConcreteFalconObserverHeavy : public FalconObserver {
public:
    ConcreteFalconObserverHeavy(FalconHeavy* falc);
    void update();
    void print();

private:
    FalconHeavy* falconCraft;
    bool inStage2;
};