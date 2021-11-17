#ifndef __OceanLand_h__
#define __OceanLand_h__

 #include "Falcon.h"
#include "FalconTest.h"

class Craft;
// class LaunchSimulator;
class OceanLand;

class OceanLand: public FalconTest
{
    private:
	Falcon* falconCraft;
	//

	public: 
	OceanLand(Falcon* falcon);
	void launchExecute();
};

#endif