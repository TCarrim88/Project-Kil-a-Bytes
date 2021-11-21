#include "Falcon9CoreFact.h"
#include "Engine.h"
#include <iostream>
using namespace std;

CraftComponent *Falcon9CoreFactory::createEngine(){
   cout<<"Falcon9Core Created"<<endl;
   return new Falcon9Core();
}

 void Falcon9CoreFactory::print(){}