#include <iostream>
#include <array>
#include <string>
#ifndef CARGAELECTRICA_GRUPO_H
#define CARGAELECTRICA_GRUPO_H
using namespace std;
using namespace std;

 class Grupo{
 public:
     Grupo(string ,float ,int );//Constructor
     Grupo();
     string GetN();
     float Getpk();
     int GetCar();


 private:
    string nombre;
    int cargaGrupo;
    float PkGrupo;
};


#endif //CARGAELECTRICA_GRUPO_H
