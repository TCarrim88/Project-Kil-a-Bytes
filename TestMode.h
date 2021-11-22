#ifndef TESTMODE_H
#define TESTMODE_H
#include "LaunchPad.h"
#include "Craft.h"

class TestMode:public LaunchPad{

    private:
    Craft* craft;
    LaunchPad* LP;

    public:
    TestMode(Craft* c){
        LP = new LaunchPad(c);
        //LP->TestMode();
    }
    void initiate(){
        LP->TestMode();
    }
};
#endif