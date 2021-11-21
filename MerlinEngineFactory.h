#ifndef __MerlinEngineFactory_h__
#define __MerlinEngineFactory_h__
#include "AbstractCCFactory.h"

class MerlinEngineFactory:public AbstractCCFactory{
    public:
    MerlinEngineFactory(){};
    ~MerlinEngineFactory(){};
    CraftComponent* createEngine();
         void print();

};
#endif