#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    printf("Digite um valor para n: ");
    scanf(" %d", &n);
    float numeros[n];
    int *tam;
    float *acima_da_media(int n, float *vet, int *tam);
    float *aprovados;

    tam = &n;

    for (int i = 0; i < n; i++) {
        scanf("%f", &numeros[i]);
    }

    aprovados = acima_da_media(n, numeros, tam);

    for (int x = 0; x < n; x++) {
        printf("%.2f ", aprovados[x]);
    }
}

float *acima_da_media(int n, float *vet, int *tam){
    float *acimadamedia;
    float media = 0;
    for (int i = 0; i < n; i++) {
        media += vet[i];
    }
    media = media / n;

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] > media) {
            j++;
        }
    }

    acimadamedia = (float *) malloc(j*sizeof(float));
    if (acimadamedia == NULL) exit(1);

    j = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] > media) {
            acimadamedia[j] = vet[i];
            j++;
        }
    }

    *tam = j;

    return acimadamedia;
}

/*Escreva uma função em C que receba como parâmetros um vetor (vet) de n números
reais e um ponteiro para inteiro (tam) e retorne o ponteiro para um novo vetor, alocado
dinamicamente, contendo somente os elementos do vetor original que são maiores que
a média de todos os valores. Por exemplo, o vetor {5.5, 3.2, 2.5, 9.4, 7.5, 4.1, 5.4, 8.0,
6.9}, daria origem ao vetor {9.4, 7.5, 8.0, 6.9}, de tamanho 4. No ponteiro para inteiro
deverá ser armazenado o tamanho do novo vetor. Se não for possível alocar o novo
vetor, a função deve retornar NULL.
float *acima_da_media(int n, float *vet, int *tam);
1) Calcular a média de vet
2) verificar quantos elementos de vet são maiores do que a média
3) alocar dinamicamente um vetresposta conforme o tamanho verificado no item 2
4) preencher o vetresposta com os elementos do item 2
5) atualizar a variável ponteiro tam com o tamanho do novo vetor*/