#include "TheContext.h"



#include <iostream>

using namespace std;




TheContext::TheContext(SendAndReturn*  sNr){

    this->SandR=sNr;
}



string TheContext::Send(){
  return SandR->send();
}


TheContext::~TheContext(){}



