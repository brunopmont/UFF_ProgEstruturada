#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    char * estado[27] =
    {"AC","AL","AM","AP","BA","CE","DF","ES","GO","MA","MG","MS","MT","PA",
    "PB","PE","PI","PR","RJ","RN","RO","RR","RS","SC","SE","SP","TO"};

    typedef struct assalariados {
        char nome[51];
        char sexo;
        int idade;
        float salario;
        char estado[3];
    } Assalariados;

    Assalariados * cadastra(char *nome, char sexo, int idade, float
    salario, char *estado);

    void imprime(Assalariados ** ptr, int numAssalariados);
    void relatorio(Assalariados ** ptr, int numAssalariados);

int main() {
    Assalariados **pessoas;
    int numAssalariados=3;
    pessoas = (Assalariados **) malloc (numAssalariados * sizeof(Assalariados *));
    pessoas[0] = cadastra("Fulano de tal", 'M',45,1500.00, "RJ");
    pessoas[1] = cadastra("Ciclano", 'M',50,2500.00, "RS");
    pessoas[2] = cadastra("Beltrano", 'M',42,500.00, "RS");
    imprime(pessoas, numAssalariados);
    relatorio(pessoas,numAssalariados);
}

Assalariados * cadastra(char *nome, char sexo, int idade, float salario, char *estado) {
    Assalariados * temporario;
    temporario = (Assalariados *)malloc(sizeof(Assalariados));
    if (temporario == NULL) exit(1);
    strcpy(temporario->nome, nome); 
    temporario->sexo = sexo;
    temporario->idade = idade;
    temporario->salario = salario;
    strcpy(temporario->estado, estado);

    return temporario;
}

void imprime(Assalariados ** ptr, int numAssalariados) {
    for (int i=0; i < numAssalariados; i++) {
        printf("%s\n", ptr[i]->nome);
        printf("%c\n", ptr[i]->sexo);
        printf("%d\n", ptr[i]->idade);
        printf("%.2f\n", ptr[i]->salario);
        printf("%s\n", ptr[i]->estado);
        printf("\n");
    }
}

void relatorio(Assalariados ** ptr, int numAssalariados) {
    int salestado[27];
    for (int c = 0; c < 27; c++) {
        salestado[c] = 0;
    }
    for (int i =0; i < numAssalariados; i++) {
        for (int j = 0; j < 27; j++) {
            if (strcmp(estado[j], ptr[i]->estado) == 0) {
                if (ptr[i]->sexo == 'M') {
                    if (ptr[i]->salario > 1000) {
                        salestado[j] += 1;
                    }
                }
            }
        }
    }
    for (int c = 0; c < 27; c++) {
        if (salestado[c] != 0) printf("Estado=%s com %d homens maiores de 40 anos e salario maior que R$ 1000,00\n", estado[c], salestado[c]);
    }
}

