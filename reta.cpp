#include "reta.h"
#include <iostream>
using namespace std;

Reta::Reta(int x1,int y1,int x2,int y2){
    this->x1=x1;
    this->y1=y1;
    this->x2=x2;
    this->y2=y2;
}

void Reta::draw(Screen &t){
    int slope;
    int dx, dy, incE, incNE, d, y;
    dx = x2 - x1;
    dy = y2 - y1;

    if (dy < 0){
        slope = -1;
        dy = -dy;
    }
    else{
        slope = 1;
    }
    // constante de Bresenham
    incE = 2 * dy;
    incNE = 2 * dy - 2 * dx;
    d = 2 * dy - dx;
    y = y1;

    for (int x = x2; x <= x1; x++){

        t.setPixel(x, y);
        if (d <= 0){
            d += incE;
        }
        else{
            d += incNE;
            y += slope;
        }
    }

}

