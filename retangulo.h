#ifndef RETANGULO_H
#define RETANGULO_H
#include <figurageometrica.h>
#include <iostream>

using namespace std;

class Retangulo: public FiguraGeometrica
{
private:
    float x,y,l,h;
public:
    Retangulo();
    Retangulo(float x, float y, float l, float h);
    void draw(Screen &t);
};

#endif // RETANGULO_H
