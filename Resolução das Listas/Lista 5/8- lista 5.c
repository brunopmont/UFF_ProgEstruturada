#include <stdio.h>
#include <string.h>

void main() {
    char palavra1[20];
    char palavra2[20];
    int comparatamanho(char *p1, char *p2);
    int substring(char *p1, char *p2);
    printf("Digite a primeira palavra: ");
    scanf(" %s", &palavra1);
    printf("Digite a segunda palavra: ");
    scanf(" %s", &palavra2);
    if (comparatamanho(palavra1, palavra2) == 1) printf("\npalavras iguais");
    else printf("\npalavras diferentes\n");
    printf("substring? %d", substring(palavra1, palavra2));
}

int comparatamanho(char *p1, char *p2){
    if (strcmp(p1, p2) == 0) {
        return 1;
    }
    else return 0;
}

int substring(char *p1, char *p2) {
    int stts = 1;

    if (strlen(p1) >= strlen(p2)) {
        for (int i = 0; i < strlen(p1); i++) {
            if (p1[i] == p2[0]) {
                stts = 1;
                for (int j = i; j < strlen(p2); j++) {
                    if (p1[i+j] != p2[j]) {
                        stts = 0;
                    }
                }
                if (stts == 1) {
                    break;
                }
            }
        }
    }
    else stts = 0;
    return stts;
}