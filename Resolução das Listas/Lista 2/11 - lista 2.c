#include <stdio.h>

int main() {
    float a, b;
    printf("A: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);
    printf("%f", pow(a, b));
}