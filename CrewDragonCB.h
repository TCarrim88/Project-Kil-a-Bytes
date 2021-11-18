#ifndef CREW_DRAGON_CB_H
#define CREW_DRAGON_CB_H

#include "DragonBuilder.h"
#include "CrewDragon.h"

#include <iostream>
#include <map>
#include <cstring>

using namespace std;


class CrewDragonCB: public DragonBuilder {

    private:
    CrewDragon cd;


    public:
    CrewDragonCB();
    ~CrewDragonCB();
    
		
		void setName(string name);
		
		CrewDragon getCrewDragon();


        
};

#endif