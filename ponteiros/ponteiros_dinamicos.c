#include <stdlib.h>
#include <stdio.h>

int main() 
{
    int *arr = (int*) malloc (3 * sizeof(int)); // Aloca memória para 3 inteiros
    if (arr == NULL) {
        printf ("Erro de alocação\n");
        return 1;
    }
    for (int i = 0; i < 3; i++) {
        arr[i] = i + 1; // Inicializa o array
    }
    for (int i = 0; i < 3; i++) {
        printf ("%d ", arr[i]); // Exibe os valores: 1 2 3
    }
    free(arr); // Libera a memória alocada
    return 0;
}