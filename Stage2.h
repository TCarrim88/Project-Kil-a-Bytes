#ifndef STAGE2_H
#define STAGE2_H
#include "LaunchSimulator.h"
#include "Craft.h"

class Stage2:public LaunchSimulator{
    private:
    Craft* craft;

    public:
    Stage2(Craft* c){
        craft = c;
    };
    void Launch(){
        craft->stage2();
    };
};
#endif