
#ifndef __Falcon9_h__
#define __Falcon9_h__
#include "FalconTest.h"
#include "Falcon.h"

// class Falcon;
class Falcon9;

class Falcon9: public Falcon
{
    private:
    FalconTest* command;

    // Observer
    bool stage2;

    public:
    Falcon9();
    void execute();


    // Observer
    bool getStage2();
    void setStage2(bool stage);

};

#endif
/*
Falcon* falc9 = new Falcon9();
FalconTest* launch = new OceanLaunch(falc9);
launch->execute(0)
*/