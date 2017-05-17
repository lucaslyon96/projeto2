#include <iostream>
#include "retangulo.h"
#include "screen.h"
#include "reta.h"
#include "figurageometrica.h"
#include "circulo.h"
#include "retangulo.h"

using namespace std;

int main()
{
   Screen tela(10,10);
   Reta r(5,2,1,4);
   Retangulo a(1,0,2,3);
   Circulo c(5,5,2,1);
   tela.setBrush('*');
   //r.draw(tela);
   //a.draw(tela);
   c.draw(tela);

   cout<<tela;
    return 0;
}

