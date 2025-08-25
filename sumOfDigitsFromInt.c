#include <stdio.h>
#include <stdlib.h>

//Vou comentar esse código pra explicar bem oq ta acontecendo

int *intToDigits(int integer, int *size) {
    if (integer == 0) { //se o numero passado for 0, vai retornar um array com tamanho 1 com o número 0 dentro, setando o tamanho da variável size pra 0. 
        *size = 1;
        int *digits = malloc(sizeof(int));
        digits[0] = 0;
        return digits;    
    }

    int temp = integer;
    *size = 0;

    while (temp > 0) { //enquanto temp(representando o número de casas decimais) for maior que 0, vai somando size pra contarmos as casas decimais, dividindo por 10 a cada iteração
        temp /= 10;
        (*size)++;
    }

    int *digits = malloc(sizeof(int) * (*size)); //criamos o array do número certo de espaços q precisamos (tendo contado logo antes)
    temp = integer;

    for (int i = *size - 1; i >= 0; i--) {
        digits[i] = temp % 10; //Pegamos o último digito de temp(que é o inteiro passado pelo usuário) e colocamos no ultimo index(ja que i começa no ultimo)
        temp /= 10; //dividimos por 10 para pegar o próximo digito(arredondado para baixo automaticamente já que é int)
    }

    return digits;
}

int sumOfDigits(int digits[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += digits[i];
    }
    return sum;
}

int main() {
    int inteiro = 12345;
    int size;
    int* digits = intToDigits(inteiro, &size);

    printf("Digits: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    free(digits);
    return 0;
}