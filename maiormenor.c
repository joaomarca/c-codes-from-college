#include <stdio.h>
#include <time.h>

int main(){
    
    int time = clock();
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

    for(int i = 1; i < 1000001; i++){
        printf("%d\n", i);
    }
    return 0;
}