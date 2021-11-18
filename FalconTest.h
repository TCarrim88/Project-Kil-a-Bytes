#ifndef __FalconTest_h__
#define __FalconTest_h__

// #include "LaunchInvoker.h"

class StaticTest;
class FalconTest;

//Command: Command
class FalconTest
{
	public: 
	FalconTest(){};
	virtual void launchExecute() = 0; //execute()
};
#endif
