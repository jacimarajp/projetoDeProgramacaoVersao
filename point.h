#ifndef POINT_H
#define POINT_H

/**
 * @brief The Point class Representa um ponto bidimensional
 */
class Point{
private:
    float x,y;

public:
    /**
     * @brief Point Inicializa as coordenadas x e y com 0, caso o usuário não forneça as coordenadas
     */
    Point();
    /**
     * @brief Point Atribui as coordenadas x e y fornecidas pelo usuário, às variáveis da classe
     * @param _abscissa Coordenada x do ponto
     * @param _ordenada Coordenada y do ponto
     */
    Point(float _abscissa, float _ordenada);
    /**
     * @brief setX Insere na classe a coordenada x do ponto fornecida pelo usuário
     * @param _abscissa Coordena x do ponto
     */
    void setX(float _abscissa);
    /**
     * @brief setY Insere na classe a coordenada y do ponto fornecida pelo usuário
     * @param _ordenada Coordenada y do ponto
     */
    void setY(float _ordenada);
    /**
     * @brief setXY Insere na classe as coordenadas x e y fornecidas pelo usuário
     * @param _abscissa Coordenada x do ponto
     * @param _ordenada Coordenada y do ponto
     */
    void setXY(float _abscissa, float _ordenada);
    /**
     * @brief getX Recupera o valor da coordena x previamente armazenada
     * @return Retorna o valor de x do ponto
     */
    float getX();
    /**
     * @brief getY Recupera o valor da coordenada y previamente armazenada
     * @return  Recupera o valor de y do ponto
     */
    float getY();
    ~Point();
    /**
     * @brief add Soma as coordenadas de um ponto com outro ponto
     * @param p1 Ponto que será adicionado ao outro ponto
     * @return Retorna o valor da soma
     */
    Point add(Point p1);
    /**
     * @brief sub Subtrai as coordenadas de um ponto com outro ponto
     * @param p1 Ponto de será o subtraendo da operação
     * @return  Retorna o valor da subtração
     */
    Point sub(Point p1);
    /**
     * @brief norma Calcula a norma do ponto fornecido
     * @return Retorna o valor da norma
     */
    float norma();
    /**
     * @brief translada Translada um ponto em relação a outro ponto
     * @param a Coordenada x do ponto
     * @param b Coordenada y do ponto
     * @return  Retorna o valor da translação
     */
    Point translada(float a, float b);
    /**
     * @brief imprime Imprimi o ponto na forma: (x,y)
     */
    void imprime();

};

#endif // POINT_H
