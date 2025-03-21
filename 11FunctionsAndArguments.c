#include <stdio.h>

void aniversario2(char name[], int age){

    printf("\nParabéns, %s!\n", name);
    printf("Hoje você completa %d anos!\n", age);
}

void aniversario(){

    printf("\nParabéns pra você!");
    printf("\nNessa data querida!");
    printf("\nMuitas felicidades!");
    printf("\nMuitos anos de vida!\n");
}

double square(double x){
    //double result = x * x;
    //return result;
    return x * x;
}

void Hello(char[], int); //function prototype
                         //with no function prototype, trying to call the function with an incorrect ammount of arguments would give us an unexpected result
                         //with a function prototype, calling the function with an incorrect ammount of arguments will assure that we receive an error.

int main(){

    char name[] = "João";
    int age = 17;

    aniversario2(name, age);
    Hello(name, age);

    return 0;
}

void Hello(char name[], int age){

    printf("\nHello, %s, you are %d years old.\n", name, age);

}
