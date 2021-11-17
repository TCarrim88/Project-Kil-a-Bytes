
#ifndef __FalconHeavy_h__
#define __FalconHeavy_h__

#include "Falcon.h"

// class Falcon;
class FalconHeavy;

class FalconHeavy: public Falcon
{
    private:
    //command attributes:
    bool engineState; //engines on = true, engines off = false
    bool launchState; //launch successful = true, launch unsuccessful = false (needs to be true for land to be successful)
    bool landState;    //land successful = true, land unsuccessful = false (needs to be true for refurbish to be successful)
    FalconHeavy();

   public:

    bool getEngineState();
    void setEngineState(bool state){
        this.engineState = state;
    }
    //Command Functions:
    //void execute();
    void staticFire();
    void oceanLaunch();
    void oceanLand();
    void oceanOn(); //OceanTurnOn
    void oceanOff();
    void refurbish();


};

#endif
