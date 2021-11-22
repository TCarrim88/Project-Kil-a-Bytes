#include "CrewDragonDirector.h"


CrewDragonDirector::CrewDragonDirector(DragonBuilder* m) {
    this->machine = m;
    this->cdname = "Crew Dragon";
}

	
		 CrewDragonDirector::~CrewDragonDirector(){ 
            machine = NULL;
		}
		void CrewDragonDirector::construct() {
            machine->setName(cdname);           
		}