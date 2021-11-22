#ifndef SIMTAKEOFF_H
#define SIMTAKEOFF_H
#include "LaunchSimulator.h"
#include "Craft.h"

class SimTakeOff:public LaunchSimulator{
    private:
    Craft* craft;

    public:
    SimTakeOff(Craft* c){
        craft = c;
    };
    void Launch(){
        craft->takeOff();
    };
};
#endif