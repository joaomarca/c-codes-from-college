#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char letters[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    int value[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char p1inp[55];
    char p2inp[55];
    char player1Input[45] = {'\0'};
    char player2Input[45] = {'\0'};

    printf("Player 1: ");
    fgets(p1inp, 45, stdin);
    printf("Player 2: ");
    fgets(p2inp, 45, stdin);
    int j = 0;

    //Both of the following for loops check if the character at position i on the user input string is alpha(alphabetical). If it isnt, it doesnt pass through.

    for (int i = 0; i < strlen(p1inp); i++){
        if (isalpha(p1inp[i]) != 0){
            player1Input[j] = p1inp[i];
            j++;
        }
    }

    j = 0;

    for (int i = 0; i < strlen(p2inp); i++){
        if (isalpha(p2inp[i]) != 0){
            player2Input[j] = p2inp[i];
            j++;
        }
    }

    for (int i = 0; i < strlen(player1Input); i++){
        player1Input[i] = toupper(player1Input[i]);
    }
    for (int i = 0; i < strlen(player2Input); i++){
        player2Input[i] = toupper(player2Input[i]);
    }

    int p1size = strlen(player1Input);
    int p2size = strlen(player2Input);
    int p1score = 0;
    int p2score = 0;

    for (int i = 0; i < strlen(player1Input); i++){
        for (int j = 0; j < strlen(letters); j++){
            if (player1Input[i] == letters[j]){
                p1score += value[j];
            }
        }
    }

    for (int i = 0; i < strlen(player2Input); i++){
        for (int j = 0; j < strlen(letters); j++){
            if (player2Input[i] == letters[j]){
                p2score += value[j];
            }
        }
    }

    if (p1score > p2score){
        printf("Player 1 wins!\n");
    } else if (p2score > p1score){
        printf("Player 2 wins!\n");
    } else{
        printf("Tie!\n");
    }
}