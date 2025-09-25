#include <stdio.h>
int main() 
{
    int codigo, quantidade;
    double preco;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    if (codigo == 1) 
    {
        preco = 5.00 * quantidade;
    } 
    else if (codigo == 2) 
    {
        preco = 3.50 * quantidade;
    } 
    else if (codigo == 3) 
    {
        preco = 4.80 * quantidade;
    } 
    else if (codigo == 4) 
    {
        preco = 8.90 * quantidade;
    } 
    else if (codigo == 5) 
    {
        preco = 7.32 * quantidade;
    } 
    printf("Valor a pagar: R$ %.2lf\n", preco);

    return 0;
}