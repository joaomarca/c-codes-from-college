#include <stdio.h>
#include <ctype.h>

int main() {
    int age = 0;
    int inputValido = 0;

    while(!inputValido){
        printf("\nEnter your age: ");
        if (scanf("%d", &age) != 1 ){
            while (getchar() != '\n')
            printf("Enter a valid age.\n");
            continue;
        }
        
        if (age <= 0 || age >= 125){
            printf("Enter a valid age.\n");
        } else if(age >= 18){
            printf("You are legally allowed to drink alcohol in Brazil!\n");
            inputValido = 1;
        } else{
            printf("You are NOT legally allowed to drink alcohol in Brazil!\n");
            inputValido = 1;
        }
    }

    return 0;
}