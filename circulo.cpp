#include "circulo.h"
#include <iostream>
#include <cmath>
using namespace std;

Circulo::Circulo(float xc,float yc,float raio,int pre){
    this->xc=xc;
    this->yc=yc;
    this->raio=raio;
    this->pre=pre;
}

void Circulo::draw (Screen &t){

    //desenha circulo

    for (int i=xc-raio; i<=xc+raio; i++){//em x
        for(int j=yc-raio;j<=yc+raio;j++){//em y
            if(pre==1){
                if(pow(i-xc,2)+pow(j-yc,2)<= pow(raio,2)){
                    t.setPixel(i,j);
                }
            }
            else{
                if(pow(i-xc,2)+pow(j-yc,2)== pow(raio,2)){
                    t.setPixel(i,j);
                }
            }
        }

    }


}
