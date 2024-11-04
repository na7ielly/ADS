#include <stdio.h>

int main() {
    int m, n;

    // Leitura das dimensões da matriz
    printf("Digite o número de linhas: ");
    scanf("%d", &m);
    printf("Digite o número de colunas: ");
    scanf("%d", &n);

    int matriz[m][n]; // Declaração da matriz 2D

    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < m; i++) {           // Loop para as linhas
        for (int j = 0; j < n; j++) {       // Loop para as colunas
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);    // Leitura do elemento
        }
    }

    // Exibição dos elementos da matriz
    printf("\nMatriz digitada:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // Nova linha para cada linha da matriz
    }

    return 0;
}
