#include "CrewDragonCB.h"


    CrewDragonCB::CrewDragonCB(){}
    CrewDragonCB::~CrewDragonCB(){}
    
	
		void CrewDragonCB::setName(string name){
			cd.setPart("name", name);
		}
		
		CrewDragon CrewDragonCB::getCrewDragon(){
			return cd;
		}