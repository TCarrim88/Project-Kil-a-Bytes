#ifndef DRAGON_SPACECRAFT_CB_H
#define DRAGON_SPACECRAFT_CB_H

#include "DragonBuilder.h"
#include "DragonSpacecraft.h"

#include <iostream>
#include <map>
#include <cstring>

using namespace std;


class DragonSpacecraftCB: public DragonBuilder {

    private:
    DragonSpacecraft ds;


    public:
    DragonSpacecraftCB();
    ~DragonSpacecraftCB();
    
		
		void setName(string name);
		
		DragonSpacecraft getDragonSpacecraft();


        
};

#endif