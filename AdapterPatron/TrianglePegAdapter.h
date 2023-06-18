#pragma once
#include <iostream>
#include "RoundPeg.cpp"
#include "SquarePeg.cpp"
#include "TrianglePeg.cpp"
#include <Math.h>
using namespace std;

class TrianglePegAdapter : public RoundPeg {
private:
    TrianglePeg tri;
public:
    TrianglePegAdapter(TrianglePeg _tri) {
        this->tri = _tri;
    }
    float getRadiusTriangle() {
        double result;
        // Calculate a minimum circle radius, which can fit this peg.
        result = (sqrt(pow((tri.getWidth() / 2), 2) * 2));
        return result;
    }
};