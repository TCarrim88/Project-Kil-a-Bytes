#include "CrewDragon.h"


CrewDragon::CrewDragon(){}
CrewDragon::CrewDragon(SendAndReturn*  sNr){
    this->SandR=sNr;
}

CrewDragon::CrewDragon(string name = "Crew Dragon"){
			part["name"] = name;
		}
	
		CrewDragon::CrewDragon(const CrewDragon& b) {
			part = b.part;
		}
		
		void CrewDragon::setPart(string key, string value){
			part[key] = value;
		}

		void CrewDragon::show() {
			cout<<"  NAME : "<< part["name"] << endl;
        }

        string CrewDragon::send(){
              return SandR->send();  //strategy
        }

        void CrewDragon::returnHome(){
            cout<< "Returning Humans and Cargo to the Earth"<<endl;

        }
    