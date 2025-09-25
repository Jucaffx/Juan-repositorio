#include <stdio.h>
int main() {
    double d1, d2, d3, maior;
    printf("Digite a distancia do primeiro lancamento: ");
    scanf("%lf", &d1);
    printf("Digite a distancia do segundo lancamento: ");
    scanf("%lf", &d2);
    printf("Digite a distancia do terceiro lancamento: ");
    scanf("%lf", &d3);
    // Descobrir o maior
    maior = d1;
    if (d2 > maior) 
    {
        maior = d2;
    }
    if (d3 > maior) 
    {
        maior = d3;
    }
    printf("A maior distancia foi: %.2lf\n", maior);
    return 0;
}