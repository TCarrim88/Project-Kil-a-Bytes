#include "MerlinEngineFactory.h"
#include "Engine.h"
#include <iostream>
using namespace std;

CraftComponent *MerlinEngineFactory::createEngine(){
    cout<<"MerlinEngine Created"<<endl;
    return new  MerlinEngine();
}

         void MerlinEngineFactory::print(){}
