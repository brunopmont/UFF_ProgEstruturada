#include <stdio.h>

int main() {
    int val;
    int n100, n50, n20, n10, n5, n2, n1;
    n100 = n50 = n20 = n10 = n5 = n2 = n1 = 0;
    scanf("%d", &val);
    if (val >= 100) {
        n100 = val / 100;
        val = val - n100*100;
    }
    if (val >= 50) {
        n50 = val / 50;
        val = val - n50*50;
    }
    if (val >= 20) {
        n20 = val / 20;
        val = val - n20*20;
    }
    if (val >= 10) {
        n10 = val / 10;
        val = val - n10*10;
    }
    if (val >= 5) {
        n5 = val / 5;
        val = val - n5*5;
    }
    if (val >= 2) {
        n2 = val / 2;
        val = val - n2*2;
    }
    if (val >= 1) {
        n1 = val / 1;
        val = val - n1*1;
    }
    printf("NOTAS:\n");
    printf("100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d\n", n100, n50, n20, n10, n5, n2, n1);
}