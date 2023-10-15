#include <stdio.h>

int main() {
    float a, b;
    char op;
    printf("Valores para calcular: ");
    scanf("%f %f", &a, &b);
    printf("Calculo desejado: ");
    scanf("%s", &op);
    switch (op) {
        case '+': printf("%.3f %c %.3f = %.3f", a, op, b, a+b); break;
        case '-': printf("%.3f %c %.3f = %.3f", a, op, b, a-b); break;
        case '*': printf("%.3f %c %.3f = %.3f", a, op, b, a*b); break;
        case '/': printf("%.3f %c %.3f = %.3f", a, op, b, a/b); break;
    }
}