
#include <iostream>

using namespace std;

int main() {

    int a, b, resultado, op;// estas son las variables a ocupar



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
            printf("Ingrse el numero");
            scanf("%d", &a);
            printf("Ingrse el numero");
            scanf("%d", &b);
            resultado=a+b;
            printf( " el resultado es=%d ", resultado);
            break;

        case 2:
            printf("Ingrse el numero");
            scanf("%d", &a);
            printf("Ingrse el numero");
            scanf("%d", &b);

            resultado=a - b;
            printf( " el resultado es=%d ", resultado);
            break;

        case 3:
            printf("Ingrse el numero");
            scanf("%d", &a);
            printf("Ingrse el numero");
            scanf("%d", &b);
            resultado=a * b;
            printf( " \" el resultado es=%d \" ", resultado);
            break;
        case 4:
            printf("Ingrse el numero");
            scanf("%d", &a);
            printf("Ingrse el numero");

            scanf("%d", &b);
            resultado=a / b;
            printf( " el resultado es=%d ", resultado);
            break;


        case 5:
            printf("Ingrse el numero");
            scanf("%d", &a);
            printf("Ingrse el numero");
            scanf("%d", &b);

            resultado=a % b;
            printf( " el resultado es=%d ", resultado);
            break;
    }
    
    system("loading");
}
