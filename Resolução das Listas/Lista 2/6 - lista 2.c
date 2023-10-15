#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sort;
    int teste;
    int cont = 0;
    srand( (unsigned)time(NULL) );
    sort =  rand() % 100;
    printf("%d\n", sort);
    do {
        printf("Digite: ");
        scanf(" %d", &teste);
        if (teste > sort) printf("Chuta mais baixo\n");
        else if (teste < sort) printf("Chuta mais alto\n");
        cont++;
    } while (teste != sort);
    printf("ACERTOU!");
}