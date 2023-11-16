#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    int matricula;
    float *vNotas; // Armazena as 5 notas de um aluno ao longo de um ano.
    char nome[100];
} Aluno;

typedef struct Materia {
    Aluno *V; // Armazena a informação de n alunos !!
    float media[5]; // Armazena as 5 médias do ano.
    int nAlunos // Número de alunos matriculados no curso.
}Materia;

int main() {
    Aluno *fillAluno();
    Materia* fillMateria(int numAlunos);
    void mediaMateria(Materia *m1);
    void mostraMateria(Materia *m1);

    int nalun;

    printf("Digite a quantia de alunos na maeria: ");
    scanf("%d", &nalun);

    Materia *materia = fillMateria(nalun);

    mediaMateria(materia);

    mostraMateria(materia);

    // Liberar a memória alocada
    for (int i = 0; i < nalun; i++) {
        free(materia->V[i].vNotas);
    }
    free(materia->V);
    free(materia);

    return 0;
}

Aluno *fillAluno() {
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    if (aluno == NULL) {
        printf("Erro.\n");
        exit(1);
    }

    printf("Digite a matricula: ");
    scanf("%d", &(aluno->matricula));

    printf("Digite o nome: ");
    scanf(" %[^\n]s", aluno->nome);

    aluno->vNotas = (float *)malloc(5 * sizeof(float));

    for (int i = 0; i < 5; i++) {
        printf("Digite a nota %d do aluno: ", i + 1);
        scanf("%f", &(aluno->vNotas[i]));
    }

    return aluno;
}

Materia* fillMateria(int numAlunos) {
    Materia *materia = (Materia *)malloc(sizeof(Materia));
    if (materia == NULL) {
        printf("Erro.\n");
        exit(1);
    }

    materia->V = (Aluno *)malloc(numAlunos * sizeof(Aluno));
    if (materia->V == NULL) {
        printf("Erro.\n");
        exit(1);
    }

    materia->nAlunos = numAlunos;

    for (int i = 0; i < numAlunos; i++) {
        printf("\n aluno %d\n", i + 1);
        materia->V[i] = *fillAluno();
    }

    return materia;
}

void mediaMateria(Materia *m1) {
    for (int i = 0; i < 5; i++) {
        float s = 0;
        for (int j = 0; j < m1->nAlunos; j++) {
            s += m1->V[j].vNotas[i];
        }
        m1->media[i] = s / m1->nAlunos;
    }
}

void mostraMateria(Materia *m1) {
    printf("\nInformações da Materia\n");
    printf("Quantia de alunos matriculados: %d\n", m1->nAlunos);

    for (int i = 0; i < m1->nAlunos; i++) {
        printf("\nAluno %d \n", i + 1);
        printf("Matricula: %d\n", m1->V[i].matricula);
        printf("Nome: %s\n", m1->V[i].nome);
        for (int j = 0; j < 5; j++) {
            printf("Nota %d: %.2f\n", j + 1, m1->V[i].vNotas[j]);
        }
    }

    printf("\nmedias\n");
    for (int i = 0; i < 5; i++) {
        printf("Media prova %d: %.2f\n", i + 1, m1->media[i]);
    }
}