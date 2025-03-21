#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;
    float temp1;
    float temp2;

    printf("Is the temperature in C(Celsius), K(Kelvin) or F(Fahrenheit)? ");
    scanf("%c", &unit);

    unit = toupper(unit);

    switch(unit){
        case 'C':
            printf("Enter the temperature in Celsius: ");
            scanf("%f", &temp);
            temp1 = (temp * 9 / 5) + 32;
            temp2 = temp + 273.15;
            printf("The temperature in Fahrenheit is %.2f°F\n", temp1);
            printf("The temperature in Kelvins is %.2fK\n", temp2);
        break;

        case 'F':
            printf("Enter the temperature in Fahrenheits: ");
            scanf("%f", &temp);
            temp1 = (temp - 32) * 5 / 9;
            temp2 = temp1 + 273.15; 
            printf("The temperature in Celsius is %.2f°C\n", temp1);
            printf("The temperature in Kelvins is %.2fK\n", temp2);
        break;

        case 'K':
            printf("Enter the temperature in Kelvins: ");
            scanf("%f", &temp);
            temp1 = temp - 273.15;
            temp2 = (temp1 * 9/5) + 32;
            printf("The temperature in Celsius is %.2f°C\n", temp1);
            printf("The temperature in Fahrenheits is %.2f°F\n", temp2);
        break;

        default:
            printf("%c is not an valid unit of temperature.", unit);
    }

    return 0;
}


/*



*/