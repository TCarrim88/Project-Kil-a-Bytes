#include "DragonSpacecraftDirector.h"


DragonSpacecraftDirector::DragonSpacecraftDirector(DragonBuilder* m) {
    this->machine = m;
    this->dsname = "Dragon Spacecraft";
}

	
		 DragonSpacecraftDirector::~DragonSpacecraftDirector(){ 
            machine = NULL;
		}
		void DragonSpacecraftDirector::construct() {
            machine->setName(dsname);
            
		}