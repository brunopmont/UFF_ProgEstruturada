#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
int mat; /* Matricula do aluno */
char nome[81]; /* Nome do aluno */
};
typedef struct aluno Aluno;

struct prova {
Aluno a; /* Aluno que fez a prova */
float q1, q2, q3, q4; /* Nota em cada questao */
};
typedef struct prova Prova;

void ordena(int n, Prova** v)
{
    int fim,i;
    for(fim=n-1; fim>0; fim--)
        for(i=0; i<fim; i++)
            if(compara(v[i], v[i+1]))
                troca(&v[i],&v[i+1]);

}

int compara(Prova* a, Prova* b) {
    int notaa, notab;
    notaa = a->q1 + a->q2 + a->q3 + a->q4;
    notab = b->q1 + b->q2 + b->q3 + b->q4;
    if (notaa > notab) {
        return 1;
    }
    if (notab > notaa) {
        return -1;
    }
    if (notaa == notab) {
        if (strcmp(a->a.nome, b->a.nome) == 1) {
            return 1;
        }
        if (strcmp(a->a.nome, b->a.nome) == -1) {
            return -1;
        }
        if (strcmp(a->a.nome, b->a.nome) == 0) {
            return 1;
        }
    }
 }

 void troca(Prova* a, Prova* b) {
    Prova* temp;
    temp = &a;
    a = b;
    b = temp;
 }

int main() {
    printf("Acho que e so pra implementar as funcoes");
}

