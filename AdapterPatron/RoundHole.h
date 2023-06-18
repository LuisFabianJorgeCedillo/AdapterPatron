#pragma once

#include <iostream>
using namespace std;
#include "RoundPeg.cpp"


class RoundHole
{
private:
    int radius;
public:

    RoundHole() {
        this->radius = 0;
    }
    RoundHole(int _radius) {
        this->radius = _radius;
    }

    int getRadius() {
        return radius;
    }

    bool fits(RoundPeg peg) {
        bool result;
        result = (this->getRadius() >= peg.getRadius());
        return result;
    }

};

