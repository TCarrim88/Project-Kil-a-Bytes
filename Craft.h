
#ifndef __Craft_h__
#define __Craft_h__

// #include "ActualLaunch.h"
// #include "TestMode.h"

class ActualLaunch;
class TestMode;
class Craft;

class Craft
{
	private:
	bool turnOnState = false;
    bool takeOffState = false;
    bool stage1State = false;
	bool stage2State = false;

	public:
	//Launch Sim:
   void turnOn();
   void turnOff();
   void takeOff();
   void stage1();
   void stage2();

   bool getTurnOnState(){
       return turnOnState;
   }
   bool getTakeOffState(){
       return takeOffState;
   }
    bool getStage1State(){
       return stage1State;
    }
    bool getStage2State(){
       return stage2State;
   }

};

#endif
