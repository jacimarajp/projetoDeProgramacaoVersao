#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

/**
 * @brief The Poligono class Representa polígonos convexos de até 100 vértices
 */
class Poligono {
private:
    Point vertices[100];
    int nPontos;

public:
    /**
     * @brief Poligono Incializa a quantidade de vértices como sendo 0, se o usuário não digitar nenhum vértice
     */
    Poligono();
    /**
     * @brief addVertices Adiciona mais um vértice ao polígono
     * <ol>
     * <li> os vértices devem ser adicionadas no sentido anti-horário
     * @param x Coordenada x do vértice
     * @param y Coordenada y do vértice
     */
    void addVertices(float x, float y);
    /**
     * @brief quantPontos Recupera a quantidade de vértices
     * @return Retorna a quantidade de vértices
     */
    int quantPontos();
    /**
     * @brief areaPoligono Calcula a área de um polígono utilizando a regra de Shoelaces
     * @return Retorna a área do polígono
     */
    float areaPoligono();
    /**
     * @brief transladaPoligono Translada o polígono em relação a um ponto
     * @param a Coordenada x do ponto
     * @param b Coordenada y do ponto
     */
    void transladaPoligono(float a, float b);
    /**
     * @brief rotacionaPoligono Rotaciona o polígono em relação a um ponto p teta graus
     * @param p Ponto
     * @param angulo Ângulo em graus
     */
    void rotacionaPoligono(Point p,float angulo);
    /**
     * @brief imprimePoligono Imprime o polígono na forma: (x0,y0) -> (x1,y1) -> (x2,y2) ...
     */
    void imprimePoligono();
    /**
     * @brief print Imprime uma coordenada escolhida do vértice
     * <ol>
     * <li> o usuário deve passar o número do ponto que o vértice se encontra para imprimi-lo
     * <li> Exemplo: (x0,y0) -> (x1,y1) -> (x2,y2), print(1), vai imprimir (x1,y1)
     */
    void print(int);
};


#endif // POLIGONO_H
