
#ifndef __OceanTurnOff_h__
#define __OceanTurnOff_h__

 #include "Falcon.h"
#include "FalconTest.h"

class Craft;
// class LaunchSimulator;
class OceanTurnOff;

class OceanTurnOff: public FalconTest
{
	private:
	Falcon* falconCraft;
	//

	public: 
	OceanTurnOff(Falcon* falcon);
	void launchExecute();
};

#endif
