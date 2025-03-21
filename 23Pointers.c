#include <stdio.h>

#define BOLD "\e[1m"
#define DEF "\e[m"

int main(){

    printf(BOLD"ENDEREÇO DE MEMÓRIA:\n"DEF);

    //Memória: um array de bytes dentro da RAM;
    //Bloco de memória: um único byte dentro da memória, usado para guardar algum valor;
    //Endereço da memória: o endereço de onde um bloco de memória está localizado.

    char a;
    int b;
    float c;
    double d;
    char e[255]; //O valor no colchetes é quantos espaços são reservados para a variável. Esse número multiplicado pelo seu espaço normal nos
                 //retorna a quantia em bytes que ela ocupa. O tipo char só ocupa 1 byte naturalmente, então ele permanece como 255.

    int f[255];  //O tipo int ocupa 4 bytes naturalmente, então para encaixar 255 int's, precisamos de 255 * 4 ou 1020 bytes de memória.


    //Mostrando o tamanho em bytes que as variáveis ocupam.
    printf("%ld bytes\n", sizeof(a));
    printf("%ld bytes\n", sizeof(b));
    printf("%ld bytes\n", sizeof(c));
    printf("%ld bytes\n", sizeof(d));
    printf("%ld bytes\n", sizeof(e)); //255 * 1
    printf("%ld bytes\n", sizeof(f)); //255 * 4

    //Mostrando o endereço exato da memória de cada uma das variáveis

    printf("a = %p\n", &a);
    printf("b = %p\n", &b);
    printf("c = %p\n", &c);
    printf("d = %p\n", &d);
    printf("e = %p\n", &e);
    printf("f = %p\n", &f);

    
    printf(BOLD"\nPOINTERS:\n"DEF);

    //Pointers: Pointers são uma referência parecida com variáveis que seguram um valor na memória para outra variável, array, etc.
    //Algumas tarefas são mais facilmente completadas com o uso de pointers.
    // * = operador de indireção (puxar o valor no endereço)


    //Algumas vantagens do uso de pointers:

/*
        *Execução do programa mais rápida;
        *Trabalhar na variável original;
        *Com a ajuda de pointers, conseguimos criar estruturas de dados(linked-list, stack, queue);
        *Retornar mais de um valor com funções
        *Pesquisar e organizar grande número de dados com muita facilidade;
        *Atribuição dinâmica de memória.
*/

    int idade = 17;
    int *pIdade = NULL;
    pIdade = &idade;
    
    printf("Endereço de idade: %p\n", &idade);
    printf("Valor de *pIdade: %p\n", pIdade);

    printf("Tamanho de idade: %ld bytes\n", sizeof(idade));
    printf("Tamanho de pIdade: %ld bytes\n", sizeof(pIdade));

    printf("Valor de idade: %d\n", idade);
    printf("Valor armazenado no endereço armazenado em *pIdade: %d\n", *pIdade);

    return 0;
}