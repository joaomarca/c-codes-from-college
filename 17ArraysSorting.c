#include <stdio.h>
#include <string.h>

#define BOLD "\e[1m"
#define DEF "\e[m"

void organizarCrescente(int array[], int tamanho){
    for(int i = 0; i < tamanho; i++){

        for(int j = 0; j < tamanho - 1; j++){
            if(array[j] > array[j + 1]){ //Mudar a condição para < (menor que) muda a organização de crescente para decrescente
                int nTemp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = nTemp;
            }
        }
    }
}

void organizarDecrescente(int array[], int tamanho){
    for(int i = 0; i < tamanho; i++){

        for(int j = 0; j < tamanho - 1; j++){
            if(array[j] < array[j + 1]){ //Mudar a condição para < (menor que) muda a organização de crescente para decrescente
                int nTemp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = nTemp;
            }
        }
    }
}

void imprimirArray(int array[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d ", array[i]);
    }
}

int main(){



    //Antes de ir pro tópico de organização de arrays, precisamos aprender como trocar o valor de duas variáveis
    //se você analisar por um momento, essa ação não deveria ser possível de ser feita sem usar mais váriaveis, já que ao trocar o valor de x para y, não
    //teríamos como mudar o da y para x, ja que x já teria o valor de y, então teríamos duas váriaveis com valor de y

    printf(BOLD "Trocando o valor de duas variáveis:\n\n" DEF);

    char x = 'X';
    char y = 'Y';
    char cTemp;

    printf("x = %c\n", x);
    printf("y = %c\n", y);

    cTemp = x;
    x = y;
    y = cTemp;

    printf("\nx = %c\n", x);
    printf("y = %c\n", y);

    //Para strings, o processo é diferente

    char X[15] = "agua";
    char Y[15] = "fogo";
    char sTemp[15];

    printf("\nx = %s\n", X);
    printf("y = %s\n", Y);

    strcpy(sTemp, X);
    strcpy(X, Y);
    strcpy(Y, sTemp);

    printf("\nx = %s\n", X);
    printf("y = %s\n", Y);

    //Lembrar de definir o mesmo tamanho para as variáveis para evitar erros ao copiar os valores de uma para outra


    printf(BOLD "\nOrganização de Arrays:\n\n" DEF);

    int array[] = {5, 3, 6, 7, 8, 2, 9, 1, 0, 4};
    int tamanho = sizeof(array)/sizeof(array[0]);

    organizarCrescente(array, tamanho);
    imprimirArray(array, tamanho);
    printf("\n");


    organizarDecrescente(array, tamanho);
    imprimirArray(array, tamanho);
    printf("\n");

    return 0;
}