#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Joao";
    char string2[] = "Marca";

    //strcat(string1, string2);      // appends string2 to the end of string1
    //strncat(string1, string2, 1);  // appends n characters of string2 to the end of string1
    //strcpy(string1, string2);      // replaces string1 content with string2
    //strncpy(string1, string2, 1);  // replaces n characters of string1 with string2

    int result1 = strlen(string1); //returns string length as int
    int result2 = strcmp(string1, string2); // compares all characters and returns 0 if equal
    int result3 = strncmp(string1, string2, 1); //compares n characters and returns 0 if equal


    

    printf("%s\n", string1);
    printf("%d, %d, %d\n", result1, result2, result3);
    return 0;
}