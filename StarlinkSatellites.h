#ifndef STARLINKSATELLITES_H
#define STARLINKSATELLITES_H
#include <iostream>
#include <string>
#include "Colleague.h"
using namespace std;
class StarlinkSatellites
{
private:
    /* data */
public:
    int id;
    Colleague* col;
    StarlinkSatellites();
    ~StarlinkSatellites();
};

StarlinkSatellites::StarlinkSatellites(/* args */){}

StarlinkSatellites::~StarlinkSatellites(){}

#endif