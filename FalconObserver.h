#pragma once
#include <iostream>

class FalconObserver {
public:
    virtual void update() = 0;
    virtual void print() = 0;
};