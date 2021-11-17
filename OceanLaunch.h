#ifndef __OceanLaunch_h__
#define __OceanLaunch_h__

# include "Falcon.h"
#include "FalconTest.h"

class Craft;
// class LaunchSimulator;
class OceanLaunch;

class OceanLaunch: public FalconTest
{
	private:
	Falcon* falconCraft;
	//

	public: 
	OceanLaunch(Falcon* falcon);
	void launchExecute();
};

#endif