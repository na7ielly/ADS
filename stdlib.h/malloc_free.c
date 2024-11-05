#include <stdlib.h> 
#include <stdio.h>   

int main() 
{
    int n;
    printf ("Digite o número de elementos: ");
    scanf ("%d", &n);
    // Aloca memória para um array de 'n' inteiros
    int *arr = (int *) malloc (n * sizeof (int));
    if (arr == NULL) {  // Verifica se malloc retornou NULL
        perror ("Erro ao alocar memória");
        return 1;
    }
    // Preenche o array com valores
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;  // Exemplo: armazena múltiplos de 2
    }
    // Imprime o array
    printf ("Valores no array: ");
    for (int i = 0; i < n; i++) {
        printf ("%d ", arr[i]);
    }
    printf ("\n");
    // Libera a memória alocada
    free (arr);
    arr = NULL;  // Opcional: define o ponteiro como NULL para evitar uso acidental
    return 0;
}