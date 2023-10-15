#include <stdio.h>

int main() {
    int a, b;
    printf("Digite a: ");
    scanf("%d", &a);
    printf("Digite b: ");
    scanf("%d", &b);
    printf("a: %d b: %d\n", a, b);
    printf("O MDC de %d e %d eh %d\n", a, b, mdc(a, b));
}

int mdc(int x, int y) {
    int divisor;
    int achou = 0;
    if (x >= y) divisor = y;
    else  divisor = x;
    while (achou == 0) {
        if (x % divisor == 0 && y % divisor == 0) {
            achou = 1;
        }
        else {
            divisor--;
        }
    }
    return divisor;
}