#include "AddCores.h"

//Decorator Pattern

AddCores::~AddCores(){}

void AddCores::print(){
    RocketParts::print();
    cout << "A Falcon 9 core has been added" << endl;
}