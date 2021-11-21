#ifndef DRAGON_SPACECRAFT_H
#define DRAGON_SPACECRAFT_H


#include "SendAndReturn.h"

#include <iostream>
#include <map>
#include <cstring>

using namespace std;


class DragonSpacecraft {

    private:
    map<string, string> part;
    SendAndReturn* SandR;

    public: 
    DragonSpacecraft();

    DragonSpacecraft(SendAndReturn*);  // Strategy Pattern

    DragonSpacecraft(string name);
	
		DragonSpacecraft(const DragonSpacecraft& b);
		
		void setPart(string key, string value);

		void show();

    string send();  //strategy 

    
        
};

#endif