#ifndef RETA_H
#define RETA_H
#include <figurageometrica.h>
#include <iostream>

using namespace std;


class Reta: public FiguraGeometrica{
private:
    int x1,y1,x2,y2;
public:
    Reta(int x1,int y1,int x2,int y2);
    void draw(Screen &t);
    friend void Bresenham(int x1,int y1,int const x2,int const y2);
};

#endif // RETA_H
