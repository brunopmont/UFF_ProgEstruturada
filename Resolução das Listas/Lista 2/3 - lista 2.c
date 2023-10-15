#include <stdio.h>

int main() {
    int i, n, f1, f2, f3;
    f1 = 1;
    f2 = 1;
    f3 = 0;
    i = 0;
    printf("Quantos termos deseja: ");
    scanf("%d", &n);
    printf("1 1 ");
    while (i < n) {
        f3 = f2 + f1;
        f1 = f2;
        f2 = f3;
        i++;
        printf("%d ", f3);
    }
}