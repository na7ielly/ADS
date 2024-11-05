#include <stdio.h>
#include <stdlib.h>

void preencherArray(int *arr, int tamanho) 
{
    for (int i = 0; i < tamanho; i++) {
        arr[i] = i * 10;
    }
}

void exibirArray(int *arr, int tamanho) 
{
    for (int i = 0; i < tamanho; i++) {
        printf ("%d ", arr[i]);
    }
    printf ("\n");
}

int main() 
{
    int tamanho = 8;
    int *array = (int*) malloc (tamanho * sizeof(int)); // Aloca memória para o array
    
    if (array == NULL) {
        printf ("Erro de alocação de memória.\n");
        return 1;
    }

    preencherArray (array, tamanho); // Passa o ponteiro para a função
    printf ("Array preenchido: ");
    exibirArray (array, tamanho);

    free (array); // Libera a memória alocada
    return 0;
}