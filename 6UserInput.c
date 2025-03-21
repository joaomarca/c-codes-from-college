#include <stdio.h>
#include <string.h> //used to work with strings

int main(){

    char name[25]; //25 bytes or characters

    printf("\nWhats you name?\n");
    //scanf("%s", &name); //If your user input is going to include whitespaces, like in a name, we need to use another type of function
    fgets(name, 25, stdin); //name of the variable, value length, input type (stdin means standand input)
    name[strlen(name)-1] = '\0'; //we get the last character of the string, (-1 because the string starts at 0) and turn it into null, since it is \n by default

    //when you use the function fgets, it will, when printed, come with the \n. We can use the string.h lib to fix that.

    int age;

    printf("\nHow old are you?\n");
    scanf("%d", &age);

    printf("\nHello, %s, how are you?\n", name);
    printf("You are %d years old.\n", age);

    return 0;
}