#include <stdio.h>

#define LINHAS 4
#define COLUNAS 4

// Função que conta as ocorrências de um número na matriz
int contarOcorrencias(int matriz[LINHAS][COLUNAS], int numero) {
    int contador = 0;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] == numero) {
                contador++;
            }
        }
    }

    return contador;
}

int main() {
    int matriz[LINHAS][COLUNAS] = {
        {1, 2, 3, 4},
        {5, 2, 7, 8},
        {9, 10, 2, 12},
        {13, 14, 15, 2}
    };

    int numero;
    printf("Digite o numero a ser contado: ");
    scanf("%d", &numero);

    int ocorrencias = contarOcorrencias(matriz, numero);

    printf("O numero %d aparece %d vezes na matriz.\n", numero, ocorrencias);

    return 0;
}
