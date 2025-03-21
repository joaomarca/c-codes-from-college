#include <stdio.h>

int findMax(int x, int y){
/*
    if(x > y){
        return x;
    }
    else{
        return y;
    }
*/
    return (x > y) ? x : y;
}

int main(){
    
    // ternary/conditional operator = shortcut to if/else when assigning/returning a value"
    // (condition) ? value if true : value if false

    int max = findMax(3,4);
    printf("%d\n", max);


    return 0;
}