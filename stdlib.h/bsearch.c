#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void *a, const void *b) 
{
    int int_a = *(int*)a;
    int int_b = *(int*)b;
    return int_b - int_a; // Retorna em ordem crescente

    //return int_b - int_a; // Retorna em ordem decrescente
}

int main() 
{
    int arr[] = {4, 17, 23, 32, 45, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;
    int *item = (int*) bsearch(&key, arr, n, sizeof(int), compare_ints);
    if (item != NULL) {
        printf ("Elemento %d encontrado no índice %ld.\n", key, item - arr);
    } else {
        printf ("Elemento %d não encontrado.\n", key);
    }
    return 0;
}