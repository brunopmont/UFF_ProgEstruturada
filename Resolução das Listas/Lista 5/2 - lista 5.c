#include<stdio.h>
#include<string.h>

main(void)
{
    char texto[]= "foi muito facil";
    int i;
    for (i = 0; texto[i]!='\0'; i++) {
        if (texto[i] == ' ') break; /*aumenta o valor de i até a posição onde há esoaço, no caso, para na posiçaõ do 'm'*/
    }
    i++;
    for ( ; texto[i]!='\0'; i++) {
        printf("%c", texto[i]);/*printa muito facil*/
    }
}