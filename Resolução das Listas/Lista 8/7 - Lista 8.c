#include <stdio.h>
#include <stdlib.h>

int main( )
{
    int distancia[5][5];
    distancia[0][0] = 0; distancia[0][1] = 15; distancia[0][2] = 30; distancia[0][3] = 5; distancia[0][4] = 12;
    distancia[1][0] = 15; distancia[1][1] = 0; distancia[1][2] = 10; distancia[1][3] = 17; distancia[1][4] = 28;
    distancia[2][0] = 30; distancia[2][1] = 10; distancia[2][2] = 0; distancia[2][3] = 3; distancia[2][4] = 11;
    distancia[3][0] = 5; distancia[3][1] = 17; distancia[3][2] = 3; distancia[3][3] = 0; distancia[3][4] = 80;
    distancia[4][0] = 12; distancia[4][1] = 28; distancia[4][2] = 11; distancia[4][3] = 80; distancia[4][4] = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < j || i == j) printf("%02d ", distancia[i][j]);
            else printf("   ");
        }
        printf("\n");
    }
    printf("\n");

    int inicio, final;
    do {
    printf("Cidade de partida: ");
    scanf(" %d", &inicio);
    printf("Cidade de chegada: ");
    scanf(" %d", &final);

    printf("A distancia da cidade %d ate a cidade %d e %d KM\n", inicio, final, distancia[inicio-1][final-1]);
    printf("\n");
    } while (inicio != 0 && final != 0);

    int n;
    int dtotal;
    dtotal = 0;
    printf("Digite o tamanho do trajeto (n de cidades): ");
    scanf(" %d", &n);
    int *trajeto;
    trajeto = (int *)malloc(n*sizeof(int));
    if (trajeto == NULL) exit(1);

    for (int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        trajeto[i] = temp - 1;
    }

    for (int i = 0; i < n-1; i++) {
        dtotal += distancia[trajeto[i]][trajeto[i+1]];
    }
    printf("A distancia total e %d KM", dtotal);
}