#include <stdio.h>

int main(){
/*
Escape sequence =   character combination consisting of a backlash (\)
                    followed by a letter or combination of digits.
                    They specify actions within a line or string of text.
                    \n = new line
                    \t = tab
*/

    printf("Hello World!\n");
    printf("How are you?\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");

    //to print something like quotes, you use escape sequences, so the program reads the quotes
    //as part of the string, and not as code.

    printf("\"Hello\" - Osaka-san\n");

    return 0;
}