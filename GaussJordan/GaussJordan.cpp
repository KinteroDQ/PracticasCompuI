#include <iostream>
#include <array>

// Añadir std para fácil llamado de funciones
using namespace std;

//// Declaración de funciones
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz & miMatriz);

template <typename matriz>
void ImprimirMatriz(matriz & miMatriz);

template <typename matriz>
void GaussJordan(matriz & miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz & miMatriz);


int main()
{
    // Definimos el número de variables de nuestro sistema
    const int variables = 3;
    // El número de columnas será el número de variables más su solición para cada ecuación
    const int columnas = variables + 1;
    // Inicializamos la matriz que vamos a ocupar
    array <array<float, columnas>, variables> miMatriz = { 0 };
    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);
    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);
    
    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz);
    return 0; // Indicamos que salimos del programa con éxito
}
/*
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/
template <typename matriz>
void LlenarMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> miMatriz[i][j];

        }
    }
}
/*
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        cout << "[ ";
        for (int j = 0; j < variables + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n";
    }
}
/*
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirSolucion(matriz & miMatriz)
{
    cout << "Solución:"<<endl ;
    int variables = miMatriz.size();
    int contadorDeCeros = 0;
    int solucion = 1;
    
     for (int k = 0; k < variables; k++){
       for(int i = 0; i < variables ; i++ ){
           if(miMatriz[k][i] == 0){
               contadorDeCeros = contadorDeCeros + 1;
               
               //cout << "no existe solucion "<<endl ;
           }
           
        
       }
       ///cout << contadorDeCeros<<endl ;
       if(contadorDeCeros == variables){
           cout << "No existe solución "<<endl ;
           
           solucion = 0 ;
       }
       contadorDeCeros = 0;
       
    }
    

    if(solucion == 1){
      for (int k = 0; k < variables; k++){
        cout << "X" << k << "= " ;
        miMatriz[k][variables] = miMatriz[k][variables] / miMatriz[k][k] ;
        cout << miMatriz[k][variables] << "\n" ;
        miMatriz[k][k] = 1;
       }  
    }
    
   


}
/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/
template <typename matriz>
void GaussJordan(matriz & miMatriz)
{
    int variables = miMatriz.size();
    float z = 0;
    cout << "\n";
    for (int k = 0; k < variables-1; k++) {
        for (int i = k+1; i < variables; i++) {
            z = miMatriz[i][k] /miMatriz[k][k];
            miMatriz[i][k] = 0 ;
            for (int j = k+1; j < variables + 1; j++){
                miMatriz[i][j] = miMatriz[i][j] - (z*miMatriz[k][j])  ;
            }
        }
    }
    
   
    z = 0;
    for (int k =  variables-1; k > -1; k--) {

        for (int i = k-1 ; i > -1; i--) {
            z = miMatriz[i][k] /miMatriz[k][k];
            miMatriz[i][k] = 0 ;
            for (int j = k+1; j < variables + 1; j++){
                miMatriz[i][j] = miMatriz[i][j] - (z*miMatriz[k][j])  ;
            }
        }
    }
}
