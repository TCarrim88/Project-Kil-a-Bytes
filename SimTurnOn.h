#ifndef SIMTURNON_H
#define SIMTURNON_H
#include "LaunchSimulator.h"
#include "Craft.h"

class SimTurnOn:public LaunchSimulator{
    private:
    Craft* craft;

    public:
    SimTurnOn(Craft* c){
        craft = c;
    };
    void Launch(){
        craft->turnOn();
    };
};
#endif