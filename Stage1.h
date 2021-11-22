#ifndef STAGE1_H
#define STAGE1_H
#include "LaunchSimulator.h"
#include "Craft.h"

class Stage1:public LaunchSimulator{
    private:
    Craft* craft;

    public:
    Stage1(Craft* c){
        craft = c;
    };
    void Launch(){
        craft->stage1();
    };
};
#endif