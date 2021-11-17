//ConcreteStrategy1

#ifndef SENDCARGO_H
#define SENDCARGO_H


#include "SendAndReturn.h"

class SendCargo  : public SendAndReturn  {

public:

    string send();

};


#endif