#include <stdio.h>
#include <stdlib.h>

int main() {
    float *acimadamedia;
    acimadamedia = (float*)malloc(3*sizeof(float));

    acimadamedia[3] = 3;

    printf("%f", acimadamedia[3]);
}
