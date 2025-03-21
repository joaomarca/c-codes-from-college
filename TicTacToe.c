#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define BOLD "\e[1m" 
#define DEF "\e[m"   

int velha(char simbolos[][9]){
    if(simbolos[0][0] == simbolos[0][1] && simbolos[0][1] == simbolos[0][2] && simbolos[0][0] != '*'){
        printf("Velha!!");
        return 0;
    }
        return 1;
}

int main(){

    char simbolos[1][9] = {'*', '*', '*', '*', '*', '*', '*', '*', '*'};
    char local;
    int localnum;

    printf(BOLD"\n  %c  |  %c  |  %c  \n", simbolos[0][0], simbolos[0][1], simbolos[0][2]);
    printf("—————+—————+—————\n");
    printf("  %c  |  %c  |  %c  \n", simbolos[0][3], simbolos[0][4], simbolos[0][5]);
    printf("—————+—————+—————\n");
    printf("  %c  |  %c  |  %c  \n"DEF, simbolos[0][6], simbolos[0][7], simbolos[0][8]);


    do{
        printf("Digite o lugar em que deseja colocar seu símbolo (e.g. A2, B3): ");
        
        scanf(" %c", &local);
        scanf("%d", &localnum);
    
        local = toupper(local);
        switch(local){
            case 'A':
            switch(localnum){
                case 1:
                simbolos[0][0] = 'X';
                break;
                
                case 2:
                simbolos[0][1] = 'X';
                break;
                
                case 3:
                simbolos[0][2] = 'X';
                break;
            }
            break;
            case 'B':
            switch(localnum){
                case 1:
                simbolos[0][3] = 'X';
                break;
                
                case 2:
                simbolos[0][4] = 'X';
                break;
                
                case 3:
                simbolos[0][5] = 'X';
                break;
            }
            break;
            case 'C':
            switch(localnum){
                case 1:
                simbolos[0][6] = 'X';
                break;
                
                case 2:
                simbolos[0][7] = 'X';
                break;
                
                case 3:
                simbolos[0][8] = 'X';
                break;
            }
            break;
        }
    }while (velha(simbolos) != 0);
        
        
        
        printf(BOLD"\n  %c  |  %c  |  %c  \n", simbolos[0][0], simbolos[0][1], simbolos[0][2]);
        printf("—————+—————+—————\n");
        printf("  %c  |  %c  |  %c  \n", simbolos[0][3], simbolos[0][4], simbolos[0][5]);
        printf("—————+—————+—————\n");
        printf("  %c  |  %c  |  %c  \n"DEF, simbolos[0][6], simbolos[0][7], simbolos[0][8]);

    return 0;
}