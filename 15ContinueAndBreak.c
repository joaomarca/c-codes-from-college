#include <stdio.h>

int main(){

    for(int i = 1; i <= 20; i++){
        /*
        while(i <= 12){
            printf("%d\n", i);
            break;
        }
        while(i >= 14){
            printf("%d\n", i);
            break;
        }
        *///Minha primeira versão, mais extensa. Se for menor ou igual a 12, executa normalmente. Se for maior ou igual a 14, executa normalmente
          //(Não executa quando é um número entre 12 e 14)
        
        if(i == 13){
            continue;
        } //Versão mais curta. O comando "continue", quando executado, pula o resto do loop e faz com que tente rodar novamente.
          //No caso desse loop, ele pula o resto do código(o printf) e faz ele executar novamente, efetivamente pulando o print do numero 13.
          //Se, no lugar do continue, fosse usado um break, o loop pararia completamente, fazendo com que, ao chegar no número 12, o loop acabaria.
        printf("%d\n", i);
    }

    return 0;
}