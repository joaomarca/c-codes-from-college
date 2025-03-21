#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define BOLD "\e[1m"
#define DEF "\e[m"

int main(){

    char perguntas[][321] = {"Quantas estrelas tem uma estrela de 5 pontas?: ", "Com quantos anos uma pessoa se torna maior de idade no Brasil?: ", "Dois trens, Trem A e Trem B, saem simultaneamente de Ponto A e Ponto B. Ponto A e B estão a 252.5 milhas de distância entre si.\nTrem A se desloca a 124.7mph para Ponto B, e Trem B se desloca a 253.5mph até ponto A. Se ambos trens saíram as 10:00AM e\nagora são 10:08, quanto tempo levará até que ambos se cruzem?: "};
    
    char opcoes[][30] = {"A. 1", "B. 3", "C. 5", "D. 10",
                         "A. 10", "B. 18", "C. 20", "D. maior", 
                         "A. 31.054 minutos", "B. 16.232 minutos", "C. 32.049 minutos", "D. 32.058 minutos"};

    int numeroopcoes = 4;
    char respostas[3] = {'C', 'B', 'D'};
    int numeroperguntas = sizeof(perguntas)/sizeof(perguntas[0]);
    char tentativa = 'C';
    int tentativas;
    int acertos = 0;
    int erros = 0;

    printf(BOLD "Jogo de perguntas! Você receberá uma pergunta com 4 alternativas e tentará acertar a pergunta! Vamos começar.\n" DEF);

    for(int i = 0; i < numeroperguntas; i++){
        printf(BOLD "%s\n" DEF, perguntas[i]);
        for(int j = (i * numeroopcoes); j < (i * numeroopcoes) + numeroopcoes; j++){
            printf("%s\n", opcoes[j]);
        }
        printf("Alternativa: ");
        scanf(" %c", &tentativa);

        tentativa = toupper(tentativa);

        if(i == numeroperguntas - 1 && tentativa == respostas[i]){
            printf(BOLD "Resposta exata! Parabéns! Fim de jogo." DEF);
            acertos++;
        }
        else if(tentativa == respostas[i]){
            printf(BOLD "Resposta exata! Parabéns! Próxima pergunta:\n" DEF);
            acertos++;
        }
        else if(i == numeroperguntas - 1){
            printf(BOLD "Resposta errada! Mais sorte da próxima vez. Fim de jogo.\n" DEF);
            erros++;
        }
        else{
            printf(BOLD "Resposta errada! Mais sorte da próxima vez. Proxima pergunta:\n" DEF);
            erros++;
        }
    }
    printf("\nNúmero de acertos: %d\nNúmero de erros: %d\nObrigado por jogar!\n", acertos, erros);
    return 0;
}