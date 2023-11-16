#include <stdio.h>

void f1 ( int v) {
v = v + 1;
printf (" f1 = %d\n " , v );
}

void f2 ( int *v) {
*v = *v + 1;
printf (" f2 = %d\n " , *v );
}

int f3 ( int v) {
v = v + 1;
printf (" f3 = %d\n " , v );
return v;
}

int main (void) {
int v = 1;
f1 ( v ); /*recebe v = 1 e printa 2 (o valor original nao se altera)*/
f2 (&v ); /*recebe  o dado apontado pelo endereço de v e printa o dado apontado pelo endereço de v + 1 (nao altera o dado original)*/
v = f3 ( v ); /*recebe v = 1 e retorna v = 2*/
printf (" main = %d \n" , v ); /*printa v = 2*/
return 0;
}