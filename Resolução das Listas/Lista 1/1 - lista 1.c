#include <stdio.h>
#include <stdlib.h>

int segundos;
int minutos;
int horas;

int main()
{
    scanf("%d", &segundos);
    minutos = segundos / 60;
    segundos = segundos % 60;
    horas = minutos / 60;
    minutos = minutos % 60;
    printf("HORAS: %d MINUTOS: %d SEGUNDOS: %d", horas, minutos, segundos);
}
