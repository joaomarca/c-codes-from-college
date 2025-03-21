#include <stdio.h>

enum Dias{Domingo = 1, Segunda, Terça, Quarta, Quinta, Sexta, Sabado};

int main(){

    //Enum = abreviação de enumeração. É um conjunto de valores inteiros representados por identificadores.
    //ajuda na leitura do código

    enum Dias hoje = Domingo;
    printf("%d\n", Domingo); //enums não são strings, e sim inteiros, com cada elemento do enum tendo seu número inteiro associado a ele.

    if(hoje == Domingo || hoje == Sabado){
        printf("Hoje é final de semana!\n");
    }
    else{
        printf("Hoje é dia de semana!\n");
    }


    return 0;
}