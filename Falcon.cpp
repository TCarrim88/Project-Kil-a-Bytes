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
    bool found = false;
	vector<FalconObserver*>::iterator it = observerList.begin();
	while ((it != observerList.end()) && (! found))
	{
		if (*it == o)
		{
			found = true;
			observerList.erase(it);
		}
		++it;
	}
}

//****** notify all observers in list of observers
void Falcon::notify(){
    vector<FalconObserver*>::iterator it;
	for (it = observerList.begin(); it != observerList.end(); ++it)
	{
		(*it)->update();
	}
}

