#include <stdio.h>

int main() {
    int x, z, i, cont;
    cont = 1;
    printf("X: ");
    scanf("%d", &x);
    i = x;
    do {
        printf("Z (maior que x): ");
        scanf("%d", &z);
    } while (z < x);
    printf("X: %d Z: %d\n", x, z);
    while (x < z) {
        i++;
        x += i;
        cont++;
    }
    printf("\nX = %d", x);
    printf("\nQtdade inteiros: %d", cont);
}