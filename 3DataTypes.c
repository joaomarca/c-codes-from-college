#include <stdio.h>
#include <stdbool.h> //you need this line to use booleans

int main(){

    int age = 17; //integer
    float gpa = 3.57; //float, decimal value
    char grade = 'A'; //char, single character
    char name[] = "Joao"; //array of characters

    //printing with variables:

    printf("You are %d years old.\n", age);       //%d for integers 
    printf("Your name is %s.\n", name);           //%s for strings/arrays of characters
    printf("Your avarage grade is %c.\n", grade); //%c for single character
    printf("Your gpa is %.2f.\n", gpa);           //%f for floating numbers

    //you can use .x after the % symbol with x being a number to format an float to be the length you want

    float pi = 3.141592;            // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double pi2 = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf

    bool e = true;                  // 1 byte (true or false) %d

    char f = 100;                 // 1 byte (-128 to 127) %d or %c
    unsigned char g = 255;        // 1 byte (0 to 255) %d or %c

    short int h = 32767;          // 2 bytes (-32,768 to 32,767) %d
    unsigned short int i = 65535; // 2 bytes (0 to 65535) %d
    //short int and unsigned short int can be called by short and unsigned short
    //short h = 32767;
    //unsigned short = 65535;

    int j = 2147483647;           // 4 bytes (-2,147,483,648 to 2,147,483,647) %d
    unsigned int k = 4294967295;  // 4 bytes (0 to 4,294,967,295) %u

    long long int l = 9223372036854775807;          // 8 bytes (-9 quintillions to 9 quintiliions)
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to 18 quintillions) %llu
    
    //printf("%c\n", age);  // char
    //printf("%s\n", name); // character array
    //printf("%f\n", pi);   // float
    //printf("%lf\n", pi2); // double
    //printf("%d\n", e);    // bool
    //printf("%d\n", f);    // char as numeric value
    //printf("%d\n", g);    // unsigned char as numeric value
    //printf("%d\n", h);    // short
    //printf("%d\n", i);    // unsigned short
    //printf("%d\n", j);    // int
    //printf("%u\n", k);    // unsigned int
    //printf("%lld\n", l);  // long long int
    //printf("%llu\n", m);  // unsigned long long int


    //Constants are variables that have unchangeable values.
    //to create a constant, add 'const' before the variable declaration
    //constant variable names are usually named in all caps

    const float PI = 3.141592;

    //PI = 41031.15;

    printf("%f", PI);

    //we cant manually change an constant variable value, even in
    //the program's command lines, it will cause an error.

    return 0;
}