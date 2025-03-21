#include <stdio.h>
#include <ctype.h>

int main(){

    //Switches are a more efficient alternative to using many else if statements,
    //since they allow a value to be tested for equality against many cases.


        char grade;


        printf("\nEnter a letter grade: ");
        scanf("%c", &grade);
/*

        if(grade == 'A'){
            printf("Perfect!!\n");
        }
        else if(grade == 'B'){
            printf("You did good!\n");
        }
        else if(grade == 'C'){
            printf("You did okay.\n");
        }
        else if(grade == 'D'){
            printf("Could've been better.\n");
        }
        else if(grade == 'F'){
            printf("Try harder next time!\n");
        }
        else{
            printf("Thats not a valid grade!\n");
        }
*/

    grade = toupper(grade);
    switch(grade){
        case 'A':
            printf("Perfect!!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("Try harder next time!\n");
            break;
        case 'F':
            printf("You Failed!\n");
            break;
        default:
            printf("Thats not a valid grade!\n");
    }

    return 0;
}