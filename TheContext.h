//Context

#ifndef THECONTEXT_H
#define THECONTEXT_H


#include "SendAndReturn.h"


#include <iostream>

using namespace std;


class TheContext  {
private:
	SendAndReturn* SandR;


public:
	TheContext(SendAndReturn*);
	string Send();
	~TheContext();

};
#endif