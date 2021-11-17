
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

    public:
    Falcon9();
    void execute();

};

#endif
/*
Falcon* falc9 = new Falcon9();
FalconTest* launch = new OceanLaunch(falc9);
launch->execute(0)
*/