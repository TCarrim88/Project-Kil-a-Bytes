#ifndef CREW_DRAGON_H
#define CREW_DRAGON_H

#include <iostream>
#include <map>
#include <cstring>

using namespace std;


class CrewDragon {

    private:
    map<string, string> part;

    public: 
    CrewDragon();
    CrewDragon(string name);
	
		CrewDragon(const CrewDragon& b);
		
		void setPart(string key, string value);

		void show();

        void send();

        void returnHome();
        
};

#endif