/*

Programa inclui 4 modos:

1- Pede o valor dos 3 lados de um triângulo e retorna o tipo de triângulo.
2- Pede o valor dos 2 catetos de um triângulo e retorna o valor da hipotenusa.
3- Pede o valor do raio de um círculo e retorna o valor da circumferência.
4- Calculadora que pede primeiro a operação e depois os dois digitos a serem usados.

*/ 

#include <stdio.h>
#include <string.h>
#include <math.h>

#define BOLD "\e[1m"
#define DEF "\e[m"

int main(){

    int programa = 0;

    //Variáveis do programa de triângulos
    int possivel = 0;
    float A;
    float B;
    float C;
    char triangle[12] = "N/A";

    //Variáveis da calc de hipotenusa
    double a;
    double b;
    double c;

    //Variáveis da calc de circumferencia
    const double PI = 3.14159;
    double raio;
    double circumferencia;
    double area;

    //Variáveis da calculadora
    char operador;
    double num1;
    double num2;
    double resultado;


    printf(BOLD"Que programa deseja executar?\n");
    printf("Tipo de triângulos: Digite 1\n");
    printf("Calculadora de hipotenusa: Digite 2\n");
    printf("Calculadora de circumferência: Digite 3\n");
    printf("Calculadora padrão: Digite 4\n");
    scanf("%d", &programa);

    if(programa == 1){

        printf("\nPROGRAMA DE TRIÂNGULOS"DEF);

        printf("\nMedida do lado A: ");
        scanf("%f", &A);

        printf("\nMedida do lado B: ");
        scanf("%f", &B);

        printf("\nMedida do lado C: ");
        scanf("%f", &C);

        if(A >= (B + C) || B >= (A + C) || C >= (A + B)){
            printf("\nNão é possível formar um triângulo com essas medidas!!\n");
        }
        else{
            possivel = 1;
        }

        if(possivel == 1){
    
            if(A == B && B == C){
                strcpy(triangle, "Equilátero");
            }
            else if(A == B || B == C){
                strcpy(triangle, "Isósceles");
            }
            else{
                strcpy(triangle, "Escaleno");
            }

            printf("O triângulo formado por esses lados é um triângulo %s!\n", triangle);
            
        }
    }
    else if(programa == 2){
        
        printf("\nCALCULADORA DE HIPOTENUSA"DEF);
        printf("\nMedida do cateto A: ");
        scanf("%lf", &a);
        printf("\nMedida do cateto B: ");
        scanf("%lf", &b);
    
        c = hypot(a, b);
    
        printf("\nMedida da hipotenusa: %.2lf\n", c);
    
    }
    else if(programa == 3){
        printf("\nCALCULADORA DE CIRCUMFERÊNCIA"DEF);

        printf("\nDigite o raio do círculo em centímetros: ");
        scanf("%lf", &raio);

        circumferencia = 2 * PI * raio;
        area = raio * raio * PI;

        printf("\nA circumferência do círculo mede %lf centímetros.\n", circumferencia);
        printf("A área do círculo mede %lf centímetros quadrados.\n", area);
    }
    else if(programa == 4){

        scanf("%c", &operador);
        printf("\nCALCULADORA PADRÃO"DEF);
        printf("\nDigite um operador (+, -, *, /, %%, p(potencia)): ");
        scanf("%c", &operador);
        
        if(operador == '%'){
            printf(BOLD"Aviso!"DEF" Esse operador só funciona com números inteiros!\nTenha certeza de digitar apenas números inteiros para obter um resultado preciso.\n");
        }

        printf("\nDigite o primeiro número (máximo de 2 digitos decimais): ");
        scanf("%lf", &num1);
        
        printf("\nDigite o segundo número (máximo de 2 digitos decimais): ");
        scanf("%lf", &num2);
        
        switch(operador){
            case '+':
                resultado = num1 + num2;
                printf("O resultado de %.2lf %c %.2lf é"BOLD" %.2lf\n"DEF, num1, operador, num2, resultado);
                break;
            case '-':
                resultado = num1 - num2;
                printf("O resultado de %.2lf %c %.2lf é"BOLD" %.2lf\n"DEF, num1, operador, num2, resultado);
                break;
            case '*':
                resultado = num1 * num2;
                printf("O resultado de %.2lf %c %.2lf é"BOLD" %.2lf\n"DEF, num1, operador, num2, resultado);
                break;
            case '/':
                resultado = num1 / num2;
                printf("O resultado de %.2lf %c %.2lf é"BOLD" %.4lf\n"DEF, num1, operador, num2, resultado);
                break;
            case '%':
                resultado = fmod(num1, num2);
                printf("O resultado do resto da divisão entre %.2lf e %.2lf é"BOLD" %.4lf\n"DEF, num1, num2, resultado);
                break;
            case 'p':
            case 'P':
                resultado = pow(num1, num2);
                printf("O resultado de %.2lf elevado á %.2lf é"BOLD" %.2lf\n"DEF, num1, num2, resultado);
                break;
            default:
                printf(BOLD"\n%c não é um operador válido!\n"DEF, operador);
        }
    }

    return 0;

    /*
    Para rodar o programa, compile usando 
    gcc code.c -o code -lm 
    no terminal
    */
}