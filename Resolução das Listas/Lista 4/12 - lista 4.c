#include <stdio.h>

void main() {
    char frase[21];
    char remover;
    printf("Digite a frase: ");
    scanf("%[^\n]", &frase);
    printf("Digite a letra pra remover: ");
    scanf(" %c", &remover);
    for (int i = 0; i < strlen(frase); i++){
        if (frase[i] != " " && frase[i] == remover) frase[i] = 'x';
    }
    printf("%s\n", frase);
}