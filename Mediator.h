#ifndef MEDIATOR_H
#define MEDIATOR_H
#include "StarlinkSatellite.h"
#include <list>
class Mediator
{
private:
    int nextId;
    list<StarlinkSatellite*> listOfSatellites;
    /* data */
public:
    Mediator(/* args */);
    ~Mediator();
    virtual int registerMe(Colleague*); // register yourself and receive your id
    virtual void broadcast(string);
    virtual bool talkTo(int,string);
    virtual void leave(int);

};

Mediator::Mediator(/* args */){
    nextId=0;
}

Mediator::~Mediator(){}

int Mediator::registerMe(Colleague* Me){
    StarlinkSatellite* satellite=new StarlinkSatellite();
    satellite->col=Me;
    satellite->id=nextId++;
    listOfSatellites.push_back(satellite);
    cout<<"Satellite "<<satellite->id<<" has been registered!"<<endl;
    return satellite->id;
}

void Mediator::broadcast(string message){
    list<StarlinkSatellite*>::iterator it;
    for(it=listOfSatellites.begin();it!=listOfSatellites.end();++it){
        (*it)->col->receiveMessage("Broadcast:" +message);
    }
}

bool Mediator::talkTo(int id,string message){
    list<StarlinkSatellite*>::iterator it;
    bool found = false;
    it=listOfSatellites.begin();
    while((it!=listOfSatellites.end())&&(!found)){
        if((*it)->id==id)
        {
            found=true;
            (*it)->col->receiveMessage(message);
        }
        else
        {
            it++;
        }
    }
    return found;
}

void Mediator::leave(int id){
    int count=0;
    list<StarlinkSatellite*>::iterator it;
    bool found = false;
    it=listOfSatellites.begin();
    while((it!=listOfSatellites.end())&&(!found)){
        if((*it)->id==id){
            found=true;
        }
        else{
            it++;
            count++;
        }
    }
    if(found){
        cout<<(*it)->id<<" has lost contact! "<<endl;
        listOfSatellites.erase(it);
    }
}
#endif