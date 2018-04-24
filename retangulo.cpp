#include "retangulo.h"

Retangulo::Retangulo()
{
    altura = 0;
    largura = 0;
}


Retangulo::Retangulo(float x, float y, float _largura, float _altura)
{
    addVertices(x,y);
    addVertices(x,y-_altura);
    addVertices(x+_largura,y-_altura);
    addVertices(x+_largura,y);
}
Retangulo::~Retangulo(){

}
