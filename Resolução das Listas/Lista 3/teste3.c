#include <stdio.h>
#include <string.h>

/*adicionar cada idade a uma lista de opiniao dependendo da resposta*/

int main() {
    int otimo[100], bom[100], medio[100], ruim[100], pessimo[100];
    int idade;
    char opiniao[10];
    for (int i = 0; i < 5; i++) {
        printf("idade: ");
        scanf("%d", idade);
        printf("opiniao(otimo, bom, medio, ruim, pessimo): ");
        scanf("%s", opiniao);
        switch (opiniao[0])
        {
        case 'o': otimo; break;
        case 'b': bom; break;
        case 'm': medio; break;
        case 'r': ruim; break;
        case 'p': pessimo; break;
        default: break;
        }
    }
/*a quantidade de respostas ótimo*/

/*a diferença percentual entre respostas bom e regular*/

/*a média de idade das pessoas que responderam ruim*/

/*a porcentagem de respostas péssimo e a maior idade que utilizou esta opção*/

/*a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu
ruim*/
}
