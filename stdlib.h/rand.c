#include <stdio.h>
#include <stdlib.h>

int main() 
{
    for (int i = 0; i < 5; i++) {
        printf ("Número aleatório: %d\n", rand());
    }

    int num = rand() % 100; // Gera um número entre 0 e 99
    printf ("Número aleatório entre 0 e 99: %d\n", num);

    return 0; 
}