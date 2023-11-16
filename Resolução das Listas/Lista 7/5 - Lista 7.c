#include <stdio.h>
#include <stdlib.h>

int main() {
    char palavra[81];
    char palavranospace[81];
    char palavracripto[81];
    int cont;
    int bloco;
    cont = 0;
    bloco = 1;

    scanf("%[^/n]", palavra);
    printf("%s", palavra);

    for (int i = 0; i < strlen(palavra); i++) {
        if (palavra[i] != 32) {
            palavranospace[cont] = palavra[i];
            cont++;
        }
    }
    palavranospace[cont] = '\0';

    printf("%s\n", palavranospace);

    for (int i = 0; i < cont; i++) {
        palavracripto[i] = palavranospace[i] + bloco;
        if (palavracripto[i] > 122) {
            palavracripto[i] = palavranospace[i] + bloco - 26;
        }
        bloco++;
        if (bloco == 6) {
            bloco = 1;
        }
    }

    palavracripto[cont] = '\0';

    printf("%s\n", palavracripto);
}