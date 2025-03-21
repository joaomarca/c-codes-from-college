#include <stdio.h>
#include <string.h>

#define BOLD "\e[1m"
#define DEF "\e[m"

struct Jogador{

    char nome[15];
    int score;
};

typedef struct{
    char nome[25];
    float nota;
} Estudante;

int main(){

    printf(BOLD "Structs:\n\n" DEF);

    //Struct : também conhecidos como registros, um struct é um agrupamento de várias variáveis, podendo ser de tipos diferentes.
    //Todas as variáveis de um struct ficam listadas sob o mesmo nome no bloco de memória. Muito similar a Classes em outras linguagens.

    struct Jogador jogador1; //Tendo que a varíavel jogador1 é do tipo de dado "Jogador", ela contém tanto o char nome como o int score.
    struct Jogador jogador2;

    strcpy(jogador1.nome, "Chico");
    jogador1.score = 1000;

    strcpy(jogador2.nome, "Rayca");
    jogador2.score = 2000;

    printf("%s - %d\n", jogador1.nome, jogador1.score);
    printf("%s - %d\n", jogador2.nome, jogador2.score);


    printf(BOLD "Arrray de Structs:\n\n" DEF);

    Estudante estudante1 = {"Chico", 80};
    Estudante estudante2 = {"Rayca", 85.5};
    Estudante estudante3 = {"Marcelo", 75};
    Estudante estudante4 = {"Gabriel", 70.5};

    Estudante estudantes[] = {estudante1, estudante2, estudante3, estudante4};

    for(int i = 0; i < sizeof(estudantes)/sizeof(estudantes[0]); i++){
        printf("%-12s\t", estudantes[i].nome);
        printf("%.2f\n", estudantes[i].nota);
    }

    return 0;
}