#include "CraftComponent.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void CraftComponent::Orbit(CraftComponent* c){
 c->print();
}

CraftComponent::CraftComponent(){

}

CraftComponent::~CraftComponent(){

}

///Decorator
void CraftComponent::add(CraftComponent* c){

};

