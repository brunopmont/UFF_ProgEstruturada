#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, x1, x2;
    scanf("%d %d %d", &a, &b, &c);
    x1 = (- b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    x2 = (- b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    printf("The roots of this function are: %d and %d", x1, x2);
}