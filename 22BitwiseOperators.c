#include <stdio.h>

int main(){

    //Operadores bitwise(bitwise operators) são operadores especiais usados em programação bit-a-bit

    // & = AND(e) (um e outro)
    // | = OR(ou) (um, outro ou os dois)
    // ^ = XOR(ou exclusivo) (um ou outro, mas não os dois)
    // << = esquerda
    // >> = direita

    int x = 6;  // 6 =  00000110
    int y = 12; // 12 = 00001100
    int z = 0;  // 0 =  00000000

    

    //o operador & vai checar coluna por coluna os valores dos bits de x e y. Já que é um e(&), o valor dos bits de z só se tornaram 1 se, na mesma coluna,
    //o valor dos bits de x e y também forem 1. No nosso caso, isso só irá acontecer na sexta coluna, retornando o valor de z como 00000100 ou 4.

    z = x & y;

    printf("Operador & : %d\n", z);


    //Agora, usando o operaror OR(ou), em todas as colunas onde x ou y(ou os dois) forem 1, serão passadas também como 1 para a variável z. No nosso caso,
    //o valor de z retornará como 00001110, ou 14.

    z = x | y;

    printf("Operador | : %d\n", z);

    //Usando o operador XOR(ou exclusivo), somente nas colunas onde ou x ou y forem 1, mas não os dois, retornaram 1 para z. No nosso caso, o valor de z
    //retornará como 00001010, ou 10.

    z = x ^ y;

    printf("Operador ^ : %d\n", z);

    //o operador << (left shift) vai mover todos os bits para a esquerda, excluindo o primeiro, e adicionando um 0 no final.
    //no nosso caso, o nosso valor de z irá de 00000110 (6) para 00001100 = 12.

    z = x << 1;

    printf("Operador << : %d\n", z);

    z = x << 2; //de 00000110 (6) para 00011000 (24)

    printf("Operador << 2x : %d\n", z);
    
    //o operador << faz a mesma coisa que o left shift, mas para direita. no nosso caso, usando a variável y,
    //iremos do valor de 00001100 (12) para 00000110 (6).

    z = y >> 1;

    printf("Operador >> : %d\n", z);

    z = y >> 2; //de 00001100 (12) para 00000011 (3)

    printf("Operador >> 2x : %d\n", z);

    return 0;
}