#ifndef __FalconHeavyFactory_h__
#define __FalconHeavyFactory_h__
#include "FalconFactory.h"

class FalconHeavyFactory: public FalconFactory{
    public:
    Falcon* createFalcon();
};
#endif