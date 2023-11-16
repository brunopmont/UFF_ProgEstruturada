#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista {
    int info;
    struct lista *prox;
} Lista;

int main() {
    //FILE* entrada;
    Lista* lista;

    Lista* criar();
    void imprimir(Lista* lst);
    Lista* incluir(Lista* lst, int a);
    Lista* excluir(Lista* lst, int a);
    Lista* alterar(Lista* lst, int a, int b);

    lista = criar();
    lista = incluir(lista, 5);
    lista = incluir(lista, 78);
    lista = incluir(lista, 6);
    lista = incluir(lista, 36);
    lista = incluir(lista, 1);
    imprimir(lista);
    lista = excluir(lista, 36);
    imprimir(lista);
    lista = alterar(lista, 6, 12);
    imprimir(lista);
}

Lista* criar() {
    return NULL;
}

void imprimir(Lista* lst) {
    Lista *p;
    p = lst;
    while (p != NULL) {
        printf("%d\n", p->info);
        p = p->prox;
    }
    printf("\n");
}

Lista* incluir(Lista* lst, int a) {
    Lista *novo = (Lista*)malloc(sizeof(Lista));
    novo->info = a;
    novo->prox = lst;
    return novo;
}

Lista* excluir(Lista* lst, int a) {
    Lista *ant;
    Lista *p;
    p = lst;
    ant = p;
    while (p!=NULL && p->info != a) {
        ant = p;
        p = p->prox;
    }

    if (p == NULL) {
        printf("VALOR INEXISTENTE\n");
        return lst;
    }
    
    if (ant == NULL) {
        lst = p->prox;
    }
    else {
        ant->prox = p->prox;
    }
    free(p);
    return lst;
}

Lista* alterar(Lista* lst, int a, int b) {
    Lista *p;
    p = lst;
    while(p != NULL && p->info != a) {
        p = p->prox;
    }
    if (p == NULL) {
        printf("VALOR INEXISTENTE\n");
    }
    else {
        p->info = b;
    }
    return lst;
}

/*
criar X
imprimirX
excluirX
incluirX
alterar
*/