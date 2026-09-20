#include <stdio.h>

int main () { 
int idade;
char *maioridade;
printf("digite sua idade");
scanf("%d", &idade);
if (idade >= 60) {
    printf("voce e um idoso\n");
} else if (idade >= 18 && idade <= 59) {
    printf("voce e um adulto\n");
} else if (idade >= 13 && idade <= 17) {
    printf("voce e um adolescente\n");
} else {
    printf("voce e uma crianca\n");
} 
printf("maioridade? %s\n", (idade >= 18) ? "Sim" : "Nao");

return 0;
}