#ifndef CREW_DRAGON_H
#define CREW_DRAGON_H

#include "SendAndReturn.h" //Strategy 

#include <iostream>
#include <map>
#include <cstring>

using namespace std;


class CrewDragon {

    private:
    map<string, string> part;
    SendAndReturn* SandR;

    public: 
    CrewDragon();
    CrewDragon(SendAndReturn*);
    CrewDragon(string name);
	
		CrewDragon(const CrewDragon& b);
		
		void setPart(string key, string value);

		void show();

    string send();

        void returnHome();
        
};

#endif