#include "Falcon9CoreFact.h"
#include "Engine.h"
#include <iostream>
using namespace std;

CraftComponent *Falcon9CoreFactory::createEngine(){
   return new Falcon9Core();
}