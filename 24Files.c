#include <stdio.h>

#define BOLD "\e[1m"
#define DEF "\e[m"

int main(){
/*    
    //Escrevendo arquivos
    //usamos o tipo de dado FILE para criar um arquivo pointer e antecedemos seu nome com * para que seja um pointer para um arquivo.
    //fopen é a função usada para abrir um arquivo, enquanto fclose é usada para fechar um arquivo.

    FILE *pArquivo = fopen("/home/chico/Downloads/arquivo.txt", "w"); //o primeiro argumento é o nome do arquivo, enquanto o segundo determina a ação que queremos fazer abrindo o arquivo.
                                       //ela pode ser w para write, a para append, r para read, r+ para read e write(erro se não existir arquivo),
                                       //w+ para read e write(cria arquivo novo se não conseguir abrir), e a+ para read e append. antecedemos esse argumento com
                                       //"b" para o caso de arquivos binários. exemplo: bw, br, ba.

    fprintf(pArquivo, "\nBoa noite!"); //função para escrever num arquivo. Se rodado novamente com outro texto, substitui o antigo.

    fclose(pArquivo);


    if(remove("arquivo.txt") == 0){
        printf("Arquivo excluído!\n");
    }
    else{
        printf("Arquivo NÃO excluído!\n");
    }


*/

    //Lendo arquivos
    //usamos o mesmo código de antes, dessa vez mudamos o segundo argumento da função open para o desejado, no nosso caso, algum que consiga ler.

    FILE *pArquivo = fopen("/home/chico/Área de trabalho/arquivo12.txt", "r");

    char buffer[255]; //a nossa variável buffer irá guardar uma linha de cada vez do nosso arquivo.

    //Para evitar um segmentation fault, podemos checar se o arquivo foi localizado e aberto antes de tentarmos ler.

    if(pArquivo == NULL){
        printf(BOLD"Arquivo não encontrado! Cheque a ortografia e/ou o tipo do arquivo.\n"DEF);
        return 0;
    }
    else{
        printf(BOLD"Arquivo encontrado! Mostrando conteúdo:\n\n"DEF);
        while(fgets(buffer, 255, pArquivo) != NULL){
        printf("%s", buffer);
        }
    }

    
    

    //o comando fgets vai ler uma única linha de texto do arquivo.
    //se quisermos ler o texto todo, podemos colocar o código num loop while.
    //assim que não tivermos mais linhas para ler, o comando fgets vai retornar NULL
    //então, enquanto o comando não retornar NULL, iremos ler e mostrar cada linha.

    return 0;
}