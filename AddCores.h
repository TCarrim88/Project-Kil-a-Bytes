#ifndef __AddCores_h__
#define __AddCores_h__
#include <iostream>
#include <string>
#include "RocketParts.h"
using namespace std;
//Decorator Pattern


class AddCores : public RocketParts{
    public:
        ~AddCores();
        void print();
};

#endif