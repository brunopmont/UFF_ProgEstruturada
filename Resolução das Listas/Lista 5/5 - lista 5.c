#include <stdio.h>

main(void) {
    char frase[80]="o rato roeu a roupa do rei de roma";
    char *p;
    p = frase; /*p recebe o endereço de frase*/
    p[2]='m'; /*o destino apntado por p, que é frase[2] recebe 'm', ou seja, fica 'mato' no lugar de 'rato'*/
    p[6]='\0'; /*define fim da frase depois de rato*/
    printf("%s\n", frase); /*printa 'o mato'*/
    p = p + 3; /*p apontava para frase[0], agr aponta pra frase[3], que é a*/
    printf("%s\n",p); /*printa ato, já q agr p (q define o endereço de "início do vetor" (agora n é mais o início), aponta para frase[3], que é. agora printa tudo do a, posição 3, até o \0, posição 6)*/
    printf("%d\n",strlen(frase)); /*printa o tamanho da frase, que agora é de 6*/
}