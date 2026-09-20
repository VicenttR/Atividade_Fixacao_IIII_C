#include <stdio.h>

int main() {
    int idade;
    float renda, valor;
    char *situacao;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a renda mensal: R$ ");
    scanf("%f", &renda);

    printf("Digite o valor solicitado: R$ ");
    scanf("%f", &valor);

    if (idade < 18) {
        situacao = "Credito nao permitido";
    } 
    else if (renda < 2000) {
        situacao = "Credito nao recomendado";
    } 
    else if (renda < 5000) {
        situacao = "Analise adicional";
    } 
    else {
        situacao = "Credito pre-aprovado";
    }

    printf("\nSituacao: %s\n", situacao);

    printf("Cliente apto para prosseguir? %s\n",
           (idade >= 18 && renda >= 2000) ? "Sim" : "Nao");

    return 0;
}