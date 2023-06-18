// AdapterPatron.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include"RoundHole.h"
#include"SquarePeg.h"
#include"SquarePegAdapter.h"
#include"TrianglePegAdapter.h"

using namespace std;

int main() {
    RoundHole* hole = new RoundHole(5);
    RoundPeg* rpeg = new RoundPeg(5);
    if (hole->fits(*rpeg)) {
        cout << "pieza redonda L5 encaja orificio redondo L5." << endl;
    }
    SquarePeg* smallSqPeg = new SquarePeg(1);
    SquarePeg* largeSqPeg = new SquarePeg(10);
    SquarePegAdapter* smallSqPegAdapter = new SquarePegAdapter(*smallSqPeg);
    SquarePegAdapter* largeSqPegAdapter = new SquarePegAdapter(*largeSqPeg);

    if (hole->fits(*smallSqPegAdapter)) {
        cout << "pieza cuadrada M1 encaja orificio redondo L5." << endl;
    }
    if (hole->fits(*largeSqPegAdapter)) {
        cout << "pieza cuadrada M10 no encaja orificio redondo L5." << endl;
    }

    // --- FORMA DEL TRIANGULO
    TrianglePeg* smallTgPeg = new TrianglePeg(2);
    TrianglePeg* largeTgPeg = new TrianglePeg(20);
    TrianglePegAdapter* smallTgPegAdapter = new TrianglePegAdapter(*smallTgPeg);
    TrianglePegAdapter* largeTgPegAdapter = new TrianglePegAdapter(*largeTgPeg);
    if (hole->fits(*smallTgPegAdapter)) {
        cout << "pieza triangular M2 encaja orificio redondo L5." << endl;
    }
    if (hole->fits(*largeTgPegAdapter)) {
        cout << "pieza triangular M20 no encaja orificio redondo L5." << endl;
    }
    return 0;
}