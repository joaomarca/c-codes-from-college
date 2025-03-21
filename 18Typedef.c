#include <stdio.h>

//typedef int inteiro; //usando o typedef, renomeamos a varíavel "int" para "inteiro"
//typedef char usuario[25]; //usando o typedef, criamos um novo tipo de dado que é um array de caracteres de tamanho 25, pelo nome de usuario

typedef struct {
    char nome[25];
    char senha[12];
    int id;
} Usuario;

//Usando o typedef no struct de Usuario, renomeamos o struct inteiro para a palavra-chave "Usuario". Assim, não precisamos usar "struct"
//antes de criar um novo usuário.

int main(){

    //Typedef = palavra-chave reservada para dar um apelido a um tipo de dado.

    //inteiro numero = 27000; //inicializamos e declaramos a variável int usando o seu apelido, inteiro.
    //usuario usuario1 = "Chico";

    //printf("%s, %d\n", usuario1, numero);

    Usuario usuario1 = {"Chico", "12345678", 12121212};
    Usuario usuario2 = {"Rayca", "87654321", 10101010};

    printf("Nome: %s\nID: %d\n\n", usuario1.nome, usuario1.id);
    printf("Nome: %s\nID: %d\n", usuario2.nome, usuario2.id);

    return 0;
}