#include "screen.h"
#include <vector>
#include<iostream>
#include<fstream>

using namespace std;


// construtor da classe
Screen::Screen(int xnlin, int yncol){
    nlin=xnlin;
    ncol=yncol;


    mat = vector<vector<char> >(nlin, vector<char>(ncol));
    for(int i=0;i<nlin;i++){
        for(int j=0;j<ncol;j++){
            mat[i][j]='_';
        }
    }
}
// desenha um pixel da matriz usando o caratere
// guardado em 'brush'
void Screen:: setPixel(int x, int y){
    if(x>=0&&y>=0&&x<=nlin&&y<=ncol){
        mat[x][y]=brush;
    }

}

// limpa a tela
void Screen::clear(){
    for(int i=0;i<nlin;i++){
        for(int j=0;j<ncol;j++){
            mat[i][j]=' ';
        }
    }
}

// muda o caractere de desenho
void Screen::setBrush(char brush){
    this->brush=brush;
}

// envia a tela para um stream de saida
ostream& operator<<(ostream &os, Screen &t){
    for(int i=0;i<t.nlin;i++){
        for(int j=0;j<t.ncol;j++){
            os << t.mat[j][i];
        }
        os << endl;
    }
    return os;
}
