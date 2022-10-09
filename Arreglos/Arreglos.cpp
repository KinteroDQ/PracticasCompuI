#include <iostream>
#include <array>

#define LEN 3  //Número de elementos en los arreglos

// Añadir std para fácil llamado de funciones
bool arr;
using namespace std;

// Declaración de funciones
void ImprimirArreglo(array<float, LEN> arreglo);
array<float, LEN> LlenarArreglo(void);
array<float, LEN> MultiplicarArreglo(array<float, LEN> arreglo, float multiplo);
array<float, LEN> SumarArreglos(array<float, LEN> arr1, array<float, LEN> arr2);

int main()
{
    char decision;
    array<float, LEN> arr = { 0 }; // Inicializamos el arreglo con ceros como buena práctica
    arr = LlenarArreglo(); // Solicitamos al usuario que llene un arreglo y lo asignamos a nuestro arreglo principal
    ImprimirArreglo(arr);
    cout << "Operación: ";
    cin >> decision;
    // Si la operación no es '+' de suma, o '*' de multiplicación, seguimos preguntando al usuario.
    while (decision != '+' && decision != '*')
    {
        cout << "Operación: ";
        cin >> decision;
    }
    // Si se ingresa la multiplicación
    if (decision == '*') {
        float factor;
        cout << "Factor: ";
        cin >> factor;  // Pedimos el factor a multiplicar
        arr = MultiplicarArreglo(arr, factor); // Multiplicamos nuestro arreglo principal por el factor y el resultado lo asignamos a nuestro arreglo principal.
    }
        // Si se ingresa la suma
    else if (decision == '+') {
        array<float, LEN> arr2 = {0}; // Creamos el segundo arreglo y lo inicializamos en ceros
        arr2 = LlenarArreglo(); // Pedimos al usuario que llene otro arreglo y lo asignamos a nuetsro nuevo arreglo
        arr = SumarArreglos(arr, arr2); // Sumamos ambos arreglos elemento a elemento, y reasignamos el resutlado a nuestro arreglo principal
    }
    cout << "Resultado: "<<endl;
    ImprimirArreglo(arr); // Imprimimos el resultado de la operación sobre el arreglo principal
    return 0; // Indicamos que salimos del programa con éxito
}

// Imprime los elementos del arreglo 'arreglo' separando cada elemento con un espacio en blanco
void ImprimirArreglo(array<float, LEN> arreglo)
{
    for (int i = 0; i < LEN; i++){
        cout << arreglo[i] << ' ';
        cout << '\n';
    }

}

// Llena un arreglo de tamaño LEN y lo "regresa" como resultado
array<float, LEN> LlenarArreglo()
{
    cout << "ingresa 3 valores"<<endl;

    array<float, LEN> arregloTemporal ={0};//llenar areglo

    for ( int i=0; i<LEN;i++ ){
        cout << " valor:";
        cin  >> arregloTemporal [i];
    }

    cout << " este es el valor guardado es  "<<endl;


    return arregloTemporal;
}

// Multiplica cada elemento del arreglo 'arreglo' por el factor 'mult'
array<float, LEN> MultiplicarArreglo(array<float, LEN> arreglo, float multiplo)
{
    array<float, LEN> arregloResultado = {0}; // arreglo temporal
    for (int i = 0; i < LEN; i++){
        arregloResultado[i] = arreglo[i] * multiplo;
    }
    return arregloResultado;
}

// Suma elemento a elemento los arreglos 'arr1' y 'arr2' y regresa el arreglo resultante
array<float, LEN> SumarArreglos(array<float, LEN> arr1, array<float, LEN> arr2)
{
    array<float, LEN> arregloResultadoSuma = { 0 }; // arreglo temporal
    for (int i = 0; i < LEN; i++){

        arregloResultadoSuma[i] = arr1[i] + arr2[i] ;
        arregloResultadoSuma[i] = arr1[i] + arr2[i] ;

    }
    return arregloResultadoSuma;
}
