#ifndef RADIOCOLLEAGUE_H
#define RADIOCOLLEAGUE_H
#include <sstream>
#include "Colleague.h"
#include "RadioMediator.h"
class RadioColleague:public Colleague
{
private:
    Mediator* radioMed;
public:
    RadioColleague();
    ~RadioColleague();
    virtual void receiveMessage(string);
    virtual void sendMessage();
    virtual void reg(Mediator*);
    virtual void leave();
};


#endif