#include <stdio.h>

int main() {
     float temperatura;
     char *classificacao;
     char *acima30;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura < 0) {
        classificacao = "Muito frio";
    } else if (temperatura <= 15) {
        classificacao = "Frio";
    } else if (temperatura <= 25) {
        classificacao = "Agradavel";
    } else if (temperatura <= 35) {
        classificacao = "Quente";
    } else {
        classificacao = "Muito quente";
    }

    acima30 = (temperatura > 30) ? "Sim" : "Nao";

    printf("\n--- Resultado ---\n");
    printf("Temperatura: %.1f C\n", temperatura);
    printf("Classificacao: %s\n", classificacao);
    printf("Esta acima de 30 C? %s\n", acima30);

    return 0;
}