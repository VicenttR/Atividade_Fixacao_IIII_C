#include <stdio.h>

int main () { 
    int veiculo;
    char *situacao;
    printf("Digite o numero de acordo com o tipo do veiculo utilizado:\n");
    printf("1 - motocicleta\n");
    printf("2 - automovel\n");
    printf("3 - van\n");
    printf("4 - onibus\n");
    printf("5 - caminhao\n");
    scanf("%d", &veiculo);

    switch (veiculo) { 
        case 1: printf("veiculo utilizado: motocicleta\n"); 
        break;
        case 2: printf("veiculo utilizado: automovel\n"); 
        break;
        case 3: printf("veiculo utilizado: van\n"); 
        break;
        case 4: printf("veiculo utilizado: onibus\n"); 
        break;
        case 5: printf("veiculo utilizado: caminhao\n"); 
        break;
        default: printf("veiculo invalido\n");

    }
     printf("veiculo pesado? %s\n", (veiculo == 4 || veiculo == 5) ? "Sim" : "Nao");
    
    return 0;
}