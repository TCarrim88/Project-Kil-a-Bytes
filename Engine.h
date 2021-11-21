#ifndef __Engine_h__
#define __Engine_h__
#include "CraftComponent.h"
#include "RocketParts.h"
//Template: ConcreteClasses
//AbstractFact: ConcreteProd
class Falcon9Core:public CraftComponent{
    
    // private:
    // bool Orbit;
    // bool secondStage;

    public:

    // bool getOrbit();
    // void setOrbit(bool orbit);

    // bool getSecondStage();
    // void setSecondStage(bool stage);
    Falcon9Core* createEngine();
    void print();
    Falcon9Core();
    ~Falcon9Core(){};
};

class MerlinEngine:public CraftComponent{

    private:
    bool Orbit;
    bool secondStage;

    public:
    // bool getOrbit();
    // void setOrbit(bool orbit);

    // bool getSecondStage();
    // void setSecondStage(bool stage);
    MerlinEngine* createEngine();
    void print();
    MerlinEngine();
    ~MerlinEngine(){};
};

class VacuumMerlinEngine:public CraftComponent{

    // private:
    // bool Orbit;
    // bool secondStage;

    public:

    // bool getOrbit();
    // void setOrbit(bool orbit);

    // bool getSecondStage();
    // void setSecondStage(bool stage);
    VacuumMerlinEngine* createEngine();
    void print();
    VacuumMerlinEngine();
    ~VacuumMerlinEngine(){};
};
#endif
