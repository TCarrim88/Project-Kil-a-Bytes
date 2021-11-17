#include "Falcon.h"
#include "Craft.h"

Falcon::Falcon(){
    
}

// Observer functions
//
//****** attach an obsever to list of observers
void Falcon::attach(FalconObserver* o) {
    observerList.push_back(o);
}

//****** remove an obsever to list of observers
void Falcon::detach(FalconObserver* o){
    observerList.erase(std::remove(observerList.begin(), observerList.end(), o), observerList.end());
}

//****** notify all observers in list of observers
void Falcon::notify(){
    vector<FalconObserver*>::iterator it;
	for (it = observerList.begin(); it != observerList.end(); ++it)
	{
		(*it)->update();
	}
}