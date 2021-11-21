#ifndef __AbstractCCFactory_h__
#define __AbstractCCFactory_h__
#include "CraftComponent.h"
//AbstractFactory: AbstractFact

class AbstractCCFactory{

    public:
    virtual CraftComponent* createEngine();
    
};
#endif
