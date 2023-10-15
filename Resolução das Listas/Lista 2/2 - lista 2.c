#include <stdio.h>

int main() {
    int n, i, soma;
    soma = 0;
    printf("Digite quantos impares serao somados: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        soma += ((i * 2) - 1);
    }
    printf("%d", soma);
}