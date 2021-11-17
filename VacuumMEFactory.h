#ifndef __VacuumMEFactory_h__
#define __VacuumMEFactory_h__
#include "AbstractCCFactory.h"

class VacuumMEFactory{
    public:
    CraftComponent* createEngine();
};
#endif;