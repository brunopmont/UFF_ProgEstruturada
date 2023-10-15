#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char letra;
    char teste;
    srand( (unsigned)time(NULL) );
    teste = 'a';
    letra = 'a' + rand() % 25;
    printf("%c\n", letra);
    do {
        printf("Digite: ");
        scanf(" %c", &teste);
        if (teste > letra) printf("Chuta mais baixo\n");
        else if (teste < letra) printf("Chuta mais alto\n");
    } while (teste != letra);
    printf("ACERTOU!");
}