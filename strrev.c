#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

void strrevhelper(char* str, int left, int right);
void strrev(char *str);

int main() {

    char word[255];
    char lowerWord[255];

    printf("Digite uma palavra: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    strrev(word);

    printf("Palavra invertida: %s\n", word);

    return 0;
}

void strrevhelper(char* str, int left, int right) {
    if (left >= right) return;
    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;

    strrevhelper(str, left + 1, right - 1);
}

void strrev(char *str) {
    if (str == NULL) return;

    strrevhelper(str, 0, strlen(str) - 1);
}