#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /*DEFINICAO DE VARIAVEIS*/
    int **matrizOriginal;
    int **matrizTransposta;
    int c;
    c = 4;

    /*INICIO DE FUNCOES*/
    int criaMatriz(int c);
    void encheMatriz(int **mat, int c);
    void mostraMatriz(int **mat, int c);
    int transpMatriz(int **mat, int c);
    void esvaziaMatriz(int **mat, int c);
    void compMatrizes(int **matorig, int **mattransp, int c);

    /*CRIACAO, PREENCHIMENTO E APRESENTACAO DA MATRIZ*/
    matrizOriginal = criaMatriz(c);
    encheMatriz(matrizOriginal, c);
    printf("MATRIZ ORIGINAL\n");
    mostraMatriz(matrizOriginal, c);

    printf("\n");

    /*TRANSPOSICAO DA MATRIZ E APRESENTACAO DA MESMA*/
    matrizTransposta = transpMatriz(matrizOriginal, c);
    printf("MATRIZ TRANSPOSTA\n");
    mostraMatriz(matrizTransposta, c);

    /*COMPARAR MATRIZES*/
    compMatrizes(matrizOriginal, matrizTransposta, c);

    /*DESALOCAR OS ESPACOS DE MEMORIA*/
    esvaziaMatriz(matrizOriginal,c);
    esvaziaMatriz(matrizTransposta,c);
}

int criaMatriz(int c) {
    int **matriz;

    matriz = (int **)malloc(c*sizeof(int));
    if (matriz == NULL) exit(1);

    for (int i = 0; i < c; i++) {
        matriz[i] = (int *)malloc(c*sizeof(int));
        if (matriz[i] == NULL) exit(1);
    }

    return matriz;
}

void encheMatriz(int **mat, int c) {
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < c; j++) {
            printf("m[%d][%d] = ", i, j);
            scanf(" %d", &mat[i][j]);
        }
    }
    printf("\n");
}

void mostraMatriz(int **mat, int c) {
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void esvaziaMatriz(int **mat, int c) {
    if (mat != NULL) {
        for (int i = 0; i < c; i++) {
            if (mat[i] != NULL) free(mat[i]);
        }
    }
    free(mat);
}

int transpMatriz(int **mat, int c) {
    int **trp;

    trp = (int **)malloc(c*sizeof(int));
    if (trp == NULL) exit(1);

    for (int i = 0; i < c; i++) {
        trp[i] = (int *)malloc(c*sizeof(int));
        if (trp[i] == NULL) exit(1);
    }

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < c; j++) {
            trp[j][i] = mat[i][j];
        }
    }

    return trp;
}

void compMatrizes(int **matorig, int **mattransp, int c) {
    printf("\n");
    int diferente;
    diferente = 0;
    for (int i = 0; i < c; i++) {   
        for (int j = 0; j < c; j++) {
            if (matorig[i][j] != mattransp[i][j]) diferente = 1;
        }        
    }
    if (diferente == 0) printf("A matriz e simetrica.");
    else printf("A matriz nao e simetrica.");
}