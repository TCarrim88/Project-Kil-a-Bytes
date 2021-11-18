#include "CrewDragon.h"


CrewDragon::CrewDragon(){}

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

        void CrewDragon::send(){
            cout<< "Sending Humans and Cargo to the international Space Station"<<endl;
        }

        void CrewDragon::returnHome(){
            cout<< "Returning Humans and Cargo to the Earth"<<endl;

        }
    