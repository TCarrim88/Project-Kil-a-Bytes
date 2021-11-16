#include "Falcon9Factory.h"
#include "Falcon9.h"

Falcon *Falcon9Factory::createFalcon(){
    return new Falcon9();
}