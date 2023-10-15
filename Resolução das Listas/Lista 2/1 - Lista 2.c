#include <stdio.h>

int main() {
    int n, i, primo;
    char status;

    status = "E PRIMO";
    i = 2;
    primo = 1;

    printf("Digite o n a ser analisado: ");
    scanf("%d", &n);

    while (i < n && primo == 1) {
        if (n % i == 0) {
            status = "NAO E PRIMO";
            primo = 0;
        }
        i++;
    }
    
    switch (primo) {
        case 1: printf("NUMERO PRIMO\n"); break;
        case 0: printf("NUMERO NAO PRIMO\n"); break;
        default: break;
    }
}