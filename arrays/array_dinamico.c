#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int tamanho = 5;
    int *array = (int*) malloc (tamanho * sizeof(int)); // Aloca memória para 5 inteiros
    for (int i = 0; i < tamanho; i++) {
        array[i] = i * 2;
        printf ("%d ", array[i]);
    }
    free(array); // Libera a memória alocada
    return 0;
}