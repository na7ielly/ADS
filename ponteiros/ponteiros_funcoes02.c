#include <stdio.h>
#include <stdlib.h>

int* criarNumero() 
{
    int *num = (int*) malloc (sizeof(int)); // Aloca memória
    *num = 42;
    return num; // Retorna ponteiro
}

int main() 
{
    int *ptr = criarNumero();
    printf ("Número: %d\n", *ptr);
    free (ptr); // Libera memória
    return 0;
}
