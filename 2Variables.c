#include <stdio.h>

int main(){

    /*
    Variable =  Allocated space in memory used to store a value.
                We refer to the variable's name to access the stored value.
                That variable now behaves as if it was the value it contains,
                but we need to declare the type of data we are storing.
    */

    int x; //declaration
    x = 0; //initialization
    int y = 1;//declaration + initialization
    //int = data type
    //x or y = variable name
    //0 or 1 = data value

    int age = 17; //integer
    float gpa = 3.5; //float, decimal value
    char grade = 'A'; //char, single character
    char name[] = "Joao"; //array of characters

    //the C language does not have strings as an data type, it treats strings as objects.
    //so, to create a string, we can just create an array of characters using the char data
    //type, which would just create an combination of single characters, thus a string

    //Using variables in strings:



    return 0;
}