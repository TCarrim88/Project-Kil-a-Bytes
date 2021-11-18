#ifndef __RocketParts_h__
#define __RocketParts_h__

using namespace std;

#include <iostream>
#include <string>

class RocketParts : public CraftComponent{

    private:
        CraftComponent *component;
    public:
        RocketParts();
        virtual ~RocketParts();

};

#endif
