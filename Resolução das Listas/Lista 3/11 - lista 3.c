#include <stdio.h>

void main() {
/* início variáveis*/
    float med(int n, float *alturas);
    float var(int n, float *alturas, float media);
    int n = 5;
    int homemreq, mulherreq;
    homemreq = 0;
    mulherreq = 0;
    float alturas[n];
    float media;
    float variancia;

/*loop para input e análise de informações*/
    for (int i = 0; i < n; i++) {
        char sexo;
        int idade;
        float altura;
        printf("sexo: ");
        scanf("%s", &sexo);
        printf("idade: ");
        scanf("%d", &idade);
        printf("altura: ");
        scanf("%f", &altura);
        alturas[i] = altura;

        if (sexo == 'F' || sexo == 'f'){
            if (idade >= 20 && idade <= 35) {
                mulherreq+=1;
            }
        }

        else {
            if (altura > 1.80) {
                homemreq+=1;
            }
        }
    }

/*média e variância*/
    media = med(n, alturas);
    variancia = var(n, alturas, media);

/* print homens com mais de 1.0 e mulheres entre 20 e 35 anos*/
    printf("homens com +1.80: %d\n", homemreq);
    printf("mulheres entre 20 e 35 anos: %d\n", mulherreq);
    printf("variancia: %.2f\n", variancia);
}

/*funções para média e variância*/
float med (int n, float *alturas){
    float media = 0;
    for (int i = 0; i < n; i++){
        media += alturas[i];
    }
    media = media / n;
    return media;
}

float var(int n, float *alturas, float media){
    float vari = 0;
    for (int i = 0; i < n; i++) {
        vari = vari + ((alturas[i] - media) * (alturas[i] - media));
    }
    vari = vari / n;
    return vari;
}