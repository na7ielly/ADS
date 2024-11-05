#include <stdio.h>

int main() 
{
    int x = 10;
    int y = 20;

    // Ponteiro para Constante (não pode modificar o valor, mas pode mudar o endereço)
    const int *ptr1 = &x;
    printf("Valor de x (através de ptr1): %d\n", *ptr1);

    // *ptr1 = 15; // Erro: Não pode modificar o valor de `x` através de `ptr1`
    ptr1 = &y; // Pode mudar o ponteiro para apontar para outro endereço
    printf("Valor de y (através de ptr1): %d\n", *ptr1);

    // Ponteiro Constante (pode modificar o valor, mas não pode mudar o endereço)
    int *const ptr2 = &x;
    printf("Valor de x (através de ptr2): %d\n", *ptr2);

    *ptr2 = 30; // Pode modificar o valor de `x` através de `ptr2`
    printf("Novo valor de x (através de ptr2): %d\n", *ptr2);

    // ptr2 = &y; // Erro: Não pode mudar o endereço de `ptr2`

    // Ponteiro Constante para Constante (não pode modificar o valor nem o endereço)
    const int *const ptr3 = &x;
    printf("Valor de x (através de ptr3): %d\n", *ptr3);

    // *ptr3 = 40; // Erro: Não pode modificar o valor de `x` através de `ptr3`
    // ptr3 = &y;  // Erro: Não pode mudar o endereço de `ptr3`

    return 0;
}
