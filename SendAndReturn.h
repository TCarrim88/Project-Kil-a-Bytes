//Strategy
#ifndef SENDANDRETURN_H
#define SENDANDRETURN_H

#include <iostream>

using namespace std;

class SendAndReturn {

public:

SendAndReturn();
~SendAndReturn();

     virtual string send()=0;

};


#endif