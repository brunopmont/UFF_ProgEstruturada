#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float salario, salariototal, horas, horas0, horas50, horas100, valorhora;
    salario = 0;
    printf("Quantas horas trabalhadas: ");
    scanf("%f",&horas);
    printf("Quanto por hora: ");
    scanf("%f", &valorhora);
    if (horas <= 40) {
        horas0 = horas;
    }
    else {
        if (horas <= 60){
            horas50 = horas - 40;
            horas0 = 40;
        }
        else {
            horas100 = horas - 60;
            horas50 = 20;
            horas0 = 40;
        }
    }
    salariototal = valorhora * (horas0 + horas50 * 1.5 + horas100 * 2.0);
    printf("O salario deve ser de %.2f", salariototal);
}