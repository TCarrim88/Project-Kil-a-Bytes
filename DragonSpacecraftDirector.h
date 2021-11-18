#ifndef DRAGON_SPACECRAFT_DIRECTOR_H
#define DRAGON_SPACECRAFT_DIRECTOR_H

#include <iostream>
#include <map>
#include <cstring>

#include "DragonBuilder.h"

using namespace std;


class DragonSpacecraftDirector {

    private:
    DragonBuilder* machine;
		string dsname;


    public: 
   DragonSpacecraftDirector(DragonBuilder* m);
	
		virtual ~DragonSpacecraftDirector();
		void construct();
        
};

#endif