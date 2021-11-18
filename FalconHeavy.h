
#ifndef __FalconHeavy_h__
#define __FalconHeavy_h__

#include "Falcon.h"
#include "CraftComponent.h"
#include <vector>
using std::vector;

// class Falcon;
//class FalconHeavy;

class FalconHeavy: public Falcon, public CraftComponent
{
    private:
    //command attributes:
    bool engineState;   //engines on = true, engines off = false (engines need to be true/on for launch to be successful)
    bool launchState;   //launch successful = true, launch unsuccessful = false (needs to be true for land to be successful)
    bool landState;     //land successful = true, land unsuccessful = false (needs to be true for refurbish to be successful)
    bool refurbState;   //refurbish successful = true, refurbish successful = false (needs to be true to proceed to actual launch) 
    
    // Observer
    bool stage2;

    //Decorator
    vector<CraftComponent*> components;

   public:
    FalconHeavy(){}; //already implemented here
    ~FalconHeavy(){};//already implemented here

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

    //void execute();
    void staticFire();
    void oceanLaunch();
    void oceanLand();
    void oceanOn(); //OceanTurnOn
    void oceanOff();
    void refurbish();


    // Observer
    bool getStage2();
    void setStage2(bool stage);

    //Decorator
    void add(CraftComponent*);
    void print();


    

    
};

#endif
