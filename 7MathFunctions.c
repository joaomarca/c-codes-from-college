#include <stdio.h>
#include <math.h>

int main(){

    double A = sqrt(64);  //Square root
    double B = pow(3, 2); //Exponentiation
    int C = round(3.14);  //Rounding
    int D = ceil(3.4);    //Rounding up
    int E = floor(3.6);   //Rounding down
    double F = fabs(-5);  //Absolute value (how far away from 0)
    double G = log(10);   //Natural log of a number (log to base e)
    double H = sin(45);   //Sine in radians
    double I = cos(45);   //Cosine in radians
    double J = tan(45);   //Tangent in radians

    printf("\n%lf\n", A);
    printf("\n%lf\n", B);
    printf("\n%d\n", C);
    printf("\n%d\n", D);
    printf("\n%d\n", E);
    printf("\n%lf\n", F);
    printf("\n%lf\n", G);
    printf("\n%lf\n", H);
    printf("\n%lf\n", I);
    printf("\n%lf\n", J);

    return 0;
    
}