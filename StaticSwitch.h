#ifndef __StaticSwitch_h__
#define __StaticSwitch_h__
#include "FalconTest.h"
//invoker for command
class StaticSwitch{

    private:
    FalconTest* command;

    public:
    StaticSwitch(FalconTest* command){
        this->command = command;
    }
    void StaticLaunchButton(){
        command->launchExecute();
    }
};
#endif
