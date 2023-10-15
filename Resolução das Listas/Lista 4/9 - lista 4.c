#include <stdio.h>

void main() {
    /*inicializar variáveis e funções*/
    int vet[7];
    int procura;
    void armazenavetor(int *vet);
    void listavetor(int *vet);
    int procuravetor(int *vet, int x);
    void vetoracumulado(int *vet);

    /*funções chamadas*/
    printf("PREENCHER VETOR\n");
    armazenavetor(vet);
    printf("LISTAR VETOR\n");
    listavetor(vet);
    printf("Digite o valor a ser encontrado: ");
    scanf("%d", &procura);
    printf("posicao do valor: %d\n\n", procuravetor(vet, procura));
    vetoracumulado(vet);
    printf("vetor acumulado: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", vet[i]);
    }

}

/*lê 7 valores e os armazena em um vetor*/
void armazenavetor(int *vet) {
    for (int i = 0; i < 7; i++) {
        printf("Digite o valor n%d: ", i);
        scanf("%d", &vet[i]);
    }
    printf("\n");
}

/*printa os 7 elementos do vetor*/
void listavetor(int *vet){
    for (int i = 0; i < 7; i++) {
        printf("Valor n%d: %d\n", i, vet[i]);
    }
    printf("\n");
}

/*procura um elemento x no vetor e retorna a posição caso ache
se não achar, retorna -1*/
int procuravetor(int *vet, int x){
    int achado = 0;
    int pos = 0;
    for (int i = 0; i < 7; i++) {
        if (vet[i] == x) {
            achado = 1;
            pos = i;
        }
    }
    if (achado == 0) return -1;
    else return pos;
}

/*cada posição recebe seu valor somado ao valores anteriores*/
void vetoracumulado(int *vet){
    for (int i = 1; i < 7; i++) {
        vet[i] = vet[i] + vet[i-1];
    }
}
