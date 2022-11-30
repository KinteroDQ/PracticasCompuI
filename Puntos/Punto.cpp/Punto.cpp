#include <array>
#include <cmath>
using namespace std;

void Punto2D::SetPosicion(float x,float y)
{
    PX=x;
    PY=y;
}

void Punto2D::Trasladar(float temp1, float temp2)
{
    PX=PX+temp1;
    PY=PY+temp2;
}

void Punto2D::RotarRespectoAlOrigen(float temp1)
{
    float r=sqrt((PX*PX)+(PY*PY));
    float theta=atan(PY/PX);
    temp1=(temp1*3.1415926535)/180;

    PX=r*cos(theta+temp1);
    PY=r*sin(theta+temp1);

}

void Punto2D::Escalar(float temp1, float temp2)
{
    PX=PX*temp1;
    PY=PY*temp2;
}

float Punto2D::GetX()
{
    return PX;
}

float Punto2D::GetY()
{
    return PY;
}
