#include "AddEngines.h"

//Decorator Pattern

AddEngines::~AddEngines(){}

void AddEngines::print(){
    RocketParts::print();

    cout << "An Engine has been added" << endl;

}