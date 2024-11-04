#include <stdio.h>

int main(){

    int x = 27;
    int *ptr = &x; // ptr armazena o endereço de x

    printf ("Endereço de x: %p\n", ptr); // %p exibe o endereço

    printf ("Valor de x através do ponteiro: %d\n", *ptr); // Desreferência(*), exibe 42
}