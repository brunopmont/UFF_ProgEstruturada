#include <stdio.h>
#include <string.h>

int main() {
    int idade;
    char opiniao;
    int otimo, bom, medio, ruim, pessimo;
    int idaderuim;
    int maiorpessimo = 0;
    int maiorotimo = 0;
    int maiorruim = 0;
    for (int i = 0; i < 5; i++) {
        printf("idade: ");
        scanf("%d", idade);
        printf("opiniao(otimo, bom, medio, ruim, pessimo): ");
        scanf("%s", opiniao);
        switch (opiniao)
        {
        case 'o': otimo++; if (idade > maiorotimo) maiorotimo = idade; break;
        case 'b': bom++; break;
        case 'm': medio++; break;
        case 'r': idaderuim+= idade; ruim++; if (idade > maiorruim) maiorruim = idade; break;
        case 'p': pessimo++; if (idade > maiorpessimo) maiorpessimo = idade; break;
        default: break;
        }
    }
    idaderuim = idaderuim / ruim;
/*a quantidade de respostas ótimo*/
    printf("otimos: %d\n", otimo);

/*a diferença percentual entre respostas bom e regular*/
    printf("diferenca percentual: %d%", bom - medio);
/*a média de idade das pessoas que responderam ruim*/
    printf("media idade ruim: %d\n", idaderuim);

/*a porcentagem de respostas péssimo e a maior idade que utilizou esta opção*/
    printf("total pessimo: %d maior idade pessimo: %d\n", pessimo, maiorpessimo);
/*a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu
ruim*/
    printf("diferença entre maior otimo e maior ruim: %d", maiorotimo - maiorruim);
}  
