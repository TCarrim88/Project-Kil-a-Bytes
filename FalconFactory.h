#ifndef __FalconFactory_h__
#define __FalconFactory_h__
#include "Falcon.h"
//AbstrFact: AbstrFact
class FalconFactory{
    public:
    FalconFactory(){};
    ~FalconFactory(){};
    virtual Falcon* createFalcon()= 0;
};
#endif
