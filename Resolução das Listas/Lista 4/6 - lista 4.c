#include <stdio.h>

void main() {
    char mail[65];
    int validade = 1;
    int valida_mail(char *s);
    printf("Digite o e-mail sem @: ");
    scanf("%s", &mail);
    validade = valida_mail(mail);
    printf("validade: %d", validade);
}

int valida_mail(char *s) {
    int validador = 1;
     if (strlen(s) >= 2 && s[0] >= 97 && s[0] <= 122 && s[strlen(s)-1] != 46) {
        for (int i = 0; i < 64; i++) {
            if (s[i] == '.' && s[i+1] == '.') validador = 0;
        }
    }
    else {
        validador = 0;
    }
    return validador;
}