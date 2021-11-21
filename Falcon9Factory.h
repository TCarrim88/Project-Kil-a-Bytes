#ifndef __Falcon9Factory_h__
#define __Falcon9Factory_h__
#include "FalconFactory.h"

class Falcon9Factory: public FalconFactory{
    public:
    Falcon9Factory(){};
    ~Falcon9Factory(){};

    Falcon* createFalcon();
};
#endif