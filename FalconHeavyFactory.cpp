#include "FalconHeavyFactory.h"
#include "FalconHeavy.h"

Falcon *FalconHeavyFactory::createFalcon(){
    return new FalconHeavy();
}