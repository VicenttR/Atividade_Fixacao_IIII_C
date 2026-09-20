#include <stdio.h>

int main () { 
    int funcao;
    printf("Seja bem vindo a empresa jubilaca\n");
    printf("------------------------------------------------------------\n");
    printf("Por favor digite o numero de acordo com a sua funcao:\n");
    printf("1 - administrador\n"); 
    printf("2 - gerente\n");
    printf("3 - analista\n");
    printf("4 - desenvolvedor\n");
    printf("5 - usuario\n");
    scanf("%d", &funcao);

    switch (funcao) {
        case 1:
            printf("bem vindo administrador\n");
            break;
        case 2:
            printf("bem vindo gerente\n");
            break;
        case 3:
            printf("bem vindo analista\n");
            break;
        case 4:
            printf("bem vindo desenvolvedor\n");
            break;
        case 5:
            printf("bem vindo usuario\n");
            break;
        default:
            printf("funcao invalida\n");
    }
    return 0;
}