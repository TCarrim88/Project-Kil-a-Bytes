#ifndef __Refurbish_h__
#define __Refurbish_h__

 #include "Falcon.h"
#include "FalconTest.h"

class Craft;
// class LaunchSimulator;
class Refurbish;

class Refurbish: public FalconTest
{
	private:
	Falcon* falconCraft;
	//

	public: 
	Refurbish(Falcon* falcon);
	void launchExecute();
};

#endif