
#ifndef __StaticTest_h__
#define __StaticTest_h__

#include "Falcon.h"
#include "FalconTest.h"

class Craft;
// class LaunchSimulator;
class StaticTest;

class StaticTest: public FalconTest
{
	private:
	Falcon* falconCraft;
	

	public: 
	StaticTest(Falcon* falcon);
	void launchExecute();
};

#endif