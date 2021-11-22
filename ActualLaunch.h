#ifndef ACTUALLAUNCH_H
#define ACTUALLAUNCH_H
#include "LaunchPad.h"
#include "Craft.h"

class ActualLaunch:public LaunchPad{

    private:
    Craft* craft;
    LaunchPad* LP;

    public:
    ActualLaunch(Craft* c){
        LP = new LaunchPad(c);
        //LP->TestMode();
    }
    void initiate(){
        LP->ActualLaunch();
    }
};
#endif