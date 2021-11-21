//command headers
#include "Falcon.h"
#include "FalconHeavy.h"
#include "Falcon9.h"
#include "FalconTest.h"
#include "StaticTest.h"
#include "StaticSwitch.h"
#include "OceanTurnOn.h"
#include "OceanTurnOff.h"
#include "OceanLaunch.h"
#include "OceanLand.h"
#include "Refurbish.h"

//decorator headers
#include "RocketParts.h"
#include "AddCores.h"
#include "AddEngines.h"
#include "CraftComponent.h"

//observr heaaders
#include "FalconObserver.h"
#include "ConcreteFalconObserver9.h"
#include "ConcreteFalconObserverHeavy.h"
#include <iostream>

//Tariq + mumtaz functions
#include "CrewDragon.h"
#include "CrewDragonCB.h"
#include "CrewDragonDirector.h"
#include "DragonBuilder.h"
#include "DragonSpacecraft.h"
#include "DragonSpacecraftCB.h"
#include "DragonSpacecraftDirector.h"
#include "SendAndReturn.h"          //Strategy
#include "SendCargo.h"  //ConcreteStrategy1
#include "SendAndReturnHumansAndCargo.h" //ConcreteStrategy2

//Kajal includes:
//#include "ConcreteFalconObserver9.h"
#include "StarlinkConcreteLaunchObs.cpp"
//#include "Falcon.cpp"
//#include "Falcon9.cpp"
//#include "CraftComponent.h"
//#include "ConcreteFalconObserver9.cpp"

using namespace std;

int main(){

    cout << "=====================COMMAND TEST=====================" << endl;
    cout << endl;

    cout << "Test Static fire using Button: " << endl;
    cout << endl;

    Falcon* FH = new FalconHeavy();

    FalconTest* st = new StaticTest(FH);
    
    StaticSwitch* launchButton = new StaticSwitch(st);
    launchButton->StaticLaunchButton();

    cout << endl;
    cout <<"Test Ocean Launch Sequence: " <<endl;
    cout << endl;
    
    FalconTest* Launch = new OceanLaunch(FH);
    cout << "Attempt Launch before firing up engines: " << endl;
    cout << endl;

    Launch->launchExecute();
    cout << endl;

    FalconTest* ON = new OceanTurnOn(FH);
    ON->launchExecute();
    cout << "Attempt Launch again: " << endl;
    cout << endl;

    Launch->launchExecute();
    cout << endl;

    FalconTest* Land = new OceanLand(FH);
    FalconTest* OFF = new OceanTurnOff(FH);
    FalconTest* refurb = new Refurbish(FH);

    OFF->launchExecute();
    cout << endl;
    cout << "Attempt Refurbish process before landing: " << endl;
    cout << endl;

    refurb->launchExecute();
    cout << endl;

    Land->launchExecute();
    cout <<endl;

    cout << "Attempt Refurbish process again: " << endl;
    cout << endl;
    refurb->launchExecute();
    cout << endl;

    cout << "=====================DECORATOR TEST=====================" << endl;
    cout << endl;

    Falcon9* Falc9 = new Falcon9();
    FalconHeavy* FalcHeavy = new FalconHeavy();

    RocketParts* engine = new AddEngines();
    RocketParts* core = new AddCores();

    Falc9->add(engine);
    Falc9->add(core);

    FalcHeavy->add(engine);
    FalcHeavy->add(core);


    cout << "Adding Engines and Cores to Rockets" << endl;
    cout << endl;
    Falc9->print();
    FalcHeavy->print();


    cout << "=====================BUILDER AND STRATEGY TEST=====================" << endl;
    cout << endl;

    // Variable to store Products */
    CrewDragon CrewD[2];
    DragonSpacecraft DSpacecraft[2];

  //DragonSpacecraft  context;
	SendAndReturn*  sendANDreturn;
	sendANDreturn= new SendCargo();
	DSpacecraft[2] = DragonSpacecraft(sendANDreturn);
	cout<<endl;

//CrewDragon Context
  SendAndReturn*  sendANDreturn1;
	sendANDreturn1= new SendAndReturnHumansAndCargo();
	CrewD[2] = CrewDragon(sendANDreturn1);
	cout<<endl;

	
    // Concrete builders
    DragonBuilder* machine0 = new CrewDragonCB();
    DragonBuilder* machine1 = new DragonSpacecraftCB();
   
	
    // Director: Shop uses the same builders to construct better variants of these toys
    CrewDragonDirector* cdd = new CrewDragonDirector(machine0);
    cdd->construct();
    CrewD[1] = ((CrewDragonCB*) machine0)->getCrewDragon();
    delete cdd;

    DragonSpacecraftDirector* dsd = new DragonSpacecraftDirector(machine1);
    dsd->construct();
    DSpacecraft[1] = ((DragonSpacecraftCB*) machine1)->getDragonSpacecraft();
    
    delete dsd;
    
	
    cout<<DSpacecraft[2].send()<<endl; 
    cout<<CrewD[2].send()<<endl; 
    

    // clean up
    delete machine0;
    delete machine1;

    cout << "=====================PROTOTYPE AND OBSERVER STRATEGY TEST=====================" << endl;
    cout << endl;

    //////////////////////////Starlink Observer//////////////////////////////
    Starlink *s = new Starlink();
    
    //s->cluster(); // testing protoype
    StarlinkConcreteLaunchObs * observer =new StarlinkConcreteLaunchObs(s);
    observer->update();
    observer->print();
    s->attach(observer);
    s->detach(observer);
    s->cluster();
    s->notify();
    s->setDeployed(true);

    ////////////////////////////FalconRocket Observer///////////////////////
    Falcon9 *falc9=new Falcon9();
    FalconObserver * falconObserver= new ConcreteFalconObserver9(falc9);
    falconObserver->update();
    falc9->attach(falconObserver);
    return 0;
}