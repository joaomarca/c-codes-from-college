#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define BOLD "\e[1m"
#define DEF "\e[m"

int main(){

    //Array = estrutura de dados que consegue armazenar vários valores ao mesmo tempo.
    //Existem tanto arrays de caracteres(char[]) como de valores numéricos(int[] || float[])

    double valores[10];
    srand(time(0)); //setando o tempo atual do computador como seed para rng

    printf(BOLD "Array de números:\n\n" DEF);
    
    for(int n = 0; n <= sizeof(valores)/sizeof(valores[0]); n++){
        valores[n] = (rand() % 20) + 1; //valor do produto n se da por um número aleatório modulado em 20(será um número de 0 a 19) + 1(1 a 20)
        printf("Valor do produto %d: $%.2lf\n", n, valores[n]);
    }
    // sizeof(array)/sizeof(valores[x]) retorna o tamanho do array. mas por que apenas sizeof(array) não faz a mesma coisa?
    // isso se da pelo fato que a função sizeof, sendo usada num array, retorna o valor em bytes que o array está ocupando.
    // no nosso caso, o nosso array "valores" ocupa 80 bytes, já que cada um de seus 10 valores têm reservados 8 bytes na memória
    // dividindo o valor de ocupação do array em bytes(80) pelo valor de ocupação de um dos valores(8), temos o tamanho real do array(10)



    //Arrays de strings = arrays de strings 🤨

    printf(BOLD "\nArray de strings:\n\n" DEF);

    char carros[][12] = {"Mustang", "Corolla", "Lamborghini"};

    //Não podemos mudar manualmente o valor de uma string dentro de um array de strings sem usar o comando strcpy

    //char carros[0] = "Tesla"; //Esse comando ira gerar um erro.

    strcpy(carros[0], "Tesla");

    //Podemos naturalmente usar o printf para exibir qualquer uma das strings de dentro do array



    printf("%s\n", carros[0]);

    //Mas, para exibir todas de uma vez ou um número delas, precisaremos usar um loop

    for(int i = 0; i < sizeof(carros)/sizeof(carros[0]); i++){
        printf("%s\n", carros[i]);
    }

    return 0;
}