
#include <iostream>

using namespace std;

int main() {

    int a, b, resultado, op;// estas son las variables a ocupar
    float resultadoDivicion,resultadoMultipocasion1 , resultadoMultipocasion2 ;


    printf( " $ ./ Calculadora ");
    printf( " Este programa hace operaciones basicas entre dos numeros.");
    printf( " Primer numero: 5 ");
    printf( " Operacion: 1. + suma 2. - resta  3. * multiplicasion  4. / division 5. modulo  ");
    printf( " Segundo numero: 8 ");
    printf(" QUE OPERACION VAS A REALIZAR ");

    scanf("%d", &op);
    switch (op)
    {
        case 1:
            printf("Ingrese el numero");
            scanf("%d", &a);
            printf("Ingrese el numero");
            scanf("%d", &b);
            resultado=a+b;
            printf( " el resultado es=%d ", resultado);
            break;

        case 2:
            printf("Ingrese el numero");
            scanf("%d", &a);
            printf("Ingrese el numero");
            scanf("%d", &b);

            resultado=a - b;
            printf( " el resultado es=%d ", resultado);
            break;

        case 3:
            printf("Ingrese el numero");
            scanf("%d", &a);
            printf("Ingrese el numero");
            scanf("%d", &b);
            resultadoMultipocasion1=a * b;
            resultadoMultipocasion2=a * b;
            printf( " \" el resultado es=%d \" ", resultado);

            float resultadoMultipocasion1 ( float (a), float (b) );
            if (a = 0) ;
            else printf( "ES CERO LA OPERACION" );

            float resultadoMultipocasion2( float (a), float (b) );
            if (b = 0) ;
            else printf( "ES CERO LA OPERACION" );
            break;

        case 4:
            printf("Ingrese el numero");
            scanf("%d", &a);
            printf("Ingrese el numero");

            scanf("%d", &b);
            resultadoDivicion=float(a) /float(b);
            printf( " el resultado es=%f ", resultadoDivicion);
            float resultadoDivicion ( float (a), float (b) );
            if (b!= 0) ;
            else printf( "NO ES POSIBLE LA OPERACION" );
            break;


        case 5:
            printf("Ingrese el numero");
            scanf("%d", &a);
            printf("Ingrese el numero");
            scanf("%d", &b);

            resultado=a % b;
            printf( " el resultado es=%d ", resultado);
            break;
    }
    printf(" \n\n");


    return 0;
}
