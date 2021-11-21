#include "RadioColleague.h"
RadioColleague::RadioColleague(/* args */):Colleague(){}

RadioColleague::~RadioColleague(){}

void RadioColleague::receiveMessage(string message){
    cout<<"Satellite: "<<myId<<" received a message from "<<message<<endl;
}

void RadioColleague::sendMessage(){
    string toId;
    string msg;
    cout<<"Satellite "<<myId<<" which Sattelite would you like to send a Radio message to? ";
    getline(cin,toId,'\n');

    cout<<"Satellite "<<myId<<" what is your message? ";
    getline(cin,msg,'\n');

    ostringstream convert;
    convert << myId;
    radioMed->talkTo(atoi(toId.c_str()),convert.str()+": "+msg);
}

void RadioColleague::reg(Mediator* radio){
    radioMed=radio;
    myId=radio->registerMe(this);
	
}

void RadioColleague::leave(){
    radioMed->leave(myId);
}
