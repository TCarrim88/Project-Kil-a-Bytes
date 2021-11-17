#pragma once
#include "FalconObserver.h"
#include "Falcon9.h"

class ConcreteFalconObserver9 : public FalconObserver {
public:
    ConcreteFalconObserver9(Falcon9* falc);
    void update();
    void print();

private:
    Falcon9* falconCraft;
    bool inStage2;
};

