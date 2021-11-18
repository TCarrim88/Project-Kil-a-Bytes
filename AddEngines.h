#ifndef __AddEngines_h__
#define __AddEngines_h__
#include "RocketParts.h"
#include <iostream>
#include <string>
using namespace std;
//Decorator Pattern

class AddEngines: public RocketParts{
    public:
        ~AddEngines();
        void print();

};

#endif