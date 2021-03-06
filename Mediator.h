#ifndef MEDIATOR_H
#define MEDIATOR_H
#include "Starlink.h"
#include <list>
class Mediator
{
private:
    int nextId;
    list<Starlink*> listOfSatellites;
    /* data */
public:
    Mediator(/* args */);
    ~Mediator();
    virtual int registerMe(Colleague*); // register yourself and receive your id
    virtual void broadcast(string);
    virtual bool talkTo(int,string);
    virtual void leave(int);

};


#endif