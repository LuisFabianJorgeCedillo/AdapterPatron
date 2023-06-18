#pragma once

#include <iostream>
#include <math.h>
using namespace std;

class SquarePeg
{
private:
    float width;
public:
    SquarePeg() {
        this->width = 0;
    }
    SquarePeg(float _width) {
        this->width = _width;
    }

    float getWidth() {
        return width;
    }

    float getSquare() {
        float result;
        result = pow(this->width, 2);
        return result;
    }

};

