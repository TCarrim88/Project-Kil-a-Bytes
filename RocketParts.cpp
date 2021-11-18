#include "RocketParts.h"
//Decorator Pattern

RocketParts::RocketParts(){
    component = nullptr;
}

RocketParts::~RocketParts(){}

void RocketParts::add(CraftComponent* c){
    if (component == nullptr){
        component = c;
    }
    if (component != nullptr){
        component->add(c);
    }
}

void RocketParts::print(){
    if(component != nullptr){
        component-> print();
    }
}

