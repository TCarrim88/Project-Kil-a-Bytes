#ifndef __Falcon9CoreFact_h__
#define __Falcon9CoreFact_h__
#include "AbstractCCFactory.h"

class Falcon9CoreFactory{
    public:
    CraftComponent* createEngine();
};
#endif