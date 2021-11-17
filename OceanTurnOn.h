
#ifndef __OceanTurnOn_h__
#define __OceanTurnOn_h__

 #include "Falcon.h"
#include "FalconTest.h"

class Craft;
// class LaunchSimulator;
class OceanTurnOn;

class OceanTurnOn: public FalconTest
{
	private:
	Falcon* falconCraft;
	//

	public: 
	OceanTurnOn(Falcon* falcon);
	void launchExecute();
};

#endif
