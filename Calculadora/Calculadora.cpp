
#include <iostream>

using namespace std;

int main() {

    int a=0, b=0, resultado; // estas son las variables tipo int a ocupar
    char op='+';             // estas son las variables tipo char a ocupar


    cout << "Introdusca el numero deseado " << endl; //ImprimimosElValorFactorial

    cout << "Valor: "; //ImprimimosElValorPedido
    cin >> a;//PedirUnNumero
    cout<< endl;
    cout << "operacion: "; //ImprimimosElValorPedido
    cin >> op; //PedirUnNumero
    cout<< endl;

    while (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
    {

        cout << "operacion: ";
        cin >> op;
    }


    cout << "Valor: " ; //ImprimimosElValorPedido
    cin >> b;//PedirUnNumero



    float resultadoDivicion,resultadoMultipocasion1;

    switch(op)
    {

        case '+':
            resultado=a+b;
            printf( " el resultado es=%d ", resultado);
            break;

        case '-':

            resultado=a - b;
            printf( " el resultado es=%d ", resultado);
            break;

        case '*':

            resultadoMultipocasion1=  float (a) * float (b);

            printf( " el resultado es=%f ", resultadoMultipocasion1);
            break;

        case '/':

            if (b!= 0) ;
            else printf( "NO ES POSIBLE LA OPERACION" );
            resultadoDivicion=float(a) /float(b);
            printf( " el resultado es=%f ", resultadoDivicion);
            float resultadoDivicion ( float (a), float (b) );

            break;

        case '%':

            resultado=a % b;
            printf( " el resultado es=%d ", resultado);
            break;
    }
    printf(" \n\n");

    return 0;
}
