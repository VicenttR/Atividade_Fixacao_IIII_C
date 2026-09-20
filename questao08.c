#include <stdio.h>

int main() {
    float valorCompra, percentualDesconto, valorDesconto, valorFinal;
    int formaPagamento;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("\nFormas de pagamento:\n");
    printf("1 - PIX\n");
    printf("2 - Debito\n");
    printf("3 - Credito\n");
    printf("4 - Boleto\n");

    printf("Digite a forma de pagamento: ");
    scanf("%d", &formaPagamento);

    switch (formaPagamento) {
        case 1:
            percentualDesconto = 20;
            break;

        case 2:
            percentualDesconto = 15;
            break;

        case 3:
            percentualDesconto = 5;
            break;

        case 4:
            percentualDesconto = 10;
            break;

        default:
            printf("Forma de pagamento invalida!\n");
            return 1;
    }

    valorDesconto = valorCompra * percentualDesconto / 100;
    valorFinal = valorCompra - valorDesconto;

    printf("\n--- Resultado ---\n");
    
    printf("Forma de pagamento: ");
    
    switch (formaPagamento) {
        case 1:
            printf("PIX\n");
            break;
        case 2:
            printf("Debito\n");
            break;
        case 3:
            printf("Credito\n");
            break;
        case 4:
            printf("Boleto\n");
            break;
    }

    printf("Valor da compra: R$ %.2f\n", valorCompra);
    printf("Percentual de desconto: %.0f%%\n", percentualDesconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}