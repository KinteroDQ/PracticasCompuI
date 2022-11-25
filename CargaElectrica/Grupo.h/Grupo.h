# include "Grupo.h"
using namespace std;
Grupo::Grupo(string nom, float p , int  c) {
nombre=nom;
cargaGrupo=c;
PkGrupo=p;
}
Grupo::Grupo() {
    nombre="eduardo";
    cargaGrupo=0;
    PkGrupo=0;
}

string Grupo::GetN() {
    return nombre;
}
float Grupo::Getpk() {
    return PkGrupo;
}
int Grupo::GetCar() {
    return cargaGrupo;
}
