#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *entrada;
    FILE *saida;
    int listanum[100];
    int cont, temp;
    cont = 0;
    temp = 0;

    entrada = fopen("numeros.txt", "r");
    saida = fopen("numeros.bin", "wb");

    while (fscanf(entrada, "%d", &listanum[cont]) == 1) {
        cont++;
    }

    for (int i = 0; i<cont; i++) {
        for (int j = 0; j<cont; j++) {
            if (listanum[i] < listanum[j]) {
                temp = listanum[i];
                listanum[i] = listanum[j];
                listanum[j] = temp;
            }
        }
    }

    /*listanum = (int *)malloc(cont*sizeof(cont));
    if (listanum == NULL) exit(1);*/

    for (int i = 0; i<cont; i++) {
        fprintf(saida, "%d\n", listanum[i]);
    }

    fclose(entrada);
    fclose(saida);
}
