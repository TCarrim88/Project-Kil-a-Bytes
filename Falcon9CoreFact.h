#ifndef __Falcon9CoreFact_h__
#define __Falcon9CoreFact_h__
#include "AbstractCCFactory.h"
#include "Engine.h"

class Falcon9CoreFactory:public AbstractCCFactory{
    public:
    Falcon9CoreFactory(){};
    ~Falcon9CoreFactory(){};
    CraftComponent* createEngine();
     void print();
};
#endif