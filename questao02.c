#include <stdio.h>

int main() { 
    int opcao;
    printf("bem vindo ao banco master\n");
    printf("escolha uma das opcoes abaixo:\n");
    printf("1 - consultar saldo\n");
    printf("2 - verificar extrato\n");
    printf("3 - realizar transferencia\n");
    printf("4 - realizar pagamento\n");
    printf("5 - emprestimos\n");
    printf("6 - sair\n");
    scanf("%d", &opcao); 

    switch (opcao) {
        case 1:
            printf("consultando saldo...\n");
            break;
        case 2:
            printf("verificando extrato...\n");
            break;
        case 3:
            printf("realizando transferencia...\n");
            break;
        case 4:
            printf("realizando pagamento...\n");
            break;
        case 5:
            printf("verificando emprestimos...\n");
            break;
        case 6:
            printf("saindo do sistema...\n");
            break;
        default:
            printf("opcao invalida\n");
    }
    return 0;
}