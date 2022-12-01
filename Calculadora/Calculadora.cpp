#include <iostream>

using namespace std;

int main() {

    float a=0, b=0, resultado; // estas son las variables tipo int a ocupar
    char op='+';             // estas son las variables tipo char a ocupar

    cout << "Este programa hace operaciones basicas entre dos numeros." << endl;


    cout << "Primer numero: "; //ImprimimosElValorPedido
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
    cout << "Segundo numero: " ; //ImprimimosElValorPedido
    cin >> b;//PedirUnNumero
    float resultadoDivicion,resultadoMultipocasion1;
    switch(op)
    {
        case '+':
            resultado= a+b;
            cout << "resultado:""\n" ;
            cout << a << "+" <<b<< "=" <<resultado;
            break;
        case '-':
            resultado= a-b;
            cout << "resultado:""\n" ;
            cout << a << "-" <<b<< "=" <<resultado;
            break;
        case '*':
            resultadoMultipocasion1=  a*b;
            cout << "resultado:""\n" ;
            cout << a << "*" <<b<< "=" <<resultadoMultipocasion1;
            break;
        case '/':
            if (b!= 0){
                resultadoDivicion=a / b;
                cout << "resultado:""\n" ;
                cout << a << "/" <<b<< "=" <<resultadoDivicion;
                break;
            }
            printf( "NO ES POSIBLE LA OPERACION" );
            break;


            break;
        case '%':
            resultado =int (a) % int (b);
         cout << "resultado:""\n" ;
         cout << a << "%" <<b<< "=" <<resultado;
            break;
    }
    printf(" \n\n");
    return 0;
}
