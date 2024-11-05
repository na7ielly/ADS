#include <stdio.h>
#include <stdlib.h>

int compare_ints (const void *a, const void *b) 
{
    int int_a = *(int*)a;
    int int_b = *(int*)b;
    return int_b - int_a; // Retorna em ordem crescente

    //return int_b - int_a; // Retorna em ordem decrescente
}

int main() 
{
    int arr[] = {32, 45, 17, 23, 89, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, n, sizeof(int), compare_ints);
    printf ("Array ordenado: ");
    for (int i = 0; i < n; i++) {
        printf ("%d ", arr[i]);
    }
    printf ("\n");
    return 0;
}