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



#endif