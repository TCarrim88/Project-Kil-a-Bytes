Mediator::Mediator(/* args */){
    nextId=0;
}

Mediator::~Mediator(){}

int Mediator::registerMe(Colleague* Me){
    Starlink* satellite=new Starlink();
    satellite->col=Me;
    satellite->id=nextId++;
    listOfSatellites.push_back(satellite);
    cout<<"Satellite "<<satellite->id<<" has been registered!"<<endl;
    return satellite->id;
}

#include "Mediator.h"
void Mediator::broadcast(string message){
    list<Starlink*>::iterator it;
    for(it=listOfSatellites.begin();it!=listOfSatellites.end();++it){
        (*it)->col->receiveMessage("Broadcast:" +message);
    }
}

bool Mediator::talkTo(int id,string message){
    list<Starlink*>::iterator it;
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
    list<Starlink*>::iterator it;
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
    if(found==true){
        cout<<(*it)->id<<" has lost contact! "<<endl;
        listOfSatellites.erase(it);
    }
}