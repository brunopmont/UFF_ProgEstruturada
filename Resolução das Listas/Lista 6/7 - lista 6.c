#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tam,i,j,k,t,n=0;
    printf("Digite o tamanho: ");
    scanf("%d",&tam);
    int *v;

    v = (int*)malloc(tam*sizeof(int));
    if (v==NULL) {printf("Memória Insuficiente\n"); exit(1);}
    srand(time(NULL));

    printf("Vetor: ");
    for (i=0; i<tam; i++)
    {
        v[i]=rand()%9;
        printf("%d ", v[i]);
    }
    printf("\n");

    void repeticao(int *vet, int tam);

    repeticao(v, tam);

    free(v);
    return 0;
}

void repeticao(int *vet, int tam) {
    int vetorRep[tam];
    int cont;
    cont = 0;
    int achado;
    achado = 0;

    for (int a = 0; a < tam; a++) {
        for (int b = 0; b < tam; b++) {
            if (a != b && vet[a] == vet[b]) {
                for (int z = 0; z < cont; z++) {
                    if (vet[a] == vetorRep[z]) achado = 1;
                }
                if (achado == 0) {
                    vetorRep[cont] = vet[a];
                    cont++;
                }
            }
        }
        achado = 0;
    }
    
    for (int z = 0; z < cont; z++) {
        printf("%d ", vetorRep[z]);
    }

    printf("Opa");
}