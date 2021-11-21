#include "Mediator.h"

Mediator::Mediator(/* args */){
    nextId=0;
}

Mediator::~Mediator(){}

int Mediator::registerMe(Colleague* Me){
    StarlinkSatellites* satellite=new StarlinkSatellites();
    satellite->col=Me;
    satellite->id=nextId++;
    listOfSatellites.push_back(satellite);
    cout<<"Satellite "<<satellite->id<<" has been registered!"<<endl;
    return satellite->id;
}

void Mediator::broadcast(string message){
    list<StarlinkSatellites*>::iterator it;
    for(it=listOfSatellites.begin();it!=listOfSatellites.end();++it){
        (*it)->col->receiveMessage("Broadcast:" +message);
    }
}

bool Mediator::talkTo(int id,string message){
    list<StarlinkSatellites*>::iterator it;
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
    list<StarlinkSatellites*>::iterator it;
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