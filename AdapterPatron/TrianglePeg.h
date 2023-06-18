#pragma once
#include <iostream>
using namespace std;

class TrianglePeg {
private:
    float width;
public:
    TrianglePeg() {
        this->width = 0;
    }
    TrianglePeg(float _width) {
        this->width = _width;
    }

    float getWidth() {
        return width;
    }

    float getTriangle() {
        float result;
        result = pow(this->width, 2);
        return result;
    }
};
