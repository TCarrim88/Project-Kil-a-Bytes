#ifndef __VacuumMEFactory_h__
#define __VacuumMEFactory_h__
#include "AbstractCCFactory.h"
#include "Engine.h"

class VacuumMEFactory:public AbstractCCFactory{
    public:
    VacuumMEFactory(){};
    ~VacuumMEFactory(){};

    CraftComponent* createEngine();
     void print();

};
#endif