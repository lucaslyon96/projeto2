#ifndef CIRCULO_H
#define CIRCULO_H
#include <iostream>
#include "figurageometrica.h"

using namespace std;
class Circulo: public FiguraGeometrica{
private:
    float xc,yc,raio;
    int pre;
public:
    Circulo(float xc,float yc,float raio,int pre);
    void draw (Screen &t);
};


#endif // CIRCULO_H
