#pragma once
#include <iostream>
#include "RoundPeg.cpp"
#include "SquarePeg.cpp"
#include "TrianglePeg.cpp"
#include <Math.h>


using namespace std;
class SquarePegAdapter : public RoundPeg {
private:
    SquarePeg peg;
    TrianglePeg tri;
public:
    SquarePegAdapter(SquarePeg _peg) {
        this->peg = _peg;
    }
    SquarePegAdapter(TrianglePeg _tri) {
        this->tri = _tri;
    }
    float getRadiusSquare() {
        double result;
        // Calculate a minimum circle radius, which can fit this peg.
        result = (sqrt(pow((peg.getWidth() / 2), 2) * 2));
        return result;
    }

    float getRadiusTriangle() {
        double result;
        // Calculate a minimum circle radius, which can fit this peg.
        result = (sqrt(pow((tri.getWidth() / 2), 2) * 2));
        return result;
    }
};
