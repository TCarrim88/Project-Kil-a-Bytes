#ifndef LASERCOLLEAGUE_H
#define LASERCOLLEAGUE_H
#include <sstream>
#include "Colleague.h"
#include "LaserMediator.h"
class LaserColleague:public Colleague
{
private:
    int myId;
    Mediator* laserMed;
public:
    LaserColleague();
    ~LaserColleague();
    virtual void receiveMessage(string);
    virtual void sendMessage();
    virtual void reg(Mediator*);
    virtual void leave();
};



#endif