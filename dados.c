// Programa que roda dados para o usuário e mostra a soma final de todos os valores rodados.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define BOLD "\e[1m" 
#define DEF "\e[m"   

int main(){
    
    int i = 0;
    int dados, lados, rodar = 1;
    long long int resultado = 0;

    while(rodar == 1){
        printf("Quantos dados você quer rodar?(máximo de 100) ");
        scanf("%d", &dados);
        
        if(dados <= 0 || dados > 100){
            printf("Número da dados inválido. Por favor, escolha um número entre 1 e 100!\n\n");
            rodar = 1;
        }
        else{
            rodar = 0;
        }
    }
        
    while(rodar == 0){
        printf("Quantos lados tem esses dados? ");
        scanf("%d", &lados);
        
        if(lados <= 0){
            printf("Número de lados inválido. Por favor, escolha um valor positivo!\n\n");
        }
        else{
            rodar = 1;
        }
    }
        
    srand(time(0));

    int valores[100];
    for(int i = 0; i < dados; i++){
        valores[i] = (rand() % lados) + 1;
    }

    printf("\n");
    
    for(int i = 1; i <= dados; i++){
        printf("Dado de número %d:" BOLD" %d\n" DEF, i, valores[i-1]);
        resultado += valores[i - 1];
    }
    
    printf(BOLD "\nSoma total: %lld\n" DEF, resultado);

    return 0;
}