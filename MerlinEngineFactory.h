#ifndef __MerlinEngineFactory_h__
#define __MerlinEngineFactory_h__
#include "AbstractCCFactory.h"

class MerlinEngineFactory{
    public:
    CraftComponent* createEngine();
};
#endif;