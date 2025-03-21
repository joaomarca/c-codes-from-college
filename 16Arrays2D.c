#include <stdio.h>

#define BOLD "\e[1m"
#define DEF "\e[m"

int main(){
    // 2D array = um array onde cada um dos seus elementos é um array
    //            útil se você precisa de uma matriz, grade ou data table

    printf(BOLD "Matrizes (Arrays 2D / Arrays Multidimensionais):\n\n" DEF);

    /*
    int numbers[2][3] = {
                        {1, 2, 3},
                        {4, 5, 6}
                        };
    
    */
        

    //um Array 2D tem dois sets de chaves, o primeiro(pode ficar vazio se for nomear na hora os valores) define a quantia de arrays dentro do array 2D
    //as segundas chaves definem a quantia de elementos que podem estar dentro de cada um dos arrays dentro do array 2D.

    int numbers[3][3];

    int linhas = sizeof(numbers)/sizeof(numbers[0]); //Tamanho do array numbers(3)
    int colunas = sizeof(numbers[0])/sizeof(numbers[0][0]);//Tamanho do primeiro elemento do array numbers(array 123 ou 24 bytes)
                                                           // dividido pela quantia de arrays totais (3) que resulta em 3

    //Você também pode definir os valores da matriz(array 2D) após a sua declaração.

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    //Para imprimir o valor de uma matriz, precisamos usar nested loops(Loops aninhados)

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}