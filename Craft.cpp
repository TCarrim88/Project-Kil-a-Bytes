#include "Craft.h"
#include <iostream>
using namespace std;

void Craft::turnOn(){
	cout << "rocket has been turned on"<<endl;
	this->turnOnState = true;
}

void Craft::turnOff(){
	cout << "Craft has been turned off"<<endl;
	this->turnOnState = false;
}

void Craft::takeOff(){
	if(turnOnState){
		cout << "Craft Has Taken Off" << endl;
		takeOffState = true;
	}
	else{
		cout << "Craft TakeOff unsuccessful as the Rocket engines were off." <<endl;
		takeOffState = false;
	}
}

void Craft::stage1(){
    if(takeOffState){ //if rocket has successfully taken off
        cout << "In Low Earth Orbit." << endl;
        stage1State = true;
    }
    else{
        cout << "Craft failed to complete Stage 1 as the initial Launch was unsuccessful" << endl;
    }

}

void Craft::stage2(){
    if(stage1State){ //if rocket has successfully taken off
        cout << "In Desired Orbit." << endl;
        stage2State = true;
    }
    else{
        cout << "Craft Failed to make it to stage 2 orbit and it did not complete Stage 1." << endl;
        stage2State = false;
    }
}