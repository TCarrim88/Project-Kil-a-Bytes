#ifndef SIMTURNOFF_H
#define SIMTURNOFF_H
#include "LaunchSimulator.h"
#include "Craft.h"

class SimTurnOff:public LaunchSimulator{
    private:
    Craft* craft;

    public:
    SimTurnOff(Craft* c){
        craft = c;
    };
    void Launch(){
        craft->turnOff();
    };
};
#endif