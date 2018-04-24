#include <poligono.h>
#include <iostream>
#include <math.h>

using namespace std;

Poligono::Poligono(){

    nPontos = 0;
}

void Poligono::addVertices(float x, float y)
{
        vertices[nPontos].setXY(x,y);
        nPontos++;
}

int Poligono::quantPontos(){

    return nPontos;
}

float Poligono::areaPoligono() {

    float laco1=0, laco2=0;

    vertices[nPontos] = vertices[0];

    for(int i=0; i<nPontos+1; i++){
        laco1 += vertices[i].getX() * vertices[i+1].getY();
        laco2 += vertices[i].getY() * vertices[i+1].getX();
    }
    return fabs(laco1 - laco2)/2.0;

}

void Poligono::transladaPoligono(float a, float b){

    for(int i=0; i<nPontos; i++){
        vertices[i] = vertices[i].translada(a,b);
    }
}

void Poligono::rotacionaPoligono(Point ponto,float angulo){
    angulo=(angulo*M_PI)/180;

    Point temporario[nPontos];

    for(int i=0; i<nPontos; i++){
        temporario[i] = vertices[i];
    }

    for(int i=0; i<nPontos; i++){
        temporario[i].setX(((vertices[i].getX() - ponto.getX())*cos(angulo) - (vertices[i].getY() - ponto.getY())*sin(angulo))+ponto.getX());
        temporario[i].setY(((vertices[i].getY() - ponto.getY())*cos(angulo) + (vertices[i].getX() - ponto.getX())*sin(angulo))+ponto.getY());

    }

    for(int i=0; i<nPontos; i++){
        vertices[i] = temporario[i];
    }
}

void Poligono::imprimePoligono(){

    for(int i=0; i<nPontos; i++){
        vertices[i].imprime();
        if(i<nPontos-1){
            cout<<" -> ";
        }
    }

}


void Poligono::print(int a){

    cout << " X : " << vertices[a].getX() << ", Y : " << vertices[a].getY() << endl;
}
