
#ifndef __Falcon_h__
#define __Falcon_h__

#include "Craft.h"
#include "FalconObserver.h"
#include <vector>

using namespace std;

// class Craft;
class Falcon;
//Abstract Fact: AbstProd
class Falcon: public Craft
{
public:
    Falcon();
    virtual void execute();

    // Observer Functions
    void attach(FalconObserver* o);
    void detach(FalconObserver* o);
    void notify();

private:
    vector<FalconObserver*> observerList;
};

#endif
