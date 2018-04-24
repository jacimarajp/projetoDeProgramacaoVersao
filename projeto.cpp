#include <iostream>
#include<math.h>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{
   Retangulo R(0,0,3,4);
   Point p(-1.5,2);

   cout<<"Retangulo: ";
   R.imprimePoligono();
   cout<<endl;

   cout<<"Area do Retangulo:  "<<R.areaPoligono()<<endl<<endl;


   R.transladaPoligono(-3,4);
   cout<<"Retangulo transladado: ";
   R.imprimePoligono();
   cout<<endl;
   cout<<"Area do transladado: "<<R.areaPoligono()<<endl<<endl;

   R.rotacionaPoligono(p,30);
   cout<<"Retangulo rotacionado: ";
   R.imprimePoligono();
   cout<<endl;
   cout<<"Area do rotacionado: "<<R.areaPoligono()<<endl<<endl;


   return 0;
}
