//mediator
#include "LaserMediator.h"
#include "RadioMediator.h"
#include "LaserColleague.h"
#include "RadioColleague.h"


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

//observr headers
#include "FalconObserver.h"
#include "ConcreteFalconObserverHeavy.h"
#include <iostream>
#include <time.h>

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
#include "ConcreteFalconObserver9.h"
#include "StarlinkConcreteLaunchObs.h"

//Randoms
#include "FalconFactory.h"
#include "Falcon9Factory.h"
#include "FalconHeavyFactory.h"
#include "Engine.h"

//AbstractFactory
#include "AbstractCCFactory.h"
#include "MerlinEngineFactory.h"
#include "VacuumMEFactory.h"
#include "Falcon9CoreFact.h"

//TestSim:
#include "SimTakeOff.h"
#include "SimTurnOn.h"
#include "SimTurnOff.h"
#include "Stage1.h"
#include "Stage2.h"
#include "TestMode.h"
#include "ActualLaunch.h"

using namespace std;

 int main(){

    cout << "=============FALCON ROCKET TEST=============" << endl;
    cout << endl;
    
    cout << "=============COMMAND DP TEST=============" << endl;
    cout << endl;

    cout << "Test Command Design Pattern Functionality" << endl;
    cout << endl;
    cout << "Test Static fire using Button (invoker): " << endl;
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

   // CommandInteractive();

   

    cout << "=====================DECORATOR AND ABSTRACT FACTORY=====================" << endl;
    cout << endl;

    cout << "Adding Engines and Cores to Rockets" << endl;
    cout << endl;
    AbstractCCFactory* MerlEng;
    
    AbstractCCFactory* VacEng;

    AbstractCCFactory* Fal9Core;
    
    MerlEng = new MerlinEngineFactory();

    VacEng = new VacuumMEFactory();

    Fal9Core = new Falcon9CoreFactory();
    
    Falcon9* Falc9 = new Falcon9();
    FalconHeavy* FalcHeavy = new FalconHeavy();

    //RocketParts* engine = new AddEngines();
    RocketParts* core = new AddCores();
    //Adding Merlin Engines
    for (int i = 0; i<9; i++ ){
          Falc9->add(MerlEng->createEngine());
    }


    //Add Vaccume Merlin Engine
    Falc9->add(VacEng->createEngine());
    //Adding COre to falcon 9
    Falc9->add(Fal9Core->createEngine());

    //Adding Merlin Engines To FalconHeavy
    for (int i = 0; i<27; i++ ){
          FalcHeavy->add(MerlEng->createEngine());
    }

    //Adding VAccume mERLIN Engine
    FalcHeavy->add(VacEng->createEngine());


    //Adding Falcon9COres To FalconHeavy
    for (int i = 0; i<3; i++ ){
          FalcHeavy->add(Fal9Core->createEngine());
    }

    cout << "=====================TEMPLATE TEST=====================" << endl;
    cout << endl;


    CraftComponent *lol;
    CraftComponent *tt = MerlEng->createEngine();
    lol->Orbit(tt);

    tt = VacEng->createEngine();
    lol->Orbit(tt);

    tt = Fal9Core->createEngine();
    lol->Orbit(tt);

    cout << "=============DRAGON SPACECRAFT TEST=============" << endl;
    cout << endl;

    cout << "=====================BUILDER AND STRATEGY TEST=====================" << endl;
    //cout << endl;

    // Variable to store Products */
    CrewDragon CrewD;
    DragonSpacecraft DSpacecraft;

    //DragonSpacecraft  context;
	SendAndReturn*  sendANDreturn;
	sendANDreturn= new SendCargo();
	DSpacecraft = DragonSpacecraft(sendANDreturn);
	cout<<endl;

    //CrewDragon Context
    SendAndReturn*  sendANDreturn1;
	sendANDreturn1= new SendAndReturnHumansAndCargo();
	CrewD = CrewDragon(sendANDreturn1);
	cout<<endl;

	
    // Concrete builders
    DragonBuilder* machine0 = new CrewDragonCB();
    DragonBuilder* machine1 = new DragonSpacecraftCB();
   
	
    // Director: Shop uses the same builders to construct better variants of these toys
    CrewDragonDirector* cdd = new CrewDragonDirector(machine0);
    cdd->construct();
    CrewD = ((CrewDragonCB*) machine0)->getCrewDragon();
    delete cdd;

    DragonSpacecraftDirector* dsd = new DragonSpacecraftDirector(machine1);
    dsd->construct();
    DSpacecraft = ((DragonSpacecraftCB*) machine1)->getDragonSpacecraft();
    
    delete dsd;
    
	
    cout<<DSpacecraft.send()<<endl; 
    cout<<CrewD.send()<<endl; 
    

    // clean up
    delete machine0;
    delete machine1;

    cout << "=====================STARLINK SATELLITE TEST=====================" << endl;
    cout << endl;

    cout << "=====================PROTOTYPE AND OBSERVER TEST=====================" << endl;
    cout << endl;

    //////////////////////////Starlink Observer//////////////////////////////
    Starlink *s = new Starlink();
    
    StarlinkConcreteLaunchObs * observer =new StarlinkConcreteLaunchObs(s);
    observer->update();
    observer->print();
    s->attach(observer);
    s->detach(observer);
    s->notify();
    s->setDeployed(true);

    ////////////////////////////FalconRocket Observer///////////////////////
    Falcon9 *falc9=new Falcon9();
    FalconObserver * falconObserver= new ConcreteFalconObserver9(falc9);
    falconObserver->update();
    falc9->attach(falconObserver);

    for (int i = 0; i<10; i++ ){
          falc9->addSatellite(s->cluster());
    }

    
    cout << "=====================STARLINK SATELLITE COMMUNICATION TEST=====================" << endl;
    cout << endl;

    cout << "=====================MEDIATOR=====================" << endl;


    Mediator* satelliteWeb=new LaserMediator("Comms");
	
	LaserColleague* satellites[2];
	
	satellites[0] = new LaserColleague();
	satellites[1] = new LaserColleague();
	satellites[2] = new LaserColleague();
	
	satellites[0]->reg(satelliteWeb);
	satellites[1]->reg(satelliteWeb);
	satellites[2]->reg(satelliteWeb);

	satellites[0]->sendMessage();
	satellites[0]->sendMessage();
	satellites[1]->sendMessage();

	satellites[1]->leave();

	for (int i = 0; i < 2; i++)
	{    
		delete satellites[i];
	}

	delete satelliteWeb;
	
	Mediator* radioWeb = new RadioMediator("Radio Comms");
	
	RadioColleague* radio[2];
	
	RadioColleague* RadioBase = new RadioColleague();
	RadioBase->reg(radioWeb);
	radio[0]=new RadioColleague();
	radio[1]=new RadioColleague();
	radio[2]=new RadioColleague();
	
	radio[0]->reg(radioWeb);
	radio[1]->reg(radioWeb);
	radio[2]->reg(radioWeb);
	
	radio[0]->sendMessage();
	radio[0]->sendMessage();
	radio[1]->sendMessage();

	radio[1]->leave();

	for (int i = 0; i < 2; i++)
	{    
		delete radio[i];
	}

	delete radioWeb;



    


    cout << "=====================LAUNCH SIMULATOR TEST=====================" << endl;
    cout << endl;


    Falcon9* f9 = new Falcon9();
    Craft* FH = new FalconHeavy();
    Craft* CD = new CrewDragon();
    Craft* DS = new DragonSpacecraft();
    
    
    StarlinkSatellites* Sat = new Starlink();
    f9->addSatellite(Sat);

    Craft* F9 = f9;

    cout << "Which Craft would you like to test?" << endl;
    cout << "1. F9"<< "\t" << "2. FH" << endl;
    cout << "3. CD"<< "\t" << "4. DS" << endl;

    int craft;
    cin >> craft;
    cout << endl;

    cout << "Which Simulation would you like to run for F9?" << endl;
    cout << "1. Actual Launch" <<"\t" << "2. Test Mode" << endl;
    int launch;
    cin >> launch;
    cout << endl;

    if(launch == 1){
        if(craft == 1){
            cout << "Initiate Actual Launch for F9" << endl;
            ActualLaunch* AL = new ActualLaunch(F9);
            AL->initiate();
            cout << endl;
        }
        else if(craft == 2){
            cout << "Initiate Actual Launch for FH" << endl;
            ActualLaunch* AL = new ActualLaunch(FH);
            AL->initiate();
            cout << endl;
        }
        else if(craft == 3){
            cout << "Initiate Actual Launch for CD" << endl;
            ActualLaunch* AL = new ActualLaunch(CD);
            AL->initiate();
            cout << endl;
        }
        else if(craft == 4){
            cout << "Initiate Actual Launch for DS" << endl;
            ActualLaunch* AL = new ActualLaunch(DS);
            AL->initiate();
            cout << endl;
        }
    }
    else{
        if(craft == 1){
            cout << "Initiate Test Mode for F9" << endl;
            TestMode* TM = new TestMode(F9);
            TM->initiate();
            cout << endl;
        }
        else if(craft == 2){
            cout << "Initiate Test Mode for FH" << endl;
            TestMode* TM = new TestMode(FH);
            TM->initiate();
            cout << endl;
        }
        else if(craft == 3){
            cout << "Initiate Test Mode for CD" << endl;
            TestMode* TM = new TestMode(CD);
            TM->initiate();
            cout << endl;
        }
        else if(craft == 4){
            cout << "Initiate Test Mode for DS" << endl;
            TestMode* TM = new TestMode(DS);
            TM->initiate();
            cout << endl;
        }
    }
    
     return 0;
 } 
