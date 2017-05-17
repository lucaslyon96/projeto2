#include "retangulo.h"
#include <iostream>

using namespace std;

    Retangulo::Retangulo(){

    }

    Retangulo::Retangulo(float x, float y, float l, float h){
        this->x=x;
        this->y=y;
        this->l=l;
        this->h=h;
    }

    void Retangulo::draw(Screen &t){
        t.setPixel(x,y);
        for(int i=x;i<=x+l;i++){
            t.setPixel(i,y);
        }
        for(int i=x;i<=y+h;i++){
            t.setPixel(x,i);
        }

        for(int i=x;i<=y+h;i++){
            t.setPixel(x+l,i);
        }
        for(int i=x;i<=x+l;i++){
            t.setPixel(i,y+h);
        }

    }

