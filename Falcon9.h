
#ifndef __Falcon9_h__
#define __Falcon9_h__
#include "FalconTest.h"
#include "Falcon.h"
#include "CraftComponent.h"
#include "StarlinkSatellites.h"
#include <vector>
using std::vector;

// class Falcon;
//class Falcon9;

class Falcon9: public Falcon, public CraftComponent
{
    private:
    //Command attributes:
    bool engineState;   //engines on = true, engines off = false (engines need to be true/on for launch to be successful)
    bool launchState;   //launch successful = true, launch unsuccessful = false (needs to be true for land to be successful)
    bool landState;     //land successful = true, land unsuccessful = false (needs to be true for refurbish to be successful)
    bool refurbState;   //refurbish successful = true, refurbish successful = false (needs to be true to proceed to actual launch) 
    bool staticState;

    // Observer
    bool stage2;

    //Decorator
    vector<CraftComponent*> components;

    //add satellites
    vector<StarlinkSatellites*> starlinkList;
    int capacity = 0;

    public:
    Falcon9();
    ~Falcon9(){};//already implemented here
    void execute();


    // Observer
    bool getStage2();
    void setStage2(bool stage);

    //Command Functions:
    //getters and setters:
    bool getEngineState();
    void setEngineState(bool state);
    bool getLaunchState();
    void setLaunchState(bool state);
    bool getLandState();
    void setLandState(bool state);
    bool getRefurbState();
    void setRefurbState(bool state);
    bool getStaticState();
    void setStaticState(bool state);
    
    void staticFire();
    void oceanLaunch();
    void oceanLand();
    void oceanOn(); //OceanTurnOn
    void oceanOff();
    void refurbish();

    //Decorator
    void add(CraftComponent*);
    void print();


    //Add Satellites
    virtual void addSatellite(StarlinkSatellites*);



};

#endif
/*
Falcon* falc9 = new Falcon9();
FalconTest* launch = new OceanLaunch(falc9);
launch->execute(0)
*/
