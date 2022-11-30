
#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H


#include <array>

class Punto2D
{
public:
    void SetPosicion(float x,float y);
    void Trasladar(float temp1, float temp2);
    void RotarRespectoAlOrigen(float temp1);
    void Escalar(float temp1, float temp2);
    float GetX();
    float GetY();

private:
    float PX{0}, PY{0};
};


#endif //PUNTOS_PUNTO_H
