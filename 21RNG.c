#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOLD "\e[1m"
#define DEF "\e[m"

int main(){

    //pseudo random numbers = numeros que são estatisticamente aleatórios. Não são completamente aleatórios, se baseiam numa seed para gerar o número
    //no nosso caso, a variável time(0). Não usar para fins de criptografia, por serem não seguros.

    srand(time(0)); //seta a seed para criação de numeros aleatórios para o retorno da função time()(segundos desde 1 de janeiro de 1970)

    const int minimo = 1;
    const int maximo = 100;
    int tentativa = 1;
    int tentativas = 1;

    printf("\nEsse é um" BOLD " jogo de adivinhação" DEF "!\nA máquina irá sortear um número de 1 a 100 e você tentará adivinhar.\n");

    int numerosorteado = rand() % maximo + minimo;

    printf("numero: %d\n", numerosorteado);

    do{
        tentativa = 1;
        printf("Digite um número de 1 a 100: ");
        if (scanf("%d", &tentativa) != 1){
            while (getchar() != '\n');
            printf("Entrada inválida! Digite um número!\n");
            tentativa = 1;
            continue;
        }
        if(tentativa < minimo || tentativa > maximo){
            printf("Número inválido!\n");
        }
        else if(tentativa == numerosorteado){
            printf(BOLD "\nParabéns!! Você acertou o número!\n" DEF);
        }
        else if(tentativa > numerosorteado){
            printf("\nO número sorteado é mais baixo que esse!\n");
            printf("Tente novamente!\n\n");
        }
        else{
            printf("\nO número sorteado é mais alto que esse!\n");
            printf("Tente novamente!\n\n");
        }
        tentativas++;
    }while(tentativa != numerosorteado);

    printf("Tentativas: %d\n", tentativas);

/*
    printf("\nEsse é um" BOLD " jogo de adivinhação" DEF "!\nA máquina irá pensar num número de 1 a 5 e você tentará adivinhar.\n");
    printf("Digite um número de 1 a 5 e veja se você acertou.\n\n");
    scanf("%d", &tentativa);

    if(tentativa > 5 || tentativa < 1){
        printf("Número inválido! Digite um número de 1 a 5!\n");
        return 0;
    }

    if(tentativa == numerosorteado){
        printf(BOLD "Parabéns!! Você acertou o número!" DEF);
    }

    while(tentativa != numerosorteado){
        printf("\nVocê errou!\nNúmero certo: %d\nSua tentativa: %d\n", numerosorteado, tentativa);
        printf("Mais sorte da próxima vez!");
        return 0;
    }
*/
    return 0;
}