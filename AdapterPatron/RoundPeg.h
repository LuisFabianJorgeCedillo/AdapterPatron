#pragma once
#ifndef Adapter_H
#define Adapter_H
#include <iostream>
using namespace std;

class RoundPeg
{
private:
    int radius;
public:
    RoundPeg() {
        this->radius = 0;
    }
    RoundPeg(int _radius) {
        this->radius = _radius;
    }
    int getRadius() {
        return radius;
    }

};

#endif
