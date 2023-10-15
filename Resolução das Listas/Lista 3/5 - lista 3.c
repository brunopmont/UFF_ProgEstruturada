#include <stdio.h>

int main() {
    int n = 10;
    float v[n];
    for (int i=0; i < n; i++) {
        printf("Digite o termo n%d:", i);
        scanf("%f", &v[i]);
    }
    float max_vet(int n, float * vet);
    printf("Maior num da lista: %.2f", max_vet(n, v));
}

float max_vet(int n, float * vet) {
    int maior = -1;
    int i = 0;
    for (i = 0; i < n; i++) {
        if (vet[i] >= maior) maior = vet[i];
    }
    return maior;
}