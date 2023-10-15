#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main() {
    int totinscr;
    int p1;
    int p2;

    printf("Quantos participantes? ");
    scanf(" %d", &totinscr);
    printf("Peso 1: ");
    scanf(" %d", &p1);
    printf("Peso 2: ");
    scanf(" %d", &p2);

    int inscr[totinscr];
    float not1[totinscr];
    float not2[totinscr];
    int *tam;
    int *premiados(int n, int *inscr, float *t1, int p1,float *t2, int p2, int *tam);
    int *vetpremios;

    tam = &totinscr;

    for (int i = 0; i < totinscr; i++) {
        printf("Digite numero inscricao: ");
        scanf(" %f", &inscr[i]);
        printf("Digite nota 1: ");
        scanf(" %f", &not1[i]);
        printf("Digite nota 2: ");
        scanf(" %f", &not2[i]);
    }

    vetpremios = premiados(totinscr, inscr, not1, p1, not2, p2, tam);

    for (int i = 0; i < totinscr; i++) {
        printf("%d", vetpremios[i]);
    }
}

int *premiados(int n, int *inscr, float *t1, int p1,float *t2, int p2, int *tam) {
    float medias[n];
    int *topinscr;
    float maiormedia;
    maiormedia = 0;
    int cont = 0;

    for (int i = 0; i < n; i++) {
        medias[i] = ((t1[i]*p1) + (t2[i]*p2)) / (p1+p2);
        if (medias[i] >= maiormedia) maiormedia = medias[i];
    }

    for (int i = 0; i < n; i++) {
        if (medias[i] == maiormedia) cont++;
    }

    topinscr = (int*) malloc (cont*sizeof(int));

    cont = 0;
    for (int i = 0; i < n; i++) {
        if (medias[i] == maiormedia) {
            topinscr[cont] = inscr[i];
            cont++;
        }
    }

    *tam = cont;

    return topinscr;
}

/*calcular a média ponderada de cada participante;

criar um novo vetor de inteiros alocado dinamicamente com o tamanho exato
para conter apenas as inscrições dos participantes que obtiveram a maior média (pode
haver empate);

armazenar no novo vetor as inscrições correspondentes (em qualquer ordem);

armazenar o tamanho do novo vetor na variável tam; e
retornar o ponteiro para o novo vetor.*/