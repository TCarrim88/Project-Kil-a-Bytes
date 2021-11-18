#ifndef __RocketParts_h__
#define __RocketParts_h__
#include <iostream>
#include <string>
#include "CraftComponent.h"
using namespace std;

//Decorator Pattern
class RocketParts : public CraftComponent{

    private:
        CraftComponent *component;
    public:
        RocketParts();
        virtual ~RocketParts();

        void add(CraftComponent*);
        void print();

};

#endif

/* Test Decorator
Falcon9* Falc9 = new Falcon9();
FalconHeavy* FalcHeavy = new FalconHeavy();

RocketParts* engine = new AddEngines();
RocketParts* core = new AddCores();

Falc9->add(engine);
Falc9->add(core);

FalcHeavy->add(engine);
FalcHeavy->add(core);


cout << "Adding Engines and Cores to Rockets" << endl;
cout << endl;
Falc9->print();
FalcHeavy->print(); */
