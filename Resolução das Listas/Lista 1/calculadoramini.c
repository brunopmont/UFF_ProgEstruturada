#include <stdio.h>


int main() {
    float a, b;
    char op;
    void soma(float x, float y), sub(float x, float y), mult(float x, float y), div(float x, float y);
    printf("Digite a: ");
    scanf("%f", &a);
    printf("Digite b: ");
    scanf("%f", &b);
    do {
    printf("Digite operation: ");
    scanf("%s", &op);
        switch (op)
        {
        case '+': soma(a, b); break;
        case '-': sub(a, b); break;
        case '*': mult(a, b); break;
        case '/': div(a, b); break;
        default: break;
        }
    } while (op != 'X');
}

void soma(float x, float y) {
    printf("%f\n", x+y);
}
void sub(float x, float y) {
    printf("%f\n", x-y);
}
void mult(float x, float y) {
    printf("%f\n", x*y);
}
void div(float x, float y) {
   printf("%f\n", x/y);
}