// Programa pede dois números e diz qual o maior, se houver.

#include <stdio.h>

int main(){
    
    int num1;
    int num2;

    printf("Escreva o primeiro número: \n");
    scanf("%d", &num1);
    printf("Escreva o segundo número: \n");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("O número %d é o maior.", num1);
    }
    else if(num2 > num1){
        printf("O número %d é o maior.", num2);
    }
    else{
        printf("Os dois números são iguais.");
    }

    return 0;
}