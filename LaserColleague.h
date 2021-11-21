#ifndef LASERCOLLEAGUE_H
#define LASERCOLLEAGUE_H
#include <sstream>
#include "Colleague.h"
#include "LaserMediator.h"
class LaserColleague:public Colleague
{
private:
    /* data */
     int myId;
    LaserMediator* laserMed;
public:
    LaserColleague(/* args */);
    ~LaserColleague();
    virtual void receiveMessage(string);
    virtual void sendMessage();
    virtual void reg(LaserMediator*);
    virtual void leave();
};

LaserColleague::LaserColleague(/* args */)
{
	laserMed=0;
	myId=-1;
}

LaserColleague::~LaserColleague(){}

void LaserColleague::receiveMessage(string message){
    cout<<"Satellite: "<<myId<<" received a message from "<<message<<endl;
}

void LaserColleague::sendMessage(){
    string toId;
    string msg;
    cout<<"Satellite "<<myId<<" which Sattelite would you like to send a laser message to? ";
    getline(cin,toId,'\n');

    cout<<"Satellite "<<myId<<" what is your message? ";
    getline(cin,msg,'\n');

    ostringstream convert;
    convert << myId;
    laserMed->talkTo(atoi(toId.c_str()),convert.str()+": "+msg);
}

void LaserColleague::reg(LaserMediator* laser){
    cout<<"Works"<<endl;
    laserMed=laser;
    //myId=laser->registerMe(this);
    
}

void LaserColleague::leave(){
    laserMed->leave(myId);
}

#endif