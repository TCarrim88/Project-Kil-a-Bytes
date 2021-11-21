#include "DragonSpacecraft.h"


DragonSpacecraft::DragonSpacecraft(){}
DragonSpacecraft::DragonSpacecraft(SendAndReturn*  sNr){
    this->SandR=sNr;
}



DragonSpacecraft::DragonSpacecraft(string name = "Dragon Spacecraft"){
			part["name"] = name;
		}
	
		DragonSpacecraft::DragonSpacecraft(const DragonSpacecraft& b) {
			part = b.part;
		}
		
		void DragonSpacecraft::setPart(string key, string value){
			part[key] = value;
		}

		void DragonSpacecraft::show() {
			cout<<"  NAME : "<< part["name"] << endl;
        }

        string DragonSpacecraft::send(){

			return SandR->send(); //strategy
          
        }

        
    