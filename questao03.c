#include <stdio.h>

int main () { 
    float valororiginal, percentualdesconto, valordesconto, valorfinal;
    printf("qual o valor original do produto: ");
    scanf("%f", &valororiginal);
    
    if (valororiginal > 2000.00) {
        percentualdesconto = 15;
    }
    else if (valororiginal >= 1000.01 && valororiginal <= 2000.00) {
        percentualdesconto = 10;
    }
    else if (valororiginal >= 500.01 && valororiginal <= 1000.00) {
        percentualdesconto = 5;
    }
    else {
        percentualdesconto = 0;
    }

    valordesconto = valororiginal * (percentualdesconto / 100);
        valorfinal = valororiginal - valordesconto;

    printf("o valor original do produto e:%.2f\n", valororiginal);
    printf("o percentual de desconto aplicado e:%.2f%%\n", percentualdesconto);
    printf("o valor do desconto e:%.2f\n", valordesconto);
    printf("o valor final do produto e:%.2f\n", valorfinal);

    return 0;
}