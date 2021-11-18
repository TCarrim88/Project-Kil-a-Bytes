#ifndef DRAGON_SPACECRAFT_H
#define DRAGON_SPACECRAFT_H

#include <iostream>
#include <map>
#include <cstring>

using namespace std;


class DragonSpacecraft {

    private:
    map<string, string> part;

    public: 
    DragonSpacecraft();

    DragonSpacecraft(string name);
	
		DragonSpacecraft(const DragonSpacecraft& b);
		
		void setPart(string key, string value);

		void show();

    void send();

    
        
};

#endif