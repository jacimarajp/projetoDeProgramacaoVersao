#include "point.h"
#include <iostream>
#include <cmath>

Point::Point(){
    x=0;
    y=0;
}

Point::Point(float _abscissa,float _ordenada){
    x= _abscissa;
    y= _ordenada;
}

void Point::setX(float _abscissa){
    x = _abscissa;
}

void Point::setY(float _ordenada){
    y = _ordenada;
}

void Point::setXY(float _abscissa, float _ordenada){
    x = _abscissa;
    y = _ordenada;
}

float Point::getX(){
    return x;
}

float Point::getY(){
    return y;
}

Point Point::add(Point p1){
    Point NovoP;

    NovoP.x = x + p1.x;
    NovoP.y = y + p1.y;

    return NovoP;
}

Point::~Point(){

}

Point Point::sub(Point p1){
    Point NovoP;
    NovoP.x = x - p1.x;
    NovoP.y = y - p1.y;

    return NovoP;
}

//calcula a distancia entre o ponto (x,y) ate a origem (0,0)
float Point::norma(){
    return sqrt(x*x + y*y);
}

Point Point::translada(float a, float b){

    Point NovoP;
    NovoP.x = x + a;
    NovoP.y = y + b;

    return NovoP;

}

void Point::imprime(){
    std::cout << "("<<x<<","<<y<<")";
}
