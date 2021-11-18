#ifndef CREW_DRAGON_DIRECTOR
#define CREW_DRAGON_DIRECTOR

#include <iostream>
#include <map>
#include <cstring>

#include "DragonBuilder.h"

using namespace std;


class CrewDragonDirector {

    private:
    DragonBuilder* machine;
		string cdname;


    public: 
   CrewDragonDirector(DragonBuilder* m);
	
		virtual ~CrewDragonDirector();
		void construct();
        
};

#endif