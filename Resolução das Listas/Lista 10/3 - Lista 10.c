#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char matarquivo[10], mat[10];
    float p1, p2, p3, media;
    int linha;

    FILE *fp;
    fp = fopen("notas.txt", "r");
    if (fp == NULL) { 
        printf("ERRO"); 
        exit(1);
    }

    printf("Digite a matricula: ");
    scanf(" %s", &mat);
    linha = 0;
    
    while (fscanf(fp, "%s %f %f %f", &matarquivo, &p1, &p2, &p3) == 4){
        if (strcmp(matarquivo,mat) == 0) {
            break;
        }
        else {
            linha++;
        }
    }
    printf("%s \n", matarquivo);
    printf("%.2f \n", p1);
    printf("%.2f \n", p2);
    printf("%.2f \n", p3);

    media = (p1+p2+p3)/3;

    printf("A media de %s e %.2f", matarquivo, media);

    fclose(fp);
}
