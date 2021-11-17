
#ifndef __FalconHeavy_h__
#define __FalconHeavy_h__

#include "Falcon.h"

// class Falcon;
class FalconHeavy;

class FalconHeavy: public Falcon
{
    public:
    FalconHeavy();
    void execute();

    // Observer
    bool getStage2();
    void setStage2(bool stage);


    private:
    // Observer
    bool stage2;
};

#endif
