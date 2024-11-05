#include <stdio.h>

int main()
{
    int x = 27;
    int *ptr;
    
    ptr = &x; // ptr armazena o endereço de x

    printf ("Conteúdo de x: %d\n", x);
    printf ("Endereço de x: %p\n", &x); // %p exibe o endereço
    printf ("Conteúdo apontado por ptr (ponteiro): %d\n", *ptr); // Desreferência(*), exibe 42
    printf ("Endereço apontado por ptr: %p\n", ptr);
    printf ("Endereço do ptr: %p\n", &ptr);
}