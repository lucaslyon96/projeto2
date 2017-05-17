#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <screen.h>
#include <iostream>

using namespace std;

class FiguraGeometrica
{
public:
    FiguraGeometrica();
    virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
