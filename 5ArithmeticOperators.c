#include <stdio.h>

int main(){

    //arithmetic operators
/*
    + (addition)
    - (subtraction)
    * (multiplication)
    / (division)
    % (modulus/remain of division)
    ++ (increment/ +1) 
    -- (decrement/ -1)
*/

    int x = 5;
    int y = 2;

    //int z = x / y;
    //printf("%d", z); //z = 5 / 2, but if z is an integer, it will not return 2.5, but instead 2
    //float z = x / (float) y; //if our divisor is an integer, when it calculates, the program will truncate the result's decimal points.
    //printf("%.2f\n", z); //to fix that, we can turn our divisor into a float (or double) or convert the integer in the expression

    //x++;
    //y--;

    //printf("%d\n", x);
    //printf("%d\n", y);

    //augmented assignment operators = used to replace a statement where an operator takes a variable
    //as one of its arguments and then assigns the result back to the same variable
    //x + 1 = x
    //x+=1

    //x = x + 2;
    //x+=2;

    //x = x - 3;
    //x-=3;

    //x = x * 4;
    //x*=4;

    //x = x / 5;
    //x/=5;

    //x = x % 2;
    //x%=2;

    printf("%d", x);

    return 0;

}