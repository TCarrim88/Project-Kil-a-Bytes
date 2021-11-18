#include "DragonSpacecraftCB.h"


    DragonSpacecraftCB::DragonSpacecraftCB(){}
    DragonSpacecraftCB::~DragonSpacecraftCB(){}
    
	
		void DragonSpacecraftCB::setName(string name){
			ds.setPart("name", name);
		}
		
		DragonSpacecraft DragonSpacecraftCB::getDragonSpacecraft(){
			return ds;
		}