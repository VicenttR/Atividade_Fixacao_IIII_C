#include <stdio.h>

int main () {
    float nota1, nota2, nota3, nota4, media;
    char *situacao;

    printf("qual foi a sua primeira nota: ");
    scanf("%f", &nota1);

    printf("qual foi a sua segunda nota: ");
    scanf("%f", &nota2);

    printf("qual foi a sua terceira nota: ");
    scanf("%f", &nota3);

    printf("qual foi a sua quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("a sua media foi: %.2f\n", media);

    if( media >= 9.0 ) {
        printf("excelente\n");
    } else if (media >= 7.0 && media < 9.0) {
        printf("bom\n");
    } else if (media >= 5.0 && media < 7.0) {
        printf("Recuperacao\n");
    }
      else {
        printf("reprovado\n");
    }
    
    situacao = (media >= 5.0) ? "aprovado" : "reprovado";
    printf("situacao: %s\n", situacao);
    
    return 0;
}