#include <stdio.h>
#include <string.h>

#define BOLD "\e[1m" 
#define DEF "\e[m"   


int main(){

    //loop for = repete uma seção do código um numéro limitado de vezes
    
    for(int i = 1; i < 11; i++){
        printf("%d", i);
    }
    printf("\n");

    //Código cria uma int e imprime ela, aumentando seu valor por 1 cada vez, até chegar no 10(enquanto for menor que 11)
    

    //loop while = repete uma seção do código enquanto uma condição for verdadeira

    char nome[25];
    printf("\nQual é o seu nome?\n");
    fgets(nome, 25, stdin);
    nome[strlen(nome) -1] = '\0';
    
    while(strlen(nome) == 0){
        printf("Você não digitou seu nome!\n");
        printf("Qual é o seu nome?\n");
        fgets(nome, 25, stdin);
        nome[strlen(nome) -1] = '\0';
    }
    
    printf("\nOlá, %s!\n", nome);


    //loop do while = repete uma seção do código enquanto uma condição for verdadeira, mas roda no minimo 1x

    int numero = 0;
    int soma = 0;

    do{
        printf("Digite um número maior que 0: ");
        scanf("%d", &numero);
        if(numero > 0){
            soma += numero;
        }

    }while(numero > 0);

    printf("Soma: %d\n", soma);

    //nested loops = loop dentro de outro loop

    //programa a seguir pede um número de linhas, colunas e um simbolo. o programa criará um retângulo com as medidas usando o simbolo.

    int linhas;
    int colunas;
    char simbolo;

    printf("\nDigite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);
    printf("Digite o símbolo desejado: ");
    scanf(" %c", &simbolo);
    printf("\n");

    for(int i = 1; i <= linhas; i++)
    {
        for(int j = 1; j <= colunas; j++){
            printf(BOLD "%c" DEF, simbolo);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}