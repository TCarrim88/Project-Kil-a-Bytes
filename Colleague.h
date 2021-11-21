#ifndef COLLEAGUE_H
#define COLLEAGUE_H
#include <iostream>
#include <string>
//#include "Mediator.h"

using namespace std;
class Mediator;
class Colleague
{
protected:
   int myId;
   Mediator* Med;
public:
    Colleague(/* args */);
    virtual void receiveMessage(string) =0;
    virtual void sendMessage() =0;
    virtual void reg(Mediator*)=0;
    virtual void leave()=0;
    virtual ~Colleague();
};

Colleague::Colleague(/* args */){
    Med=0;
    myId=-1;
}

Colleague::~Colleague(){}

/*
void Colleague::reg(Mediator* med){
    Med=med;
    myId=Med->registerMe(this);
}

void Colleague::leave(){
    Med->leave(myId);
}
*/
#endif