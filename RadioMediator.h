#ifndef RADIOMEDIATOR_H
#define RADIOMEDIATOR_H
#include "Mediator.h"
class RadioMediator:public Mediator
{
private:
    string name;
    /* data */
public:
    RadioMediator(string n);
    ~RadioMediator();
};

RadioMediator::RadioMediator(string n)
{
    name = n;
}

RadioMediator::~RadioMediator(){}

#endif