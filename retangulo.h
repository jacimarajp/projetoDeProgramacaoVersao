#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
/**
 * @brief The Retangulo class Representa um retângulo(herda a classe polígono)
 */
class Retangulo : public Poligono{
private:
    float largura, altura;
public:
    /**
     * @brief Retangulo Caso o usuário não forneça a largura e altura, estas serão incializadas com 0
     */
    Retangulo();
    /**
     * @brief Retangulo Adiciona os vértices do retângulo, fornecendo apenas a posição (x,y) do vértice superior esquerdo, a largura e a altura
     * @param x Coordenada x do vértice superior esquerdo
     * @param y Coordenada y do vértice superior esquerdo
     * @param _largura Largura do retângulo
     * @param _altura Altura do retângulo
     */
    Retangulo(float x, float y, float _largura, float _altura);
    ~Retangulo();
};

#endif // RETANGULO_H
