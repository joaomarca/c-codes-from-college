#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main(){

    // The logical operator && (AND) checks if two or more conditions are true.

/*
    float temp;
    char answer[5];
    bool sunny = true;

    printf("What is the current temperature in Celsius?\n");
    scanf("%f", &temp);
 

    if(temp >=20 && temp <= 26 && sunny){
        printf("The weather is great!\n");
    }
    else{
        printf("The weather is not great!\n");
    }
*/


    // The logical operator || (OR) checks if at least one of the conditions are true


/*        
    float temp;

    printf("What is the current temperature in Celsius?\n");
    scanf("%f", &temp);

    if(temp <= 0 || temp >=30){
        printf("The weather is quite bad!\n");
    }
    else{
        printf("The weather is good!\n");
    }
*/    


    // The logical operator ! (NOT) reverses the state of a condition

    bool sunny = true;
    float temp;
    char answer[5];
    char yes[] = "YES";

    if(sunny){
        printf("\nIt's must be cloudy outside!\n");
    }
    else{
        printf("\nIt sunny outside!\n");
    }

    return 0;
}