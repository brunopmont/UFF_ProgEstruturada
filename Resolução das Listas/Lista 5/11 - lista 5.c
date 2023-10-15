#include <stdio.h>
#include <string.h>

void main() {
    char frase[21];
    printf("Digite a frase: ");
    scanf(" %[^\n]", frase);
    for (int i = strlen(frase)-1; i >= 0; i--) {
        printf("%c", frase[i]);
    }
}