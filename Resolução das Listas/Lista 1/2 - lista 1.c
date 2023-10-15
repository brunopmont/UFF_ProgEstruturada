#include <stdio.h>
#include <stdlib.h>

int a, b, c;
int menor, maior;
double media;
char pares;

int main()
{
    scanf("%d %d %d", &a, &b, &c);
    if (a>=b && a>=c) {
        maior = a;
        if (b>=c) {
            menor = c;
        }
        else {
            menor = b;
        }
    }
    else if (b>=c && b>=a) {
        maior = b;
        if (c>=a) {
            menor = a;
        }
        else {
            menor = c;
        }
    }
    else if (c>=a && c>=b) {
        maior = c;
        if (a>=b) {
            menor = b;
        }
        else {
            menor = a;
        }
    }

    if (a%2==0) {
        pares = pares + a;
    }
    if (b%2==0) {
        pares = pares + b;
    }
    if (c%2==0) {
        pares = pares + c;
    }

    media = (a+b+c)/3.0;

    printf("MAIOR: %d\n", maior);
    printf("MENOR: %d\n", menor);
    printf("PARES: %c\n", pares);
    printf("MEDIA: %lf", media);
}
