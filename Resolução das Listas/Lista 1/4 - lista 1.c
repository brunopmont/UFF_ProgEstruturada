#include <stdio.h>

float media(float x, float y, float z) {
    float med = (x+y+z)/3.0;
    return(med);
}

int main() {
    float nota1, nota2, nota3;
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    printf("%.2f", media(nota1, nota2, nota3));
}